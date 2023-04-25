// Copyright (C) 2023 Intel Corporation
// SPDX-License-Identifier: MIT

// #include "ur_params.hpp"
#include "vector_addition.h"

int main(int argc, char *argv[]) {

    ///// Initialize UR.
    auto init = initUr();
    if (!(*init)) {
        return EXIT_FAILURE;
    }
    std::cout << "Unified Runtime Initialized.\n";

    ///// Get the Platform.
    ur_platform_handle_t platform = GetCudaPlatform();
    if (!platform) {
        std::cout << "Could not find a CUDA compatible platform.\n";
        return EXIT_FAILURE;
    }
    std::cout << "Got CUDA compatible platform.\n";

    ///// Create a Device
    auto DevicePtr = GetDevice(platform);
    if (!DevicePtr.get()) {
        std::cout << "Failed to find a device\n";
        return EXIT_FAILURE;
    }
    {
        size_t name_len = 0;
        urDeviceGetInfo(DevicePtr.get(), UR_DEVICE_INFO_NAME, 0, nullptr,
                        &name_len);
        char *deviceName = (char *)alloca(name_len);
        urDeviceGetInfo(DevicePtr.get(), UR_DEVICE_INFO_NAME, name_len,
                        deviceName, nullptr);
        std::cout << "Found Device: " << deviceName << std::endl;
    }

    ///// Create the Ctx.
    auto CtxPtr = GetContext(DevicePtr.get());
    if (!CtxPtr.get()) {
        return EXIT_FAILURE;
    }
    std::cout << "Unified Runtime Context Created.\n";

    ///// Create the Queue.
    auto QueuePtr = GetQueue(CtxPtr.get(), DevicePtr.get());
    if (!QueuePtr.get()) {
        return EXIT_FAILURE;
    }
    std::cout << "Unified Runtime Queue Created.\n";

    ///// Create and build the program.
    auto ProgramPtr = GetAndBuildProgram(CtxPtr.get());
    if (!ProgramPtr.get()) {
        return EXIT_FAILURE;
    }
    std::cout << "Unified Runtime Program Built.\n";

    ///// Get the Kernel.
    auto KernelPtr = GetKernel(ProgramPtr.get(), "_Z6vecAddPdS_S_i");
    if (!ProgramPtr.get()) {
        return EXIT_FAILURE;
    }
    std::cout << "Found Unified Runtime Kernel.\n";

    ////// Input Vectors
    constexpr size_t buffer_len = 16;
    constexpr size_t buffer_size = buffer_len * sizeof(double);

    // allocate buffers in host memory
    std::array<double, buffer_len> inputA;
    std::array<double, buffer_len> inputB;
    for (size_t i = 0; i < buffer_len; ++i) {
        // TODO - maybe do something a bit cleverer?
        inputA[i] = inputB[i] = i;
    }
    std::array<double, buffer_len> outputC{};

    ///// Allocate Device Memory
    auto InAPtr = GetDeviceAlloc(CtxPtr.get(), DevicePtr.get(), buffer_size);
    if (!InAPtr->devicePtr) {
        return EXIT_FAILURE;
    }
    auto InBPtr = GetDeviceAlloc(CtxPtr.get(), DevicePtr.get(), buffer_size);
    if (!InBPtr->devicePtr) {
        return EXIT_FAILURE;
    }
    auto OutCPtr = GetDeviceAlloc(CtxPtr.get(), DevicePtr.get(), buffer_size);
    if (!OutCPtr->devicePtr) {
        return EXIT_FAILURE;
    }
    std::cout << "Allocated USM on device.\n";

    //// Memcpy Host to device
    UR_CHECK_ERR(urEnqueueUSMMemcpy(QueuePtr.get(), true, InAPtr->devicePtr,
                                    inputA.data(), buffer_size, 0, nullptr,
                                    nullptr),
                 "Memcpy failed.", EXIT_FAILURE);

    UR_CHECK_ERR(urEnqueueUSMMemcpy(QueuePtr.get(), true, InBPtr->devicePtr,
                                    inputB.data(), buffer_size, 0, nullptr,
                                    nullptr),
                 "Memcpy failed.", EXIT_FAILURE);
    UR_CHECK_ERR(urEnqueueUSMMemcpy(QueuePtr.get(), true, OutCPtr->devicePtr,
                                    outputC.data(), buffer_size, 0, nullptr,
                                    nullptr),
                 "Memcpy failed.", EXIT_FAILURE);

    std::cout << "Host memory copied to device.\n";

    ////// Set the kernel arguments.
    UR_CHECK_ERR(
        urKernelSetArgPointer(KernelPtr.get(), 0, &(InAPtr->devicePtr)),
        "Failed to set kernel arguments for input buffer A", EXIT_FAILURE);
    UR_CHECK_ERR(
        urKernelSetArgPointer(KernelPtr.get(), 1, &(InBPtr->devicePtr)),
        "Failed to set kernel arguments for input buffer B", EXIT_FAILURE);
    UR_CHECK_ERR(
        urKernelSetArgPointer(KernelPtr.get(), 2, &(OutCPtr->devicePtr)),
        "Failed to set kernel arguments for output buffer C", EXIT_FAILURE);
    int n = static_cast<int>(buffer_len);
    UR_CHECK_ERR(urKernelSetArgValue(KernelPtr.get(), 3, sizeof(n), &n),
                 "Failed to set kernel arguments for size n", EXIT_FAILURE);

    ///// Enqueue the kernel
    std::array<size_t, 3> globalOffsets{0, 0, 0};
    std::array<size_t, 3> globalWorkSize{buffer_len, 1, 1};
    UR_CHECK_ERR(urEnqueueKernelLaunch(
                     QueuePtr.get(), KernelPtr.get(), 1, globalOffsets.data(),
                     globalWorkSize.data(), nullptr, 0, nullptr, nullptr),
                 "Failed to launch kernel.", EXIT_FAILURE);
    UR_CHECK_ERR(urQueueFinish(QueuePtr.get()), "Failed to flush queue.",
                 EXIT_FAILURE);
    std::cout << "Unified Runtime Kernel Execution Completed.\n";

    ///// Read Data back from device
    UR_CHECK_ERR(urEnqueueUSMMemcpy(QueuePtr.get(), true, outputC.data(),
                                    OutCPtr->devicePtr, buffer_size, 0, nullptr,
                                    nullptr),
                 "Failed to copy data back to host.", EXIT_FAILURE);

    for (size_t i = 0; i < buffer_len; ++i) {
        if (outputC[i] != inputA[i] + inputB[i]) {
            std::cout << "Vector addition failed.\n";
            return EXIT_FAILURE;
        }
    }
    std::cout << "Vector Addition Success. \n";

    std::cout << "Input buffer A:  ";
    printVector(inputA.data(), inputA.size());
    std::cout << "Input buffer B:  ";
    printVector(inputB.data(), inputB.size());
    std::cout << "Output buffer C: ";
    printVector(outputC.data(), outputC.size());

    return EXIT_SUCCESS;
}
