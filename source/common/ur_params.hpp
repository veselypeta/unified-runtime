/*
 *
 * Copyright (C) 2023 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 *
 * @file ur_params.hpp
 *
 */
#ifndef UR_PARAMS_HPP
#define UR_PARAMS_HPP 1

#include "ur_api.h"
#include <bitset>
#include <ostream>

namespace ur_params {
template <typename T> inline void serializePtr(std::ostream &os, T *ptr);

inline void serializeStruct(std::ostream &os, const void *ptr);
inline void serializeFlag_ur_device_init_flags_t(std::ostream &os,
                                                 ur_device_init_flags_t flag);
inline void
serializeTaggedTyped_ur_platform_info_t(std::ostream &os, const void *ptr,
                                        enum ur_platform_info_t value,
                                        size_t size);
inline void serializeTaggedTyped_ur_device_info_t(std::ostream &os,
                                                  const void *ptr,
                                                  enum ur_device_info_t value,
                                                  size_t size);
inline void serializeFlag_ur_device_fp_capability_flags_t(
    std::ostream &os, ur_device_fp_capability_flags_t flag);
inline void serializeFlag_ur_device_exec_capability_flags_t(
    std::ostream &os, ur_device_exec_capability_flags_t flag);
inline void serializeFlag_ur_device_affinity_domain_flags_t(
    std::ostream &os, ur_device_affinity_domain_flags_t flag);
inline void serializeFlag_ur_memory_order_capability_flags_t(
    std::ostream &os, ur_memory_order_capability_flags_t flag);
inline void serializeFlag_ur_memory_scope_capability_flags_t(
    std::ostream &os, ur_memory_scope_capability_flags_t flag);
inline void serializeFlag_ur_device_usm_access_capability_flags_t(
    std::ostream &os, ur_device_usm_access_capability_flags_t flag);
inline void serializeFlag_ur_context_flags_t(std::ostream &os,
                                             ur_context_flags_t flag);
inline void serializeTaggedTyped_ur_context_info_t(std::ostream &os,
                                                   const void *ptr,
                                                   enum ur_context_info_t value,
                                                   size_t size);
inline void serializeFlag_ur_mem_flags_t(std::ostream &os, ur_mem_flags_t flag);
inline void serializeTaggedTyped_ur_mem_info_t(std::ostream &os,
                                               const void *ptr,
                                               enum ur_mem_info_t value,
                                               size_t size);
inline void serializeTaggedTyped_ur_image_info_t(std::ostream &os,
                                                 const void *ptr,
                                                 enum ur_image_info_t value,
                                                 size_t size);
inline void serializeTaggedTyped_ur_sampler_info_t(std::ostream &os,
                                                   const void *ptr,
                                                   enum ur_sampler_info_t value,
                                                   size_t size);
inline void serializeFlag_ur_usm_host_mem_flags_t(std::ostream &os,
                                                  ur_usm_host_mem_flags_t flag);
inline void
serializeFlag_ur_usm_device_mem_flags_t(std::ostream &os,
                                        ur_usm_device_mem_flags_t flag);
inline void serializeFlag_ur_usm_pool_flags_t(std::ostream &os,
                                              ur_usm_pool_flags_t flag);
inline void
serializeTaggedTyped_ur_usm_alloc_info_t(std::ostream &os, const void *ptr,
                                         enum ur_usm_alloc_info_t value,
                                         size_t size);
inline void serializeFlag_ur_usm_advice_flags_t(std::ostream &os,
                                                ur_usm_advice_flags_t flag);
inline void serializeTaggedTyped_ur_program_info_t(std::ostream &os,
                                                   const void *ptr,
                                                   enum ur_program_info_t value,
                                                   size_t size);
inline void
serializeTaggedTyped_ur_program_build_info_t(std::ostream &os, const void *ptr,
                                             enum ur_program_build_info_t value,
                                             size_t size);
inline void serializeTaggedTyped_ur_kernel_info_t(std::ostream &os,
                                                  const void *ptr,
                                                  enum ur_kernel_info_t value,
                                                  size_t size);
inline void
serializeTaggedTyped_ur_kernel_group_info_t(std::ostream &os, const void *ptr,
                                            enum ur_kernel_group_info_t value,
                                            size_t size);
inline void serializeTaggedTyped_ur_kernel_sub_group_info_t(
    std::ostream &os, const void *ptr, enum ur_kernel_sub_group_info_t value,
    size_t size);
inline void
serializeTaggedTyped_ur_kernel_exec_info_t(std::ostream &os, const void *ptr,
                                           enum ur_kernel_exec_info_t value,
                                           size_t size);
inline void serializeTaggedTyped_ur_queue_info_t(std::ostream &os,
                                                 const void *ptr,
                                                 enum ur_queue_info_t value,
                                                 size_t size);
inline void serializeFlag_ur_queue_flags_t(std::ostream &os,
                                           ur_queue_flags_t flag);
inline void serializeTaggedTyped_ur_event_info_t(std::ostream &os,
                                                 const void *ptr,
                                                 enum ur_event_info_t value,
                                                 size_t size);
inline void
serializeTaggedTyped_ur_profiling_info_t(std::ostream &os, const void *ptr,
                                         enum ur_profiling_info_t value,
                                         size_t size);
inline void serializeFlag_ur_map_flags_t(std::ostream &os, ur_map_flags_t flag);
inline void
serializeFlag_ur_usm_migration_flags_t(std::ostream &os,
                                       ur_usm_migration_flags_t flag);
} // namespace ur_params

inline std::ostream &operator<<(std::ostream &os, enum ur_result_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_structure_type_t value);
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_base_properties_t params);
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_base_desc_t params);
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_rect_offset_t params);
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_rect_region_t params);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_device_init_flag_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_platform_info_t value);
inline std::ostream &operator<<(std::ostream &os, enum ur_api_version_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_platform_backend_t value);
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_device_binary_t params);
inline std::ostream &operator<<(std::ostream &os, enum ur_device_type_t value);
inline std::ostream &operator<<(std::ostream &os, enum ur_device_info_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_device_partition_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_device_fp_capability_flag_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_device_mem_cache_type_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_device_local_mem_type_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_device_exec_capability_flag_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_device_affinity_domain_flag_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_memory_order_capability_flag_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_memory_scope_capability_flag_t value);
inline std::ostream &
operator<<(std::ostream &os, enum ur_device_usm_access_capability_flag_t value);
inline std::ostream &operator<<(std::ostream &os, enum ur_context_flag_t value);
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_context_properties_t params);
inline std::ostream &operator<<(std::ostream &os, enum ur_context_info_t value);
inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_context_native_properties_t params);
inline std::ostream &operator<<(std::ostream &os, enum ur_mem_flag_t value);
inline std::ostream &operator<<(std::ostream &os, enum ur_mem_type_t value);
inline std::ostream &operator<<(std::ostream &os, enum ur_mem_info_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_image_channel_order_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_image_channel_type_t value);
inline std::ostream &operator<<(std::ostream &os, enum ur_image_info_t value);
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_image_format_t params);
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_image_desc_t params);
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_buffer_properties_t params);
inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_buffer_channel_properties_t params);
inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_buffer_alloc_location_properties_t params);
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_buffer_region_t params);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_buffer_create_type_t value);
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_mem_native_properties_t params);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_sampler_filter_mode_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_sampler_addressing_mode_t value);
inline std::ostream &operator<<(std::ostream &os, enum ur_sampler_info_t value);
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_sampler_desc_t params);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_usm_host_mem_flag_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_usm_device_mem_flag_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_usm_pool_flag_t value);
inline std::ostream &operator<<(std::ostream &os, enum ur_usm_type_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_usm_alloc_info_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_usm_advice_flag_t value);
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_usm_desc_t params);
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_usm_host_desc_t params);
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_usm_device_desc_t params);
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_usm_pool_desc_t params);
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_usm_pool_limits_desc_t params);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_program_metadata_type_t value);
inline std::ostream &operator<<(std::ostream &os,
                                const union ur_program_metadata_value_t params);
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_program_metadata_t params);
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_program_properties_t params);
inline std::ostream &operator<<(std::ostream &os, enum ur_program_info_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_program_build_status_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_program_binary_type_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_program_build_info_t value);
inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_specialization_constant_info_t params);
inline std::ostream &operator<<(std::ostream &os, enum ur_kernel_info_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_kernel_group_info_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_kernel_sub_group_info_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_kernel_cache_config_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_kernel_exec_info_t value);
inline std::ostream &
operator<<(std::ostream &os, const struct ur_kernel_native_properties_t params);
inline std::ostream &operator<<(std::ostream &os, enum ur_queue_info_t value);
inline std::ostream &operator<<(std::ostream &os, enum ur_queue_flag_t value);
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_queue_properties_t params);
inline std::ostream &
operator<<(std::ostream &os, const struct ur_queue_index_properties_t params);
inline std::ostream &
operator<<(std::ostream &os, const struct ur_queue_native_properties_t params);
inline std::ostream &operator<<(std::ostream &os, enum ur_command_t value);
inline std::ostream &operator<<(std::ostream &os, enum ur_event_status_t value);
inline std::ostream &operator<<(std::ostream &os, enum ur_event_info_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_profiling_info_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_execution_info_t value);
inline std::ostream &operator<<(std::ostream &os, enum ur_function_t value);
inline std::ostream &operator<<(std::ostream &os, enum ur_map_flag_t value);
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_usm_migration_flag_t value);

inline std::ostream &operator<<(std::ostream &os, enum ur_result_t value) {
    switch (value) {

    case UR_RESULT_SUCCESS:
        os << "UR_RESULT_SUCCESS";
        break;

    case UR_RESULT_ERROR_INVALID_OPERATION:
        os << "UR_RESULT_ERROR_INVALID_OPERATION";
        break;

    case UR_RESULT_ERROR_INVALID_QUEUE_PROPERTIES:
        os << "UR_RESULT_ERROR_INVALID_QUEUE_PROPERTIES";
        break;

    case UR_RESULT_ERROR_INVALID_QUEUE:
        os << "UR_RESULT_ERROR_INVALID_QUEUE";
        break;

    case UR_RESULT_ERROR_INVALID_VALUE:
        os << "UR_RESULT_ERROR_INVALID_VALUE";
        break;

    case UR_RESULT_ERROR_INVALID_CONTEXT:
        os << "UR_RESULT_ERROR_INVALID_CONTEXT";
        break;

    case UR_RESULT_ERROR_INVALID_PLATFORM:
        os << "UR_RESULT_ERROR_INVALID_PLATFORM";
        break;

    case UR_RESULT_ERROR_INVALID_BINARY:
        os << "UR_RESULT_ERROR_INVALID_BINARY";
        break;

    case UR_RESULT_ERROR_INVALID_PROGRAM:
        os << "UR_RESULT_ERROR_INVALID_PROGRAM";
        break;

    case UR_RESULT_ERROR_INVALID_SAMPLER:
        os << "UR_RESULT_ERROR_INVALID_SAMPLER";
        break;

    case UR_RESULT_ERROR_INVALID_BUFFER_SIZE:
        os << "UR_RESULT_ERROR_INVALID_BUFFER_SIZE";
        break;

    case UR_RESULT_ERROR_INVALID_MEM_OBJECT:
        os << "UR_RESULT_ERROR_INVALID_MEM_OBJECT";
        break;

    case UR_RESULT_ERROR_INVALID_EVENT:
        os << "UR_RESULT_ERROR_INVALID_EVENT";
        break;

    case UR_RESULT_ERROR_INVALID_EVENT_WAIT_LIST:
        os << "UR_RESULT_ERROR_INVALID_EVENT_WAIT_LIST";
        break;

    case UR_RESULT_ERROR_MISALIGNED_SUB_BUFFER_OFFSET:
        os << "UR_RESULT_ERROR_MISALIGNED_SUB_BUFFER_OFFSET";
        break;

    case UR_RESULT_ERROR_INVALID_WORK_GROUP_SIZE:
        os << "UR_RESULT_ERROR_INVALID_WORK_GROUP_SIZE";
        break;

    case UR_RESULT_ERROR_COMPILER_NOT_AVAILABLE:
        os << "UR_RESULT_ERROR_COMPILER_NOT_AVAILABLE";
        break;

    case UR_RESULT_ERROR_PROFILING_INFO_NOT_AVAILABLE:
        os << "UR_RESULT_ERROR_PROFILING_INFO_NOT_AVAILABLE";
        break;

    case UR_RESULT_ERROR_DEVICE_NOT_FOUND:
        os << "UR_RESULT_ERROR_DEVICE_NOT_FOUND";
        break;

    case UR_RESULT_ERROR_INVALID_DEVICE:
        os << "UR_RESULT_ERROR_INVALID_DEVICE";
        break;

    case UR_RESULT_ERROR_DEVICE_LOST:
        os << "UR_RESULT_ERROR_DEVICE_LOST";
        break;

    case UR_RESULT_ERROR_DEVICE_REQUIRES_RESET:
        os << "UR_RESULT_ERROR_DEVICE_REQUIRES_RESET";
        break;

    case UR_RESULT_ERROR_DEVICE_IN_LOW_POWER_STATE:
        os << "UR_RESULT_ERROR_DEVICE_IN_LOW_POWER_STATE";
        break;

    case UR_RESULT_ERROR_DEVICE_PARTITION_FAILED:
        os << "UR_RESULT_ERROR_DEVICE_PARTITION_FAILED";
        break;

    case UR_RESULT_ERROR_INVALID_DEVICE_PARTITION_COUNT:
        os << "UR_RESULT_ERROR_INVALID_DEVICE_PARTITION_COUNT";
        break;

    case UR_RESULT_ERROR_INVALID_WORK_ITEM_SIZE:
        os << "UR_RESULT_ERROR_INVALID_WORK_ITEM_SIZE";
        break;

    case UR_RESULT_ERROR_INVALID_WORK_DIMENSION:
        os << "UR_RESULT_ERROR_INVALID_WORK_DIMENSION";
        break;

    case UR_RESULT_ERROR_INVALID_KERNEL_ARGS:
        os << "UR_RESULT_ERROR_INVALID_KERNEL_ARGS";
        break;

    case UR_RESULT_ERROR_INVALID_KERNEL:
        os << "UR_RESULT_ERROR_INVALID_KERNEL";
        break;

    case UR_RESULT_ERROR_INVALID_KERNEL_NAME:
        os << "UR_RESULT_ERROR_INVALID_KERNEL_NAME";
        break;

    case UR_RESULT_ERROR_INVALID_KERNEL_ARGUMENT_INDEX:
        os << "UR_RESULT_ERROR_INVALID_KERNEL_ARGUMENT_INDEX";
        break;

    case UR_RESULT_ERROR_INVALID_KERNEL_ARGUMENT_SIZE:
        os << "UR_RESULT_ERROR_INVALID_KERNEL_ARGUMENT_SIZE";
        break;

    case UR_RESULT_ERROR_INVALID_KERNEL_ATTRIBUTE_VALUE:
        os << "UR_RESULT_ERROR_INVALID_KERNEL_ATTRIBUTE_VALUE";
        break;

    case UR_RESULT_ERROR_INVALID_IMAGE_SIZE:
        os << "UR_RESULT_ERROR_INVALID_IMAGE_SIZE";
        break;

    case UR_RESULT_ERROR_INVALID_IMAGE_FORMAT_DESCRIPTOR:
        os << "UR_RESULT_ERROR_INVALID_IMAGE_FORMAT_DESCRIPTOR";
        break;

    case UR_RESULT_ERROR_IMAGE_FORMAT_NOT_SUPPORTED:
        os << "UR_RESULT_ERROR_IMAGE_FORMAT_NOT_SUPPORTED";
        break;

    case UR_RESULT_ERROR_MEM_OBJECT_ALLOCATION_FAILURE:
        os << "UR_RESULT_ERROR_MEM_OBJECT_ALLOCATION_FAILURE";
        break;

    case UR_RESULT_ERROR_INVALID_PROGRAM_EXECUTABLE:
        os << "UR_RESULT_ERROR_INVALID_PROGRAM_EXECUTABLE";
        break;

    case UR_RESULT_ERROR_UNINITIALIZED:
        os << "UR_RESULT_ERROR_UNINITIALIZED";
        break;

    case UR_RESULT_ERROR_OUT_OF_HOST_MEMORY:
        os << "UR_RESULT_ERROR_OUT_OF_HOST_MEMORY";
        break;

    case UR_RESULT_ERROR_OUT_OF_DEVICE_MEMORY:
        os << "UR_RESULT_ERROR_OUT_OF_DEVICE_MEMORY";
        break;

    case UR_RESULT_ERROR_OUT_OF_RESOURCES:
        os << "UR_RESULT_ERROR_OUT_OF_RESOURCES";
        break;

    case UR_RESULT_ERROR_PROGRAM_BUILD_FAILURE:
        os << "UR_RESULT_ERROR_PROGRAM_BUILD_FAILURE";
        break;

    case UR_RESULT_ERROR_PROGRAM_LINK_FAILURE:
        os << "UR_RESULT_ERROR_PROGRAM_LINK_FAILURE";
        break;

    case UR_RESULT_ERROR_UNSUPPORTED_VERSION:
        os << "UR_RESULT_ERROR_UNSUPPORTED_VERSION";
        break;

    case UR_RESULT_ERROR_UNSUPPORTED_FEATURE:
        os << "UR_RESULT_ERROR_UNSUPPORTED_FEATURE";
        break;

    case UR_RESULT_ERROR_INVALID_ARGUMENT:
        os << "UR_RESULT_ERROR_INVALID_ARGUMENT";
        break;

    case UR_RESULT_ERROR_INVALID_NULL_HANDLE:
        os << "UR_RESULT_ERROR_INVALID_NULL_HANDLE";
        break;

    case UR_RESULT_ERROR_HANDLE_OBJECT_IN_USE:
        os << "UR_RESULT_ERROR_HANDLE_OBJECT_IN_USE";
        break;

    case UR_RESULT_ERROR_INVALID_NULL_POINTER:
        os << "UR_RESULT_ERROR_INVALID_NULL_POINTER";
        break;

    case UR_RESULT_ERROR_INVALID_SIZE:
        os << "UR_RESULT_ERROR_INVALID_SIZE";
        break;

    case UR_RESULT_ERROR_UNSUPPORTED_SIZE:
        os << "UR_RESULT_ERROR_UNSUPPORTED_SIZE";
        break;

    case UR_RESULT_ERROR_UNSUPPORTED_ALIGNMENT:
        os << "UR_RESULT_ERROR_UNSUPPORTED_ALIGNMENT";
        break;

    case UR_RESULT_ERROR_INVALID_SYNCHRONIZATION_OBJECT:
        os << "UR_RESULT_ERROR_INVALID_SYNCHRONIZATION_OBJECT";
        break;

    case UR_RESULT_ERROR_INVALID_ENUMERATION:
        os << "UR_RESULT_ERROR_INVALID_ENUMERATION";
        break;

    case UR_RESULT_ERROR_UNSUPPORTED_ENUMERATION:
        os << "UR_RESULT_ERROR_UNSUPPORTED_ENUMERATION";
        break;

    case UR_RESULT_ERROR_UNSUPPORTED_IMAGE_FORMAT:
        os << "UR_RESULT_ERROR_UNSUPPORTED_IMAGE_FORMAT";
        break;

    case UR_RESULT_ERROR_INVALID_NATIVE_BINARY:
        os << "UR_RESULT_ERROR_INVALID_NATIVE_BINARY";
        break;

    case UR_RESULT_ERROR_INVALID_GLOBAL_NAME:
        os << "UR_RESULT_ERROR_INVALID_GLOBAL_NAME";
        break;

    case UR_RESULT_ERROR_INVALID_FUNCTION_NAME:
        os << "UR_RESULT_ERROR_INVALID_FUNCTION_NAME";
        break;

    case UR_RESULT_ERROR_INVALID_GROUP_SIZE_DIMENSION:
        os << "UR_RESULT_ERROR_INVALID_GROUP_SIZE_DIMENSION";
        break;

    case UR_RESULT_ERROR_INVALID_GLOBAL_WIDTH_DIMENSION:
        os << "UR_RESULT_ERROR_INVALID_GLOBAL_WIDTH_DIMENSION";
        break;

    case UR_RESULT_ERROR_PROGRAM_UNLINKED:
        os << "UR_RESULT_ERROR_PROGRAM_UNLINKED";
        break;

    case UR_RESULT_ERROR_OVERLAPPING_REGIONS:
        os << "UR_RESULT_ERROR_OVERLAPPING_REGIONS";
        break;

    case UR_RESULT_ERROR_INVALID_HOST_PTR:
        os << "UR_RESULT_ERROR_INVALID_HOST_PTR";
        break;

    case UR_RESULT_ERROR_INVALID_USM_SIZE:
        os << "UR_RESULT_ERROR_INVALID_USM_SIZE";
        break;

    case UR_RESULT_ERROR_OBJECT_ALLOCATION_FAILURE:
        os << "UR_RESULT_ERROR_OBJECT_ALLOCATION_FAILURE";
        break;

    case UR_RESULT_ERROR_ADAPTER_SPECIFIC:
        os << "UR_RESULT_ERROR_ADAPTER_SPECIFIC";
        break;

    case UR_RESULT_ERROR_UNKNOWN:
        os << "UR_RESULT_ERROR_UNKNOWN";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_structure_type_t value) {
    switch (value) {

    case UR_STRUCTURE_TYPE_CONTEXT_PROPERTIES:
        os << "UR_STRUCTURE_TYPE_CONTEXT_PROPERTIES";
        break;

    case UR_STRUCTURE_TYPE_IMAGE_DESC:
        os << "UR_STRUCTURE_TYPE_IMAGE_DESC";
        break;

    case UR_STRUCTURE_TYPE_BUFFER_PROPERTIES:
        os << "UR_STRUCTURE_TYPE_BUFFER_PROPERTIES";
        break;

    case UR_STRUCTURE_TYPE_BUFFER_REGION:
        os << "UR_STRUCTURE_TYPE_BUFFER_REGION";
        break;

    case UR_STRUCTURE_TYPE_BUFFER_CHANNEL_PROPERTIES:
        os << "UR_STRUCTURE_TYPE_BUFFER_CHANNEL_PROPERTIES";
        break;

    case UR_STRUCTURE_TYPE_BUFFER_ALLOC_LOCATION_PROPERTIES:
        os << "UR_STRUCTURE_TYPE_BUFFER_ALLOC_LOCATION_PROPERTIES";
        break;

    case UR_STRUCTURE_TYPE_PROGRAM_PROPERTIES:
        os << "UR_STRUCTURE_TYPE_PROGRAM_PROPERTIES";
        break;

    case UR_STRUCTURE_TYPE_USM_DESC:
        os << "UR_STRUCTURE_TYPE_USM_DESC";
        break;

    case UR_STRUCTURE_TYPE_USM_HOST_DESC:
        os << "UR_STRUCTURE_TYPE_USM_HOST_DESC";
        break;

    case UR_STRUCTURE_TYPE_USM_DEVICE_DESC:
        os << "UR_STRUCTURE_TYPE_USM_DEVICE_DESC";
        break;

    case UR_STRUCTURE_TYPE_USM_POOL_DESC:
        os << "UR_STRUCTURE_TYPE_USM_POOL_DESC";
        break;

    case UR_STRUCTURE_TYPE_USM_POOL_LIMITS_DESC:
        os << "UR_STRUCTURE_TYPE_USM_POOL_LIMITS_DESC";
        break;

    case UR_STRUCTURE_TYPE_DEVICE_BINARY:
        os << "UR_STRUCTURE_TYPE_DEVICE_BINARY";
        break;

    case UR_STRUCTURE_TYPE_SAMPLER_DESC:
        os << "UR_STRUCTURE_TYPE_SAMPLER_DESC";
        break;

    case UR_STRUCTURE_TYPE_QUEUE_PROPERTIES:
        os << "UR_STRUCTURE_TYPE_QUEUE_PROPERTIES";
        break;

    case UR_STRUCTURE_TYPE_QUEUE_INDEX_PROPERTIES:
        os << "UR_STRUCTURE_TYPE_QUEUE_INDEX_PROPERTIES";
        break;

    case UR_STRUCTURE_TYPE_CONTEXT_NATIVE_PROPERTIES:
        os << "UR_STRUCTURE_TYPE_CONTEXT_NATIVE_PROPERTIES";
        break;

    case UR_STRUCTURE_TYPE_KERNEL_NATIVE_PROPERTIES:
        os << "UR_STRUCTURE_TYPE_KERNEL_NATIVE_PROPERTIES";
        break;

    case UR_STRUCTURE_TYPE_QUEUE_NATIVE_PROPERTIES:
        os << "UR_STRUCTURE_TYPE_QUEUE_NATIVE_PROPERTIES";
        break;

    case UR_STRUCTURE_TYPE_MEM_NATIVE_PROPERTIES:
        os << "UR_STRUCTURE_TYPE_MEM_NATIVE_PROPERTIES";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeStruct(std::ostream &os, const void *ptr) {
    if (ptr == NULL) {
        ur_params::serializePtr(os, ptr);
        return;
    }

    enum ur_structure_type_t *value = (enum ur_structure_type_t *)ptr;
    switch (*value) {

    case UR_STRUCTURE_TYPE_CONTEXT_PROPERTIES: {
        const ur_context_properties_t *pstruct =
            (const ur_context_properties_t *)ptr;
        ur_params::serializePtr(os, pstruct);
    } break;

    case UR_STRUCTURE_TYPE_IMAGE_DESC: {
        const ur_image_desc_t *pstruct = (const ur_image_desc_t *)ptr;
        ur_params::serializePtr(os, pstruct);
    } break;

    case UR_STRUCTURE_TYPE_BUFFER_PROPERTIES: {
        const ur_buffer_properties_t *pstruct =
            (const ur_buffer_properties_t *)ptr;
        ur_params::serializePtr(os, pstruct);
    } break;

    case UR_STRUCTURE_TYPE_BUFFER_REGION: {
        const ur_buffer_region_t *pstruct = (const ur_buffer_region_t *)ptr;
        ur_params::serializePtr(os, pstruct);
    } break;

    case UR_STRUCTURE_TYPE_BUFFER_CHANNEL_PROPERTIES: {
        const ur_buffer_channel_properties_t *pstruct =
            (const ur_buffer_channel_properties_t *)ptr;
        ur_params::serializePtr(os, pstruct);
    } break;

    case UR_STRUCTURE_TYPE_BUFFER_ALLOC_LOCATION_PROPERTIES: {
        const ur_buffer_alloc_location_properties_t *pstruct =
            (const ur_buffer_alloc_location_properties_t *)ptr;
        ur_params::serializePtr(os, pstruct);
    } break;

    case UR_STRUCTURE_TYPE_PROGRAM_PROPERTIES: {
        const ur_program_properties_t *pstruct =
            (const ur_program_properties_t *)ptr;
        ur_params::serializePtr(os, pstruct);
    } break;

    case UR_STRUCTURE_TYPE_USM_DESC: {
        const ur_usm_desc_t *pstruct = (const ur_usm_desc_t *)ptr;
        ur_params::serializePtr(os, pstruct);
    } break;

    case UR_STRUCTURE_TYPE_USM_HOST_DESC: {
        const ur_usm_host_desc_t *pstruct = (const ur_usm_host_desc_t *)ptr;
        ur_params::serializePtr(os, pstruct);
    } break;

    case UR_STRUCTURE_TYPE_USM_DEVICE_DESC: {
        const ur_usm_device_desc_t *pstruct = (const ur_usm_device_desc_t *)ptr;
        ur_params::serializePtr(os, pstruct);
    } break;

    case UR_STRUCTURE_TYPE_USM_POOL_DESC: {
        const ur_usm_pool_desc_t *pstruct = (const ur_usm_pool_desc_t *)ptr;
        ur_params::serializePtr(os, pstruct);
    } break;

    case UR_STRUCTURE_TYPE_USM_POOL_LIMITS_DESC: {
        const ur_usm_pool_limits_desc_t *pstruct =
            (const ur_usm_pool_limits_desc_t *)ptr;
        ur_params::serializePtr(os, pstruct);
    } break;

    case UR_STRUCTURE_TYPE_DEVICE_BINARY: {
        const ur_device_binary_t *pstruct = (const ur_device_binary_t *)ptr;
        ur_params::serializePtr(os, pstruct);
    } break;

    case UR_STRUCTURE_TYPE_SAMPLER_DESC: {
        const ur_sampler_desc_t *pstruct = (const ur_sampler_desc_t *)ptr;
        ur_params::serializePtr(os, pstruct);
    } break;

    case UR_STRUCTURE_TYPE_QUEUE_PROPERTIES: {
        const ur_queue_properties_t *pstruct =
            (const ur_queue_properties_t *)ptr;
        ur_params::serializePtr(os, pstruct);
    } break;

    case UR_STRUCTURE_TYPE_QUEUE_INDEX_PROPERTIES: {
        const ur_queue_properties_t *pstruct =
            (const ur_queue_properties_t *)ptr;
        ur_params::serializePtr(os, pstruct);
    } break;

    case UR_STRUCTURE_TYPE_CONTEXT_NATIVE_PROPERTIES: {
        const ur_context_native_properties_t *pstruct =
            (const ur_context_native_properties_t *)ptr;
        ur_params::serializePtr(os, pstruct);
    } break;

    case UR_STRUCTURE_TYPE_KERNEL_NATIVE_PROPERTIES: {
        const ur_kernel_native_properties_t *pstruct =
            (const ur_kernel_native_properties_t *)ptr;
        ur_params::serializePtr(os, pstruct);
    } break;

    case UR_STRUCTURE_TYPE_QUEUE_NATIVE_PROPERTIES: {
        const ur_queue_native_properties_t *pstruct =
            (const ur_queue_native_properties_t *)ptr;
        ur_params::serializePtr(os, pstruct);
    } break;

    case UR_STRUCTURE_TYPE_MEM_NATIVE_PROPERTIES: {
        const ur_mem_native_properties_t *pstruct =
            (const ur_mem_native_properties_t *)ptr;
        ur_params::serializePtr(os, pstruct);
    } break;
    default:
        os << "unknown enumerator";
        break;
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_base_properties_t params) {
    os << "(struct ur_base_properties_t){";

    os << ".stype = ";

    os << (params.stype);

    os << ", ";
    os << ".pNext = ";

    ur_params::serializeStruct(os, (params.pNext));

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_base_desc_t params) {
    os << "(struct ur_base_desc_t){";

    os << ".stype = ";

    os << (params.stype);

    os << ", ";
    os << ".pNext = ";

    ur_params::serializeStruct(os, (params.pNext));

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_rect_offset_t params) {
    os << "(struct ur_rect_offset_t){";

    os << ".x = ";

    os << (params.x);

    os << ", ";
    os << ".y = ";

    os << (params.y);

    os << ", ";
    os << ".z = ";

    os << (params.z);

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_rect_region_t params) {
    os << "(struct ur_rect_region_t){";

    os << ".width = ";

    os << (params.width);

    os << ", ";
    os << ".height = ";

    os << (params.height);

    os << ", ";
    os << ".depth = ";

    os << (params.depth);

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_device_init_flag_t value) {
    switch (value) {

    case UR_DEVICE_INIT_FLAG_GPU:
        os << "UR_DEVICE_INIT_FLAG_GPU";
        break;

    case UR_DEVICE_INIT_FLAG_CPU:
        os << "UR_DEVICE_INIT_FLAG_CPU";
        break;

    case UR_DEVICE_INIT_FLAG_FPGA:
        os << "UR_DEVICE_INIT_FLAG_FPGA";
        break;

    case UR_DEVICE_INIT_FLAG_MCA:
        os << "UR_DEVICE_INIT_FLAG_MCA";
        break;

    case UR_DEVICE_INIT_FLAG_VPU:
        os << "UR_DEVICE_INIT_FLAG_VPU";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeFlag_ur_device_init_flags_t(std::ostream &os,
                                                 ur_device_init_flags_t flag) {
    uint32_t val = flag;
    bool first = true;

    if ((val & UR_DEVICE_INIT_FLAG_GPU) == (uint32_t)UR_DEVICE_INIT_FLAG_GPU) {
        val ^= (uint32_t)UR_DEVICE_INIT_FLAG_GPU;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_INIT_FLAG_GPU;
    }

    if ((val & UR_DEVICE_INIT_FLAG_CPU) == (uint32_t)UR_DEVICE_INIT_FLAG_CPU) {
        val ^= (uint32_t)UR_DEVICE_INIT_FLAG_CPU;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_INIT_FLAG_CPU;
    }

    if ((val & UR_DEVICE_INIT_FLAG_FPGA) ==
        (uint32_t)UR_DEVICE_INIT_FLAG_FPGA) {
        val ^= (uint32_t)UR_DEVICE_INIT_FLAG_FPGA;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_INIT_FLAG_FPGA;
    }

    if ((val & UR_DEVICE_INIT_FLAG_MCA) == (uint32_t)UR_DEVICE_INIT_FLAG_MCA) {
        val ^= (uint32_t)UR_DEVICE_INIT_FLAG_MCA;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_INIT_FLAG_MCA;
    }

    if ((val & UR_DEVICE_INIT_FLAG_VPU) == (uint32_t)UR_DEVICE_INIT_FLAG_VPU) {
        val ^= (uint32_t)UR_DEVICE_INIT_FLAG_VPU;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_INIT_FLAG_VPU;
    }
    if (val != 0) {
        std::bitset<32> bits(val);
        if (!first) {
            os << " | ";
        }
        os << "unknown bit flags " << bits;
    } else if (first) {
        os << "0";
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_platform_info_t value) {
    switch (value) {

    case UR_PLATFORM_INFO_NAME:
        os << "UR_PLATFORM_INFO_NAME";
        break;

    case UR_PLATFORM_INFO_VENDOR_NAME:
        os << "UR_PLATFORM_INFO_VENDOR_NAME";
        break;

    case UR_PLATFORM_INFO_VERSION:
        os << "UR_PLATFORM_INFO_VERSION";
        break;

    case UR_PLATFORM_INFO_EXTENSIONS:
        os << "UR_PLATFORM_INFO_EXTENSIONS";
        break;

    case UR_PLATFORM_INFO_PROFILE:
        os << "UR_PLATFORM_INFO_PROFILE";
        break;

    case UR_PLATFORM_INFO_BACKEND:
        os << "UR_PLATFORM_INFO_BACKEND";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void
serializeTaggedTyped_ur_platform_info_t(std::ostream &os, const void *ptr,
                                        enum ur_platform_info_t value,
                                        size_t size) {
    if (ptr == NULL) {
        serializePtr(os, ptr);
        return;
    }

    switch (value) {

    case UR_PLATFORM_INFO_NAME: {

        const char *tptr = (const char *)ptr;
        serializePtr(os, tptr);
    } break;

    case UR_PLATFORM_INFO_VENDOR_NAME: {

        const char *tptr = (const char *)ptr;
        serializePtr(os, tptr);
    } break;

    case UR_PLATFORM_INFO_VERSION: {

        const char *tptr = (const char *)ptr;
        serializePtr(os, tptr);
    } break;

    case UR_PLATFORM_INFO_EXTENSIONS: {

        const char *tptr = (const char *)ptr;
        serializePtr(os, tptr);
    } break;

    case UR_PLATFORM_INFO_PROFILE: {

        const char *tptr = (const char *)ptr;
        serializePtr(os, tptr);
    } break;

    case UR_PLATFORM_INFO_BACKEND: {
        const ur_platform_backend_t *tptr = (const ur_platform_backend_t *)ptr;
        if (sizeof(ur_platform_backend_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_platform_backend_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;
    default:
        os << "unknown enumerator";
        break;
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os, enum ur_api_version_t value) {
    os << UR_MAJOR_VERSION(value) << "." << UR_MINOR_VERSION(value);
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_platform_backend_t value) {
    switch (value) {

    case UR_PLATFORM_BACKEND_UNKNOWN:
        os << "UR_PLATFORM_BACKEND_UNKNOWN";
        break;

    case UR_PLATFORM_BACKEND_LEVEL_ZERO:
        os << "UR_PLATFORM_BACKEND_LEVEL_ZERO";
        break;

    case UR_PLATFORM_BACKEND_OPENCL:
        os << "UR_PLATFORM_BACKEND_OPENCL";
        break;

    case UR_PLATFORM_BACKEND_CUDA:
        os << "UR_PLATFORM_BACKEND_CUDA";
        break;

    case UR_PLATFORM_BACKEND_HIP:
        os << "UR_PLATFORM_BACKEND_HIP";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_device_binary_t params) {
    os << "(struct ur_device_binary_t){";

    os << ".stype = ";

    os << (params.stype);

    os << ", ";
    os << ".pNext = ";

    ur_params::serializeStruct(os, (params.pNext));

    os << ", ";
    os << ".pDeviceTargetSpec = ";

    ur_params::serializePtr(os, (params.pDeviceTargetSpec));

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os, enum ur_device_type_t value) {
    switch (value) {

    case UR_DEVICE_TYPE_DEFAULT:
        os << "UR_DEVICE_TYPE_DEFAULT";
        break;

    case UR_DEVICE_TYPE_ALL:
        os << "UR_DEVICE_TYPE_ALL";
        break;

    case UR_DEVICE_TYPE_GPU:
        os << "UR_DEVICE_TYPE_GPU";
        break;

    case UR_DEVICE_TYPE_CPU:
        os << "UR_DEVICE_TYPE_CPU";
        break;

    case UR_DEVICE_TYPE_FPGA:
        os << "UR_DEVICE_TYPE_FPGA";
        break;

    case UR_DEVICE_TYPE_MCA:
        os << "UR_DEVICE_TYPE_MCA";
        break;

    case UR_DEVICE_TYPE_VPU:
        os << "UR_DEVICE_TYPE_VPU";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
inline std::ostream &operator<<(std::ostream &os, enum ur_device_info_t value) {
    switch (value) {

    case UR_DEVICE_INFO_TYPE:
        os << "UR_DEVICE_INFO_TYPE";
        break;

    case UR_DEVICE_INFO_VENDOR_ID:
        os << "UR_DEVICE_INFO_VENDOR_ID";
        break;

    case UR_DEVICE_INFO_DEVICE_ID:
        os << "UR_DEVICE_INFO_DEVICE_ID";
        break;

    case UR_DEVICE_INFO_MAX_COMPUTE_UNITS:
        os << "UR_DEVICE_INFO_MAX_COMPUTE_UNITS";
        break;

    case UR_DEVICE_INFO_MAX_WORK_ITEM_DIMENSIONS:
        os << "UR_DEVICE_INFO_MAX_WORK_ITEM_DIMENSIONS";
        break;

    case UR_DEVICE_INFO_MAX_WORK_ITEM_SIZES:
        os << "UR_DEVICE_INFO_MAX_WORK_ITEM_SIZES";
        break;

    case UR_DEVICE_INFO_MAX_WORK_GROUP_SIZE:
        os << "UR_DEVICE_INFO_MAX_WORK_GROUP_SIZE";
        break;

    case UR_DEVICE_INFO_SINGLE_FP_CONFIG:
        os << "UR_DEVICE_INFO_SINGLE_FP_CONFIG";
        break;

    case UR_DEVICE_INFO_HALF_FP_CONFIG:
        os << "UR_DEVICE_INFO_HALF_FP_CONFIG";
        break;

    case UR_DEVICE_INFO_DOUBLE_FP_CONFIG:
        os << "UR_DEVICE_INFO_DOUBLE_FP_CONFIG";
        break;

    case UR_DEVICE_INFO_QUEUE_PROPERTIES:
        os << "UR_DEVICE_INFO_QUEUE_PROPERTIES";
        break;

    case UR_DEVICE_INFO_PREFERRED_VECTOR_WIDTH_CHAR:
        os << "UR_DEVICE_INFO_PREFERRED_VECTOR_WIDTH_CHAR";
        break;

    case UR_DEVICE_INFO_PREFERRED_VECTOR_WIDTH_SHORT:
        os << "UR_DEVICE_INFO_PREFERRED_VECTOR_WIDTH_SHORT";
        break;

    case UR_DEVICE_INFO_PREFERRED_VECTOR_WIDTH_INT:
        os << "UR_DEVICE_INFO_PREFERRED_VECTOR_WIDTH_INT";
        break;

    case UR_DEVICE_INFO_PREFERRED_VECTOR_WIDTH_LONG:
        os << "UR_DEVICE_INFO_PREFERRED_VECTOR_WIDTH_LONG";
        break;

    case UR_DEVICE_INFO_PREFERRED_VECTOR_WIDTH_FLOAT:
        os << "UR_DEVICE_INFO_PREFERRED_VECTOR_WIDTH_FLOAT";
        break;

    case UR_DEVICE_INFO_PREFERRED_VECTOR_WIDTH_DOUBLE:
        os << "UR_DEVICE_INFO_PREFERRED_VECTOR_WIDTH_DOUBLE";
        break;

    case UR_DEVICE_INFO_PREFERRED_VECTOR_WIDTH_HALF:
        os << "UR_DEVICE_INFO_PREFERRED_VECTOR_WIDTH_HALF";
        break;

    case UR_DEVICE_INFO_NATIVE_VECTOR_WIDTH_CHAR:
        os << "UR_DEVICE_INFO_NATIVE_VECTOR_WIDTH_CHAR";
        break;

    case UR_DEVICE_INFO_NATIVE_VECTOR_WIDTH_SHORT:
        os << "UR_DEVICE_INFO_NATIVE_VECTOR_WIDTH_SHORT";
        break;

    case UR_DEVICE_INFO_NATIVE_VECTOR_WIDTH_INT:
        os << "UR_DEVICE_INFO_NATIVE_VECTOR_WIDTH_INT";
        break;

    case UR_DEVICE_INFO_NATIVE_VECTOR_WIDTH_LONG:
        os << "UR_DEVICE_INFO_NATIVE_VECTOR_WIDTH_LONG";
        break;

    case UR_DEVICE_INFO_NATIVE_VECTOR_WIDTH_FLOAT:
        os << "UR_DEVICE_INFO_NATIVE_VECTOR_WIDTH_FLOAT";
        break;

    case UR_DEVICE_INFO_NATIVE_VECTOR_WIDTH_DOUBLE:
        os << "UR_DEVICE_INFO_NATIVE_VECTOR_WIDTH_DOUBLE";
        break;

    case UR_DEVICE_INFO_NATIVE_VECTOR_WIDTH_HALF:
        os << "UR_DEVICE_INFO_NATIVE_VECTOR_WIDTH_HALF";
        break;

    case UR_DEVICE_INFO_MAX_CLOCK_FREQUENCY:
        os << "UR_DEVICE_INFO_MAX_CLOCK_FREQUENCY";
        break;

    case UR_DEVICE_INFO_MEMORY_CLOCK_RATE:
        os << "UR_DEVICE_INFO_MEMORY_CLOCK_RATE";
        break;

    case UR_DEVICE_INFO_ADDRESS_BITS:
        os << "UR_DEVICE_INFO_ADDRESS_BITS";
        break;

    case UR_DEVICE_INFO_MAX_MEM_ALLOC_SIZE:
        os << "UR_DEVICE_INFO_MAX_MEM_ALLOC_SIZE";
        break;

    case UR_DEVICE_INFO_IMAGE_SUPPORTED:
        os << "UR_DEVICE_INFO_IMAGE_SUPPORTED";
        break;

    case UR_DEVICE_INFO_MAX_READ_IMAGE_ARGS:
        os << "UR_DEVICE_INFO_MAX_READ_IMAGE_ARGS";
        break;

    case UR_DEVICE_INFO_MAX_WRITE_IMAGE_ARGS:
        os << "UR_DEVICE_INFO_MAX_WRITE_IMAGE_ARGS";
        break;

    case UR_DEVICE_INFO_MAX_READ_WRITE_IMAGE_ARGS:
        os << "UR_DEVICE_INFO_MAX_READ_WRITE_IMAGE_ARGS";
        break;

    case UR_DEVICE_INFO_IMAGE2D_MAX_WIDTH:
        os << "UR_DEVICE_INFO_IMAGE2D_MAX_WIDTH";
        break;

    case UR_DEVICE_INFO_IMAGE2D_MAX_HEIGHT:
        os << "UR_DEVICE_INFO_IMAGE2D_MAX_HEIGHT";
        break;

    case UR_DEVICE_INFO_IMAGE3D_MAX_WIDTH:
        os << "UR_DEVICE_INFO_IMAGE3D_MAX_WIDTH";
        break;

    case UR_DEVICE_INFO_IMAGE3D_MAX_HEIGHT:
        os << "UR_DEVICE_INFO_IMAGE3D_MAX_HEIGHT";
        break;

    case UR_DEVICE_INFO_IMAGE3D_MAX_DEPTH:
        os << "UR_DEVICE_INFO_IMAGE3D_MAX_DEPTH";
        break;

    case UR_DEVICE_INFO_IMAGE_MAX_BUFFER_SIZE:
        os << "UR_DEVICE_INFO_IMAGE_MAX_BUFFER_SIZE";
        break;

    case UR_DEVICE_INFO_IMAGE_MAX_ARRAY_SIZE:
        os << "UR_DEVICE_INFO_IMAGE_MAX_ARRAY_SIZE";
        break;

    case UR_DEVICE_INFO_MAX_SAMPLERS:
        os << "UR_DEVICE_INFO_MAX_SAMPLERS";
        break;

    case UR_DEVICE_INFO_MAX_PARAMETER_SIZE:
        os << "UR_DEVICE_INFO_MAX_PARAMETER_SIZE";
        break;

    case UR_DEVICE_INFO_MEM_BASE_ADDR_ALIGN:
        os << "UR_DEVICE_INFO_MEM_BASE_ADDR_ALIGN";
        break;

    case UR_DEVICE_INFO_GLOBAL_MEM_CACHE_TYPE:
        os << "UR_DEVICE_INFO_GLOBAL_MEM_CACHE_TYPE";
        break;

    case UR_DEVICE_INFO_GLOBAL_MEM_CACHELINE_SIZE:
        os << "UR_DEVICE_INFO_GLOBAL_MEM_CACHELINE_SIZE";
        break;

    case UR_DEVICE_INFO_GLOBAL_MEM_CACHE_SIZE:
        os << "UR_DEVICE_INFO_GLOBAL_MEM_CACHE_SIZE";
        break;

    case UR_DEVICE_INFO_GLOBAL_MEM_SIZE:
        os << "UR_DEVICE_INFO_GLOBAL_MEM_SIZE";
        break;

    case UR_DEVICE_INFO_GLOBAL_MEM_FREE:
        os << "UR_DEVICE_INFO_GLOBAL_MEM_FREE";
        break;

    case UR_DEVICE_INFO_MAX_CONSTANT_BUFFER_SIZE:
        os << "UR_DEVICE_INFO_MAX_CONSTANT_BUFFER_SIZE";
        break;

    case UR_DEVICE_INFO_MAX_CONSTANT_ARGS:
        os << "UR_DEVICE_INFO_MAX_CONSTANT_ARGS";
        break;

    case UR_DEVICE_INFO_LOCAL_MEM_TYPE:
        os << "UR_DEVICE_INFO_LOCAL_MEM_TYPE";
        break;

    case UR_DEVICE_INFO_LOCAL_MEM_SIZE:
        os << "UR_DEVICE_INFO_LOCAL_MEM_SIZE";
        break;

    case UR_DEVICE_INFO_ERROR_CORRECTION_SUPPORT:
        os << "UR_DEVICE_INFO_ERROR_CORRECTION_SUPPORT";
        break;

    case UR_DEVICE_INFO_HOST_UNIFIED_MEMORY:
        os << "UR_DEVICE_INFO_HOST_UNIFIED_MEMORY";
        break;

    case UR_DEVICE_INFO_PROFILING_TIMER_RESOLUTION:
        os << "UR_DEVICE_INFO_PROFILING_TIMER_RESOLUTION";
        break;

    case UR_DEVICE_INFO_ENDIAN_LITTLE:
        os << "UR_DEVICE_INFO_ENDIAN_LITTLE";
        break;

    case UR_DEVICE_INFO_AVAILABLE:
        os << "UR_DEVICE_INFO_AVAILABLE";
        break;

    case UR_DEVICE_INFO_COMPILER_AVAILABLE:
        os << "UR_DEVICE_INFO_COMPILER_AVAILABLE";
        break;

    case UR_DEVICE_INFO_LINKER_AVAILABLE:
        os << "UR_DEVICE_INFO_LINKER_AVAILABLE";
        break;

    case UR_DEVICE_INFO_EXECUTION_CAPABILITIES:
        os << "UR_DEVICE_INFO_EXECUTION_CAPABILITIES";
        break;

    case UR_DEVICE_INFO_QUEUE_ON_DEVICE_PROPERTIES:
        os << "UR_DEVICE_INFO_QUEUE_ON_DEVICE_PROPERTIES";
        break;

    case UR_DEVICE_INFO_QUEUE_ON_HOST_PROPERTIES:
        os << "UR_DEVICE_INFO_QUEUE_ON_HOST_PROPERTIES";
        break;

    case UR_DEVICE_INFO_BUILT_IN_KERNELS:
        os << "UR_DEVICE_INFO_BUILT_IN_KERNELS";
        break;

    case UR_DEVICE_INFO_PLATFORM:
        os << "UR_DEVICE_INFO_PLATFORM";
        break;

    case UR_DEVICE_INFO_REFERENCE_COUNT:
        os << "UR_DEVICE_INFO_REFERENCE_COUNT";
        break;

    case UR_DEVICE_INFO_IL_VERSION:
        os << "UR_DEVICE_INFO_IL_VERSION";
        break;

    case UR_DEVICE_INFO_NAME:
        os << "UR_DEVICE_INFO_NAME";
        break;

    case UR_DEVICE_INFO_VENDOR:
        os << "UR_DEVICE_INFO_VENDOR";
        break;

    case UR_DEVICE_INFO_DRIVER_VERSION:
        os << "UR_DEVICE_INFO_DRIVER_VERSION";
        break;

    case UR_DEVICE_INFO_PROFILE:
        os << "UR_DEVICE_INFO_PROFILE";
        break;

    case UR_DEVICE_INFO_VERSION:
        os << "UR_DEVICE_INFO_VERSION";
        break;

    case UR_DEVICE_INFO_BACKEND_RUNTIME_VERSION:
        os << "UR_DEVICE_INFO_BACKEND_RUNTIME_VERSION";
        break;

    case UR_DEVICE_INFO_EXTENSIONS:
        os << "UR_DEVICE_INFO_EXTENSIONS";
        break;

    case UR_DEVICE_INFO_PRINTF_BUFFER_SIZE:
        os << "UR_DEVICE_INFO_PRINTF_BUFFER_SIZE";
        break;

    case UR_DEVICE_INFO_PREFERRED_INTEROP_USER_SYNC:
        os << "UR_DEVICE_INFO_PREFERRED_INTEROP_USER_SYNC";
        break;

    case UR_DEVICE_INFO_PARENT_DEVICE:
        os << "UR_DEVICE_INFO_PARENT_DEVICE";
        break;

    case UR_DEVICE_INFO_PARTITION_PROPERTIES:
        os << "UR_DEVICE_INFO_PARTITION_PROPERTIES";
        break;

    case UR_DEVICE_INFO_PARTITION_MAX_SUB_DEVICES:
        os << "UR_DEVICE_INFO_PARTITION_MAX_SUB_DEVICES";
        break;

    case UR_DEVICE_INFO_PARTITION_AFFINITY_DOMAIN:
        os << "UR_DEVICE_INFO_PARTITION_AFFINITY_DOMAIN";
        break;

    case UR_DEVICE_INFO_PARTITION_TYPE:
        os << "UR_DEVICE_INFO_PARTITION_TYPE";
        break;

    case UR_DEVICE_INFO_MAX_NUM_SUB_GROUPS:
        os << "UR_DEVICE_INFO_MAX_NUM_SUB_GROUPS";
        break;

    case UR_DEVICE_INFO_SUB_GROUP_INDEPENDENT_FORWARD_PROGRESS:
        os << "UR_DEVICE_INFO_SUB_GROUP_INDEPENDENT_FORWARD_PROGRESS";
        break;

    case UR_DEVICE_INFO_SUB_GROUP_SIZES_INTEL:
        os << "UR_DEVICE_INFO_SUB_GROUP_SIZES_INTEL";
        break;

    case UR_DEVICE_INFO_USM_HOST_SUPPORT:
        os << "UR_DEVICE_INFO_USM_HOST_SUPPORT";
        break;

    case UR_DEVICE_INFO_USM_DEVICE_SUPPORT:
        os << "UR_DEVICE_INFO_USM_DEVICE_SUPPORT";
        break;

    case UR_DEVICE_INFO_USM_SINGLE_SHARED_SUPPORT:
        os << "UR_DEVICE_INFO_USM_SINGLE_SHARED_SUPPORT";
        break;

    case UR_DEVICE_INFO_USM_CROSS_SHARED_SUPPORT:
        os << "UR_DEVICE_INFO_USM_CROSS_SHARED_SUPPORT";
        break;

    case UR_DEVICE_INFO_USM_SYSTEM_SHARED_SUPPORT:
        os << "UR_DEVICE_INFO_USM_SYSTEM_SHARED_SUPPORT";
        break;

    case UR_DEVICE_INFO_UUID:
        os << "UR_DEVICE_INFO_UUID";
        break;

    case UR_DEVICE_INFO_PCI_ADDRESS:
        os << "UR_DEVICE_INFO_PCI_ADDRESS";
        break;

    case UR_DEVICE_INFO_GPU_EU_COUNT:
        os << "UR_DEVICE_INFO_GPU_EU_COUNT";
        break;

    case UR_DEVICE_INFO_GPU_EU_SIMD_WIDTH:
        os << "UR_DEVICE_INFO_GPU_EU_SIMD_WIDTH";
        break;

    case UR_DEVICE_INFO_GPU_EU_SLICES:
        os << "UR_DEVICE_INFO_GPU_EU_SLICES";
        break;

    case UR_DEVICE_INFO_GPU_EU_COUNT_PER_SUBSLICE:
        os << "UR_DEVICE_INFO_GPU_EU_COUNT_PER_SUBSLICE";
        break;

    case UR_DEVICE_INFO_GPU_SUBSLICES_PER_SLICE:
        os << "UR_DEVICE_INFO_GPU_SUBSLICES_PER_SLICE";
        break;

    case UR_DEVICE_INFO_GPU_HW_THREADS_PER_EU:
        os << "UR_DEVICE_INFO_GPU_HW_THREADS_PER_EU";
        break;

    case UR_DEVICE_INFO_MAX_MEMORY_BANDWIDTH:
        os << "UR_DEVICE_INFO_MAX_MEMORY_BANDWIDTH";
        break;

    case UR_DEVICE_INFO_IMAGE_SRGB:
        os << "UR_DEVICE_INFO_IMAGE_SRGB";
        break;

    case UR_DEVICE_INFO_BUILD_ON_SUBDEVICE:
        os << "UR_DEVICE_INFO_BUILD_ON_SUBDEVICE";
        break;

    case UR_DEVICE_INFO_ATOMIC_64:
        os << "UR_DEVICE_INFO_ATOMIC_64";
        break;

    case UR_DEVICE_INFO_ATOMIC_MEMORY_ORDER_CAPABILITIES:
        os << "UR_DEVICE_INFO_ATOMIC_MEMORY_ORDER_CAPABILITIES";
        break;

    case UR_DEVICE_INFO_ATOMIC_MEMORY_SCOPE_CAPABILITIES:
        os << "UR_DEVICE_INFO_ATOMIC_MEMORY_SCOPE_CAPABILITIES";
        break;

    case UR_DEVICE_INFO_ATOMIC_FENCE_ORDER_CAPABILITIES:
        os << "UR_DEVICE_INFO_ATOMIC_FENCE_ORDER_CAPABILITIES";
        break;

    case UR_DEVICE_INFO_ATOMIC_FENCE_SCOPE_CAPABILITIES:
        os << "UR_DEVICE_INFO_ATOMIC_FENCE_SCOPE_CAPABILITIES";
        break;

    case UR_DEVICE_INFO_BFLOAT16:
        os << "UR_DEVICE_INFO_BFLOAT16";
        break;

    case UR_DEVICE_INFO_MAX_COMPUTE_QUEUE_INDICES:
        os << "UR_DEVICE_INFO_MAX_COMPUTE_QUEUE_INDICES";
        break;

    case UR_DEVICE_INFO_KERNEL_SET_SPECIALIZATION_CONSTANTS:
        os << "UR_DEVICE_INFO_KERNEL_SET_SPECIALIZATION_CONSTANTS";
        break;

    case UR_DEVICE_INFO_MEMORY_BUS_WIDTH:
        os << "UR_DEVICE_INFO_MEMORY_BUS_WIDTH";
        break;

    case UR_DEVICE_INFO_MAX_WORK_GROUPS_3D:
        os << "UR_DEVICE_INFO_MAX_WORK_GROUPS_3D";
        break;

    case UR_DEVICE_INFO_ASYNC_BARRIER:
        os << "UR_DEVICE_INFO_ASYNC_BARRIER";
        break;

    case UR_DEVICE_INFO_MEM_CHANNEL_SUPPORT:
        os << "UR_DEVICE_INFO_MEM_CHANNEL_SUPPORT";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeTaggedTyped_ur_device_info_t(std::ostream &os,
                                                  const void *ptr,
                                                  enum ur_device_info_t value,
                                                  size_t size) {
    if (ptr == NULL) {
        serializePtr(os, ptr);
        return;
    }

    switch (value) {

    case UR_DEVICE_INFO_TYPE: {
        const ur_device_type_t *tptr = (const ur_device_type_t *)ptr;
        if (sizeof(ur_device_type_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_device_type_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_VENDOR_ID: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_DEVICE_ID: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_MAX_COMPUTE_UNITS: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_MAX_WORK_ITEM_DIMENSIONS: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_MAX_WORK_ITEM_SIZES: {

        const size_t *tptr = (const size_t *)ptr;
        os << "[";
        size_t nelems = size / sizeof(size_t);
        for (size_t i = 0; i < nelems; ++i) {
            if (i != 0) {
                os << ", ";
            }

            os << tptr[i];
        }
        os << "]";
    } break;

    case UR_DEVICE_INFO_MAX_WORK_GROUP_SIZE: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_SINGLE_FP_CONFIG: {
        const ur_device_fp_capability_flags_t *tptr =
            (const ur_device_fp_capability_flags_t *)ptr;
        if (sizeof(ur_device_fp_capability_flags_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_device_fp_capability_flags_t)
               << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializeFlag_ur_device_fp_capability_flags_t(os, *tptr);

        os << ")";
    } break;

    case UR_DEVICE_INFO_HALF_FP_CONFIG: {
        const ur_device_fp_capability_flags_t *tptr =
            (const ur_device_fp_capability_flags_t *)ptr;
        if (sizeof(ur_device_fp_capability_flags_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_device_fp_capability_flags_t)
               << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializeFlag_ur_device_fp_capability_flags_t(os, *tptr);

        os << ")";
    } break;

    case UR_DEVICE_INFO_DOUBLE_FP_CONFIG: {
        const ur_device_fp_capability_flags_t *tptr =
            (const ur_device_fp_capability_flags_t *)ptr;
        if (sizeof(ur_device_fp_capability_flags_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_device_fp_capability_flags_t)
               << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializeFlag_ur_device_fp_capability_flags_t(os, *tptr);

        os << ")";
    } break;

    case UR_DEVICE_INFO_QUEUE_PROPERTIES: {
        const ur_queue_flags_t *tptr = (const ur_queue_flags_t *)ptr;
        if (sizeof(ur_queue_flags_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_queue_flags_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializeFlag_ur_queue_flags_t(os, *tptr);

        os << ")";
    } break;

    case UR_DEVICE_INFO_PREFERRED_VECTOR_WIDTH_CHAR: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_PREFERRED_VECTOR_WIDTH_SHORT: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_PREFERRED_VECTOR_WIDTH_INT: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_PREFERRED_VECTOR_WIDTH_LONG: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_PREFERRED_VECTOR_WIDTH_FLOAT: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_PREFERRED_VECTOR_WIDTH_DOUBLE: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_PREFERRED_VECTOR_WIDTH_HALF: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_NATIVE_VECTOR_WIDTH_CHAR: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_NATIVE_VECTOR_WIDTH_SHORT: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_NATIVE_VECTOR_WIDTH_INT: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_NATIVE_VECTOR_WIDTH_LONG: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_NATIVE_VECTOR_WIDTH_FLOAT: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_NATIVE_VECTOR_WIDTH_DOUBLE: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_NATIVE_VECTOR_WIDTH_HALF: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_MAX_CLOCK_FREQUENCY: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_MEMORY_CLOCK_RATE: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_ADDRESS_BITS: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_MAX_MEM_ALLOC_SIZE: {
        const uint64_t *tptr = (const uint64_t *)ptr;
        if (sizeof(uint64_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint64_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_IMAGE_SUPPORTED: {
        const ur_bool_t *tptr = (const ur_bool_t *)ptr;
        if (sizeof(ur_bool_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_bool_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_MAX_READ_IMAGE_ARGS: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_MAX_WRITE_IMAGE_ARGS: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_MAX_READ_WRITE_IMAGE_ARGS: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_IMAGE2D_MAX_WIDTH: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_IMAGE2D_MAX_HEIGHT: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_IMAGE3D_MAX_WIDTH: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_IMAGE3D_MAX_HEIGHT: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_IMAGE3D_MAX_DEPTH: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_IMAGE_MAX_BUFFER_SIZE: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_IMAGE_MAX_ARRAY_SIZE: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_MAX_SAMPLERS: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_MAX_PARAMETER_SIZE: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_MEM_BASE_ADDR_ALIGN: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_GLOBAL_MEM_CACHE_TYPE: {
        const ur_device_mem_cache_type_t *tptr =
            (const ur_device_mem_cache_type_t *)ptr;
        if (sizeof(ur_device_mem_cache_type_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_device_mem_cache_type_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_GLOBAL_MEM_CACHELINE_SIZE: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_GLOBAL_MEM_CACHE_SIZE: {
        const uint64_t *tptr = (const uint64_t *)ptr;
        if (sizeof(uint64_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint64_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_GLOBAL_MEM_SIZE: {
        const uint64_t *tptr = (const uint64_t *)ptr;
        if (sizeof(uint64_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint64_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_GLOBAL_MEM_FREE: {
        const uint64_t *tptr = (const uint64_t *)ptr;
        if (sizeof(uint64_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint64_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_MAX_CONSTANT_BUFFER_SIZE: {
        const uint64_t *tptr = (const uint64_t *)ptr;
        if (sizeof(uint64_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint64_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_MAX_CONSTANT_ARGS: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_LOCAL_MEM_TYPE: {
        const ur_device_local_mem_type_t *tptr =
            (const ur_device_local_mem_type_t *)ptr;
        if (sizeof(ur_device_local_mem_type_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_device_local_mem_type_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_LOCAL_MEM_SIZE: {
        const uint64_t *tptr = (const uint64_t *)ptr;
        if (sizeof(uint64_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint64_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_ERROR_CORRECTION_SUPPORT: {
        const ur_bool_t *tptr = (const ur_bool_t *)ptr;
        if (sizeof(ur_bool_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_bool_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_HOST_UNIFIED_MEMORY: {
        const ur_bool_t *tptr = (const ur_bool_t *)ptr;
        if (sizeof(ur_bool_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_bool_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_PROFILING_TIMER_RESOLUTION: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_ENDIAN_LITTLE: {
        const ur_bool_t *tptr = (const ur_bool_t *)ptr;
        if (sizeof(ur_bool_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_bool_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_AVAILABLE: {
        const ur_bool_t *tptr = (const ur_bool_t *)ptr;
        if (sizeof(ur_bool_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_bool_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_COMPILER_AVAILABLE: {
        const ur_bool_t *tptr = (const ur_bool_t *)ptr;
        if (sizeof(ur_bool_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_bool_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_LINKER_AVAILABLE: {
        const ur_bool_t *tptr = (const ur_bool_t *)ptr;
        if (sizeof(ur_bool_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_bool_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_EXECUTION_CAPABILITIES: {
        const ur_device_exec_capability_flags_t *tptr =
            (const ur_device_exec_capability_flags_t *)ptr;
        if (sizeof(ur_device_exec_capability_flags_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_device_exec_capability_flags_t)
               << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializeFlag_ur_device_exec_capability_flags_t(os, *tptr);

        os << ")";
    } break;

    case UR_DEVICE_INFO_QUEUE_ON_DEVICE_PROPERTIES: {
        const ur_queue_flags_t *tptr = (const ur_queue_flags_t *)ptr;
        if (sizeof(ur_queue_flags_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_queue_flags_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializeFlag_ur_queue_flags_t(os, *tptr);

        os << ")";
    } break;

    case UR_DEVICE_INFO_QUEUE_ON_HOST_PROPERTIES: {
        const ur_queue_flags_t *tptr = (const ur_queue_flags_t *)ptr;
        if (sizeof(ur_queue_flags_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_queue_flags_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializeFlag_ur_queue_flags_t(os, *tptr);

        os << ")";
    } break;

    case UR_DEVICE_INFO_BUILT_IN_KERNELS: {

        const char *tptr = (const char *)ptr;
        serializePtr(os, tptr);
    } break;

    case UR_DEVICE_INFO_PLATFORM: {
        const ur_platform_handle_t *tptr = (const ur_platform_handle_t *)ptr;
        if (sizeof(ur_platform_handle_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_platform_handle_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializePtr(os, *tptr);

        os << ")";
    } break;

    case UR_DEVICE_INFO_REFERENCE_COUNT: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_IL_VERSION: {

        const char *tptr = (const char *)ptr;
        serializePtr(os, tptr);
    } break;

    case UR_DEVICE_INFO_NAME: {

        const char *tptr = (const char *)ptr;
        serializePtr(os, tptr);
    } break;

    case UR_DEVICE_INFO_VENDOR: {

        const char *tptr = (const char *)ptr;
        serializePtr(os, tptr);
    } break;

    case UR_DEVICE_INFO_DRIVER_VERSION: {

        const char *tptr = (const char *)ptr;
        serializePtr(os, tptr);
    } break;

    case UR_DEVICE_INFO_PROFILE: {

        const char *tptr = (const char *)ptr;
        serializePtr(os, tptr);
    } break;

    case UR_DEVICE_INFO_VERSION: {

        const char *tptr = (const char *)ptr;
        serializePtr(os, tptr);
    } break;

    case UR_DEVICE_INFO_BACKEND_RUNTIME_VERSION: {

        const char *tptr = (const char *)ptr;
        serializePtr(os, tptr);
    } break;

    case UR_DEVICE_INFO_EXTENSIONS: {

        const char *tptr = (const char *)ptr;
        serializePtr(os, tptr);
    } break;

    case UR_DEVICE_INFO_PRINTF_BUFFER_SIZE: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_PREFERRED_INTEROP_USER_SYNC: {
        const ur_bool_t *tptr = (const ur_bool_t *)ptr;
        if (sizeof(ur_bool_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_bool_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_PARENT_DEVICE: {
        const ur_device_handle_t *tptr = (const ur_device_handle_t *)ptr;
        if (sizeof(ur_device_handle_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_device_handle_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializePtr(os, *tptr);

        os << ")";
    } break;

    case UR_DEVICE_INFO_PARTITION_PROPERTIES: {

        const ur_device_partition_property_t *tptr =
            (const ur_device_partition_property_t *)ptr;
        os << "[";
        size_t nelems = size / sizeof(ur_device_partition_property_t);
        for (size_t i = 0; i < nelems; ++i) {
            if (i != 0) {
                os << ", ";
            }

            os << tptr[i];
        }
        os << "]";
    } break;

    case UR_DEVICE_INFO_PARTITION_MAX_SUB_DEVICES: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_PARTITION_AFFINITY_DOMAIN: {
        const ur_device_affinity_domain_flags_t *tptr =
            (const ur_device_affinity_domain_flags_t *)ptr;
        if (sizeof(ur_device_affinity_domain_flags_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_device_affinity_domain_flags_t)
               << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializeFlag_ur_device_affinity_domain_flags_t(os, *tptr);

        os << ")";
    } break;

    case UR_DEVICE_INFO_PARTITION_TYPE: {

        const ur_device_partition_property_t *tptr =
            (const ur_device_partition_property_t *)ptr;
        os << "[";
        size_t nelems = size / sizeof(ur_device_partition_property_t);
        for (size_t i = 0; i < nelems; ++i) {
            if (i != 0) {
                os << ", ";
            }

            os << tptr[i];
        }
        os << "]";
    } break;

    case UR_DEVICE_INFO_MAX_NUM_SUB_GROUPS: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_SUB_GROUP_INDEPENDENT_FORWARD_PROGRESS: {
        const ur_bool_t *tptr = (const ur_bool_t *)ptr;
        if (sizeof(ur_bool_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_bool_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_SUB_GROUP_SIZES_INTEL: {

        const uint32_t *tptr = (const uint32_t *)ptr;
        os << "[";
        size_t nelems = size / sizeof(uint32_t);
        for (size_t i = 0; i < nelems; ++i) {
            if (i != 0) {
                os << ", ";
            }

            os << tptr[i];
        }
        os << "]";
    } break;

    case UR_DEVICE_INFO_USM_HOST_SUPPORT: {
        const ur_device_usm_access_capability_flags_t *tptr =
            (const ur_device_usm_access_capability_flags_t *)ptr;
        if (sizeof(ur_device_usm_access_capability_flags_t) > size) {
            os << "invalid size (is: " << size << ", expected: >="
               << sizeof(ur_device_usm_access_capability_flags_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializeFlag_ur_device_usm_access_capability_flags_t(os,
                                                                         *tptr);

        os << ")";
    } break;

    case UR_DEVICE_INFO_USM_DEVICE_SUPPORT: {
        const ur_device_usm_access_capability_flags_t *tptr =
            (const ur_device_usm_access_capability_flags_t *)ptr;
        if (sizeof(ur_device_usm_access_capability_flags_t) > size) {
            os << "invalid size (is: " << size << ", expected: >="
               << sizeof(ur_device_usm_access_capability_flags_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializeFlag_ur_device_usm_access_capability_flags_t(os,
                                                                         *tptr);

        os << ")";
    } break;

    case UR_DEVICE_INFO_USM_SINGLE_SHARED_SUPPORT: {
        const ur_device_usm_access_capability_flags_t *tptr =
            (const ur_device_usm_access_capability_flags_t *)ptr;
        if (sizeof(ur_device_usm_access_capability_flags_t) > size) {
            os << "invalid size (is: " << size << ", expected: >="
               << sizeof(ur_device_usm_access_capability_flags_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializeFlag_ur_device_usm_access_capability_flags_t(os,
                                                                         *tptr);

        os << ")";
    } break;

    case UR_DEVICE_INFO_USM_CROSS_SHARED_SUPPORT: {
        const ur_device_usm_access_capability_flags_t *tptr =
            (const ur_device_usm_access_capability_flags_t *)ptr;
        if (sizeof(ur_device_usm_access_capability_flags_t) > size) {
            os << "invalid size (is: " << size << ", expected: >="
               << sizeof(ur_device_usm_access_capability_flags_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializeFlag_ur_device_usm_access_capability_flags_t(os,
                                                                         *tptr);

        os << ")";
    } break;

    case UR_DEVICE_INFO_USM_SYSTEM_SHARED_SUPPORT: {
        const ur_device_usm_access_capability_flags_t *tptr =
            (const ur_device_usm_access_capability_flags_t *)ptr;
        if (sizeof(ur_device_usm_access_capability_flags_t) > size) {
            os << "invalid size (is: " << size << ", expected: >="
               << sizeof(ur_device_usm_access_capability_flags_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializeFlag_ur_device_usm_access_capability_flags_t(os,
                                                                         *tptr);

        os << ")";
    } break;

    case UR_DEVICE_INFO_UUID: {

        const char *tptr = (const char *)ptr;
        serializePtr(os, tptr);
    } break;

    case UR_DEVICE_INFO_PCI_ADDRESS: {

        const char *tptr = (const char *)ptr;
        serializePtr(os, tptr);
    } break;

    case UR_DEVICE_INFO_GPU_EU_COUNT: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_GPU_EU_SIMD_WIDTH: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_GPU_EU_SLICES: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_GPU_EU_COUNT_PER_SUBSLICE: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_GPU_SUBSLICES_PER_SLICE: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_GPU_HW_THREADS_PER_EU: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_MAX_MEMORY_BANDWIDTH: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_IMAGE_SRGB: {
        const ur_bool_t *tptr = (const ur_bool_t *)ptr;
        if (sizeof(ur_bool_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_bool_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_BUILD_ON_SUBDEVICE: {
        const ur_bool_t *tptr = (const ur_bool_t *)ptr;
        if (sizeof(ur_bool_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_bool_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_ATOMIC_64: {
        const ur_bool_t *tptr = (const ur_bool_t *)ptr;
        if (sizeof(ur_bool_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_bool_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_ATOMIC_MEMORY_ORDER_CAPABILITIES: {
        const ur_memory_order_capability_flags_t *tptr =
            (const ur_memory_order_capability_flags_t *)ptr;
        if (sizeof(ur_memory_order_capability_flags_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_memory_order_capability_flags_t)
               << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializeFlag_ur_memory_order_capability_flags_t(os, *tptr);

        os << ")";
    } break;

    case UR_DEVICE_INFO_ATOMIC_MEMORY_SCOPE_CAPABILITIES: {
        const ur_memory_scope_capability_flags_t *tptr =
            (const ur_memory_scope_capability_flags_t *)ptr;
        if (sizeof(ur_memory_scope_capability_flags_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_memory_scope_capability_flags_t)
               << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializeFlag_ur_memory_scope_capability_flags_t(os, *tptr);

        os << ")";
    } break;

    case UR_DEVICE_INFO_ATOMIC_FENCE_ORDER_CAPABILITIES: {
        const ur_memory_order_capability_flags_t *tptr =
            (const ur_memory_order_capability_flags_t *)ptr;
        if (sizeof(ur_memory_order_capability_flags_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_memory_order_capability_flags_t)
               << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializeFlag_ur_memory_order_capability_flags_t(os, *tptr);

        os << ")";
    } break;

    case UR_DEVICE_INFO_ATOMIC_FENCE_SCOPE_CAPABILITIES: {
        const ur_memory_scope_capability_flags_t *tptr =
            (const ur_memory_scope_capability_flags_t *)ptr;
        if (sizeof(ur_memory_scope_capability_flags_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_memory_scope_capability_flags_t)
               << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializeFlag_ur_memory_scope_capability_flags_t(os, *tptr);

        os << ")";
    } break;

    case UR_DEVICE_INFO_BFLOAT16: {
        const ur_bool_t *tptr = (const ur_bool_t *)ptr;
        if (sizeof(ur_bool_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_bool_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_MAX_COMPUTE_QUEUE_INDICES: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_KERNEL_SET_SPECIALIZATION_CONSTANTS: {
        const ur_bool_t *tptr = (const ur_bool_t *)ptr;
        if (sizeof(ur_bool_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_bool_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_MEMORY_BUS_WIDTH: {
        const ur_bool_t *tptr = (const ur_bool_t *)ptr;
        if (sizeof(ur_bool_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_bool_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_MAX_WORK_GROUPS_3D: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_ASYNC_BARRIER: {
        const ur_bool_t *tptr = (const ur_bool_t *)ptr;
        if (sizeof(ur_bool_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_bool_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_DEVICE_INFO_MEM_CHANNEL_SUPPORT: {
        const ur_bool_t *tptr = (const ur_bool_t *)ptr;
        if (sizeof(ur_bool_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_bool_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;
    default:
        os << "unknown enumerator";
        break;
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_device_partition_t value) {
    switch (value) {

    case UR_DEVICE_PARTITION_EQUALLY:
        os << "UR_DEVICE_PARTITION_EQUALLY";
        break;

    case UR_DEVICE_PARTITION_BY_COUNTS:
        os << "UR_DEVICE_PARTITION_BY_COUNTS";
        break;

    case UR_DEVICE_PARTITION_BY_COUNTS_LIST_END:
        os << "UR_DEVICE_PARTITION_BY_COUNTS_LIST_END";
        break;

    case UR_DEVICE_PARTITION_BY_AFFINITY_DOMAIN:
        os << "UR_DEVICE_PARTITION_BY_AFFINITY_DOMAIN";
        break;

    case UR_DEVICE_PARTITION_BY_CSLICE:
        os << "UR_DEVICE_PARTITION_BY_CSLICE";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_device_fp_capability_flag_t value) {
    switch (value) {

    case UR_DEVICE_FP_CAPABILITY_FLAG_CORRECTLY_ROUNDED_DIVIDE_SQRT:
        os << "UR_DEVICE_FP_CAPABILITY_FLAG_CORRECTLY_ROUNDED_DIVIDE_SQRT";
        break;

    case UR_DEVICE_FP_CAPABILITY_FLAG_ROUND_TO_NEAREST:
        os << "UR_DEVICE_FP_CAPABILITY_FLAG_ROUND_TO_NEAREST";
        break;

    case UR_DEVICE_FP_CAPABILITY_FLAG_ROUND_TO_ZERO:
        os << "UR_DEVICE_FP_CAPABILITY_FLAG_ROUND_TO_ZERO";
        break;

    case UR_DEVICE_FP_CAPABILITY_FLAG_ROUND_TO_INF:
        os << "UR_DEVICE_FP_CAPABILITY_FLAG_ROUND_TO_INF";
        break;

    case UR_DEVICE_FP_CAPABILITY_FLAG_INF_NAN:
        os << "UR_DEVICE_FP_CAPABILITY_FLAG_INF_NAN";
        break;

    case UR_DEVICE_FP_CAPABILITY_FLAG_DENORM:
        os << "UR_DEVICE_FP_CAPABILITY_FLAG_DENORM";
        break;

    case UR_DEVICE_FP_CAPABILITY_FLAG_FMA:
        os << "UR_DEVICE_FP_CAPABILITY_FLAG_FMA";
        break;

    case UR_DEVICE_FP_CAPABILITY_FLAG_SOFT_FLOAT:
        os << "UR_DEVICE_FP_CAPABILITY_FLAG_SOFT_FLOAT";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeFlag_ur_device_fp_capability_flags_t(
    std::ostream &os, ur_device_fp_capability_flags_t flag) {
    uint32_t val = flag;
    bool first = true;

    if ((val & UR_DEVICE_FP_CAPABILITY_FLAG_CORRECTLY_ROUNDED_DIVIDE_SQRT) ==
        (uint32_t)UR_DEVICE_FP_CAPABILITY_FLAG_CORRECTLY_ROUNDED_DIVIDE_SQRT) {
        val ^= (uint32_t)
            UR_DEVICE_FP_CAPABILITY_FLAG_CORRECTLY_ROUNDED_DIVIDE_SQRT;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_FP_CAPABILITY_FLAG_CORRECTLY_ROUNDED_DIVIDE_SQRT;
    }

    if ((val & UR_DEVICE_FP_CAPABILITY_FLAG_ROUND_TO_NEAREST) ==
        (uint32_t)UR_DEVICE_FP_CAPABILITY_FLAG_ROUND_TO_NEAREST) {
        val ^= (uint32_t)UR_DEVICE_FP_CAPABILITY_FLAG_ROUND_TO_NEAREST;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_FP_CAPABILITY_FLAG_ROUND_TO_NEAREST;
    }

    if ((val & UR_DEVICE_FP_CAPABILITY_FLAG_ROUND_TO_ZERO) ==
        (uint32_t)UR_DEVICE_FP_CAPABILITY_FLAG_ROUND_TO_ZERO) {
        val ^= (uint32_t)UR_DEVICE_FP_CAPABILITY_FLAG_ROUND_TO_ZERO;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_FP_CAPABILITY_FLAG_ROUND_TO_ZERO;
    }

    if ((val & UR_DEVICE_FP_CAPABILITY_FLAG_ROUND_TO_INF) ==
        (uint32_t)UR_DEVICE_FP_CAPABILITY_FLAG_ROUND_TO_INF) {
        val ^= (uint32_t)UR_DEVICE_FP_CAPABILITY_FLAG_ROUND_TO_INF;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_FP_CAPABILITY_FLAG_ROUND_TO_INF;
    }

    if ((val & UR_DEVICE_FP_CAPABILITY_FLAG_INF_NAN) ==
        (uint32_t)UR_DEVICE_FP_CAPABILITY_FLAG_INF_NAN) {
        val ^= (uint32_t)UR_DEVICE_FP_CAPABILITY_FLAG_INF_NAN;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_FP_CAPABILITY_FLAG_INF_NAN;
    }

    if ((val & UR_DEVICE_FP_CAPABILITY_FLAG_DENORM) ==
        (uint32_t)UR_DEVICE_FP_CAPABILITY_FLAG_DENORM) {
        val ^= (uint32_t)UR_DEVICE_FP_CAPABILITY_FLAG_DENORM;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_FP_CAPABILITY_FLAG_DENORM;
    }

    if ((val & UR_DEVICE_FP_CAPABILITY_FLAG_FMA) ==
        (uint32_t)UR_DEVICE_FP_CAPABILITY_FLAG_FMA) {
        val ^= (uint32_t)UR_DEVICE_FP_CAPABILITY_FLAG_FMA;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_FP_CAPABILITY_FLAG_FMA;
    }

    if ((val & UR_DEVICE_FP_CAPABILITY_FLAG_SOFT_FLOAT) ==
        (uint32_t)UR_DEVICE_FP_CAPABILITY_FLAG_SOFT_FLOAT) {
        val ^= (uint32_t)UR_DEVICE_FP_CAPABILITY_FLAG_SOFT_FLOAT;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_FP_CAPABILITY_FLAG_SOFT_FLOAT;
    }
    if (val != 0) {
        std::bitset<32> bits(val);
        if (!first) {
            os << " | ";
        }
        os << "unknown bit flags " << bits;
    } else if (first) {
        os << "0";
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_device_mem_cache_type_t value) {
    switch (value) {

    case UR_DEVICE_MEM_CACHE_TYPE_NONE:
        os << "UR_DEVICE_MEM_CACHE_TYPE_NONE";
        break;

    case UR_DEVICE_MEM_CACHE_TYPE_READ_ONLY_CACHE:
        os << "UR_DEVICE_MEM_CACHE_TYPE_READ_ONLY_CACHE";
        break;

    case UR_DEVICE_MEM_CACHE_TYPE_READ_WRITE_CACHE:
        os << "UR_DEVICE_MEM_CACHE_TYPE_READ_WRITE_CACHE";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_device_local_mem_type_t value) {
    switch (value) {

    case UR_DEVICE_LOCAL_MEM_TYPE_NONE:
        os << "UR_DEVICE_LOCAL_MEM_TYPE_NONE";
        break;

    case UR_DEVICE_LOCAL_MEM_TYPE_LOCAL:
        os << "UR_DEVICE_LOCAL_MEM_TYPE_LOCAL";
        break;

    case UR_DEVICE_LOCAL_MEM_TYPE_GLOBAL:
        os << "UR_DEVICE_LOCAL_MEM_TYPE_GLOBAL";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_device_exec_capability_flag_t value) {
    switch (value) {

    case UR_DEVICE_EXEC_CAPABILITY_FLAG_KERNEL:
        os << "UR_DEVICE_EXEC_CAPABILITY_FLAG_KERNEL";
        break;

    case UR_DEVICE_EXEC_CAPABILITY_FLAG_NATIVE_KERNEL:
        os << "UR_DEVICE_EXEC_CAPABILITY_FLAG_NATIVE_KERNEL";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeFlag_ur_device_exec_capability_flags_t(
    std::ostream &os, ur_device_exec_capability_flags_t flag) {
    uint32_t val = flag;
    bool first = true;

    if ((val & UR_DEVICE_EXEC_CAPABILITY_FLAG_KERNEL) ==
        (uint32_t)UR_DEVICE_EXEC_CAPABILITY_FLAG_KERNEL) {
        val ^= (uint32_t)UR_DEVICE_EXEC_CAPABILITY_FLAG_KERNEL;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_EXEC_CAPABILITY_FLAG_KERNEL;
    }

    if ((val & UR_DEVICE_EXEC_CAPABILITY_FLAG_NATIVE_KERNEL) ==
        (uint32_t)UR_DEVICE_EXEC_CAPABILITY_FLAG_NATIVE_KERNEL) {
        val ^= (uint32_t)UR_DEVICE_EXEC_CAPABILITY_FLAG_NATIVE_KERNEL;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_EXEC_CAPABILITY_FLAG_NATIVE_KERNEL;
    }
    if (val != 0) {
        std::bitset<32> bits(val);
        if (!first) {
            os << " | ";
        }
        os << "unknown bit flags " << bits;
    } else if (first) {
        os << "0";
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_device_affinity_domain_flag_t value) {
    switch (value) {

    case UR_DEVICE_AFFINITY_DOMAIN_FLAG_NUMA:
        os << "UR_DEVICE_AFFINITY_DOMAIN_FLAG_NUMA";
        break;

    case UR_DEVICE_AFFINITY_DOMAIN_FLAG_L4_CACHE:
        os << "UR_DEVICE_AFFINITY_DOMAIN_FLAG_L4_CACHE";
        break;

    case UR_DEVICE_AFFINITY_DOMAIN_FLAG_L3_CACHE:
        os << "UR_DEVICE_AFFINITY_DOMAIN_FLAG_L3_CACHE";
        break;

    case UR_DEVICE_AFFINITY_DOMAIN_FLAG_L2_CACHE:
        os << "UR_DEVICE_AFFINITY_DOMAIN_FLAG_L2_CACHE";
        break;

    case UR_DEVICE_AFFINITY_DOMAIN_FLAG_L1_CACHE:
        os << "UR_DEVICE_AFFINITY_DOMAIN_FLAG_L1_CACHE";
        break;

    case UR_DEVICE_AFFINITY_DOMAIN_FLAG_NEXT_PARTITIONABLE:
        os << "UR_DEVICE_AFFINITY_DOMAIN_FLAG_NEXT_PARTITIONABLE";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeFlag_ur_device_affinity_domain_flags_t(
    std::ostream &os, ur_device_affinity_domain_flags_t flag) {
    uint32_t val = flag;
    bool first = true;

    if ((val & UR_DEVICE_AFFINITY_DOMAIN_FLAG_NUMA) ==
        (uint32_t)UR_DEVICE_AFFINITY_DOMAIN_FLAG_NUMA) {
        val ^= (uint32_t)UR_DEVICE_AFFINITY_DOMAIN_FLAG_NUMA;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_AFFINITY_DOMAIN_FLAG_NUMA;
    }

    if ((val & UR_DEVICE_AFFINITY_DOMAIN_FLAG_L4_CACHE) ==
        (uint32_t)UR_DEVICE_AFFINITY_DOMAIN_FLAG_L4_CACHE) {
        val ^= (uint32_t)UR_DEVICE_AFFINITY_DOMAIN_FLAG_L4_CACHE;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_AFFINITY_DOMAIN_FLAG_L4_CACHE;
    }

    if ((val & UR_DEVICE_AFFINITY_DOMAIN_FLAG_L3_CACHE) ==
        (uint32_t)UR_DEVICE_AFFINITY_DOMAIN_FLAG_L3_CACHE) {
        val ^= (uint32_t)UR_DEVICE_AFFINITY_DOMAIN_FLAG_L3_CACHE;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_AFFINITY_DOMAIN_FLAG_L3_CACHE;
    }

    if ((val & UR_DEVICE_AFFINITY_DOMAIN_FLAG_L2_CACHE) ==
        (uint32_t)UR_DEVICE_AFFINITY_DOMAIN_FLAG_L2_CACHE) {
        val ^= (uint32_t)UR_DEVICE_AFFINITY_DOMAIN_FLAG_L2_CACHE;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_AFFINITY_DOMAIN_FLAG_L2_CACHE;
    }

    if ((val & UR_DEVICE_AFFINITY_DOMAIN_FLAG_L1_CACHE) ==
        (uint32_t)UR_DEVICE_AFFINITY_DOMAIN_FLAG_L1_CACHE) {
        val ^= (uint32_t)UR_DEVICE_AFFINITY_DOMAIN_FLAG_L1_CACHE;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_AFFINITY_DOMAIN_FLAG_L1_CACHE;
    }

    if ((val & UR_DEVICE_AFFINITY_DOMAIN_FLAG_NEXT_PARTITIONABLE) ==
        (uint32_t)UR_DEVICE_AFFINITY_DOMAIN_FLAG_NEXT_PARTITIONABLE) {
        val ^= (uint32_t)UR_DEVICE_AFFINITY_DOMAIN_FLAG_NEXT_PARTITIONABLE;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_AFFINITY_DOMAIN_FLAG_NEXT_PARTITIONABLE;
    }
    if (val != 0) {
        std::bitset<32> bits(val);
        if (!first) {
            os << " | ";
        }
        os << "unknown bit flags " << bits;
    } else if (first) {
        os << "0";
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_memory_order_capability_flag_t value) {
    switch (value) {

    case UR_MEMORY_ORDER_CAPABILITY_FLAG_RELAXED:
        os << "UR_MEMORY_ORDER_CAPABILITY_FLAG_RELAXED";
        break;

    case UR_MEMORY_ORDER_CAPABILITY_FLAG_ACQUIRE:
        os << "UR_MEMORY_ORDER_CAPABILITY_FLAG_ACQUIRE";
        break;

    case UR_MEMORY_ORDER_CAPABILITY_FLAG_RELEASE:
        os << "UR_MEMORY_ORDER_CAPABILITY_FLAG_RELEASE";
        break;

    case UR_MEMORY_ORDER_CAPABILITY_FLAG_ACQ_REL:
        os << "UR_MEMORY_ORDER_CAPABILITY_FLAG_ACQ_REL";
        break;

    case UR_MEMORY_ORDER_CAPABILITY_FLAG_SEQ_CST:
        os << "UR_MEMORY_ORDER_CAPABILITY_FLAG_SEQ_CST";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeFlag_ur_memory_order_capability_flags_t(
    std::ostream &os, ur_memory_order_capability_flags_t flag) {
    uint32_t val = flag;
    bool first = true;

    if ((val & UR_MEMORY_ORDER_CAPABILITY_FLAG_RELAXED) ==
        (uint32_t)UR_MEMORY_ORDER_CAPABILITY_FLAG_RELAXED) {
        val ^= (uint32_t)UR_MEMORY_ORDER_CAPABILITY_FLAG_RELAXED;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_MEMORY_ORDER_CAPABILITY_FLAG_RELAXED;
    }

    if ((val & UR_MEMORY_ORDER_CAPABILITY_FLAG_ACQUIRE) ==
        (uint32_t)UR_MEMORY_ORDER_CAPABILITY_FLAG_ACQUIRE) {
        val ^= (uint32_t)UR_MEMORY_ORDER_CAPABILITY_FLAG_ACQUIRE;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_MEMORY_ORDER_CAPABILITY_FLAG_ACQUIRE;
    }

    if ((val & UR_MEMORY_ORDER_CAPABILITY_FLAG_RELEASE) ==
        (uint32_t)UR_MEMORY_ORDER_CAPABILITY_FLAG_RELEASE) {
        val ^= (uint32_t)UR_MEMORY_ORDER_CAPABILITY_FLAG_RELEASE;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_MEMORY_ORDER_CAPABILITY_FLAG_RELEASE;
    }

    if ((val & UR_MEMORY_ORDER_CAPABILITY_FLAG_ACQ_REL) ==
        (uint32_t)UR_MEMORY_ORDER_CAPABILITY_FLAG_ACQ_REL) {
        val ^= (uint32_t)UR_MEMORY_ORDER_CAPABILITY_FLAG_ACQ_REL;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_MEMORY_ORDER_CAPABILITY_FLAG_ACQ_REL;
    }

    if ((val & UR_MEMORY_ORDER_CAPABILITY_FLAG_SEQ_CST) ==
        (uint32_t)UR_MEMORY_ORDER_CAPABILITY_FLAG_SEQ_CST) {
        val ^= (uint32_t)UR_MEMORY_ORDER_CAPABILITY_FLAG_SEQ_CST;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_MEMORY_ORDER_CAPABILITY_FLAG_SEQ_CST;
    }
    if (val != 0) {
        std::bitset<32> bits(val);
        if (!first) {
            os << " | ";
        }
        os << "unknown bit flags " << bits;
    } else if (first) {
        os << "0";
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_memory_scope_capability_flag_t value) {
    switch (value) {

    case UR_MEMORY_SCOPE_CAPABILITY_FLAG_WORK_ITEM:
        os << "UR_MEMORY_SCOPE_CAPABILITY_FLAG_WORK_ITEM";
        break;

    case UR_MEMORY_SCOPE_CAPABILITY_FLAG_SUB_GROUP:
        os << "UR_MEMORY_SCOPE_CAPABILITY_FLAG_SUB_GROUP";
        break;

    case UR_MEMORY_SCOPE_CAPABILITY_FLAG_WORK_GROUP:
        os << "UR_MEMORY_SCOPE_CAPABILITY_FLAG_WORK_GROUP";
        break;

    case UR_MEMORY_SCOPE_CAPABILITY_FLAG_DEVICE:
        os << "UR_MEMORY_SCOPE_CAPABILITY_FLAG_DEVICE";
        break;

    case UR_MEMORY_SCOPE_CAPABILITY_FLAG_SYSTEM:
        os << "UR_MEMORY_SCOPE_CAPABILITY_FLAG_SYSTEM";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeFlag_ur_memory_scope_capability_flags_t(
    std::ostream &os, ur_memory_scope_capability_flags_t flag) {
    uint32_t val = flag;
    bool first = true;

    if ((val & UR_MEMORY_SCOPE_CAPABILITY_FLAG_WORK_ITEM) ==
        (uint32_t)UR_MEMORY_SCOPE_CAPABILITY_FLAG_WORK_ITEM) {
        val ^= (uint32_t)UR_MEMORY_SCOPE_CAPABILITY_FLAG_WORK_ITEM;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_MEMORY_SCOPE_CAPABILITY_FLAG_WORK_ITEM;
    }

    if ((val & UR_MEMORY_SCOPE_CAPABILITY_FLAG_SUB_GROUP) ==
        (uint32_t)UR_MEMORY_SCOPE_CAPABILITY_FLAG_SUB_GROUP) {
        val ^= (uint32_t)UR_MEMORY_SCOPE_CAPABILITY_FLAG_SUB_GROUP;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_MEMORY_SCOPE_CAPABILITY_FLAG_SUB_GROUP;
    }

    if ((val & UR_MEMORY_SCOPE_CAPABILITY_FLAG_WORK_GROUP) ==
        (uint32_t)UR_MEMORY_SCOPE_CAPABILITY_FLAG_WORK_GROUP) {
        val ^= (uint32_t)UR_MEMORY_SCOPE_CAPABILITY_FLAG_WORK_GROUP;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_MEMORY_SCOPE_CAPABILITY_FLAG_WORK_GROUP;
    }

    if ((val & UR_MEMORY_SCOPE_CAPABILITY_FLAG_DEVICE) ==
        (uint32_t)UR_MEMORY_SCOPE_CAPABILITY_FLAG_DEVICE) {
        val ^= (uint32_t)UR_MEMORY_SCOPE_CAPABILITY_FLAG_DEVICE;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_MEMORY_SCOPE_CAPABILITY_FLAG_DEVICE;
    }

    if ((val & UR_MEMORY_SCOPE_CAPABILITY_FLAG_SYSTEM) ==
        (uint32_t)UR_MEMORY_SCOPE_CAPABILITY_FLAG_SYSTEM) {
        val ^= (uint32_t)UR_MEMORY_SCOPE_CAPABILITY_FLAG_SYSTEM;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_MEMORY_SCOPE_CAPABILITY_FLAG_SYSTEM;
    }
    if (val != 0) {
        std::bitset<32> bits(val);
        if (!first) {
            os << " | ";
        }
        os << "unknown bit flags " << bits;
    } else if (first) {
        os << "0";
    }
}
} // namespace ur_params
inline std::ostream &
operator<<(std::ostream &os,
           enum ur_device_usm_access_capability_flag_t value) {
    switch (value) {

    case UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_ACCESS:
        os << "UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_ACCESS";
        break;

    case UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_ATOMIC_ACCESS:
        os << "UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_ATOMIC_ACCESS";
        break;

    case UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_CONCURRENT_ACCESS:
        os << "UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_CONCURRENT_ACCESS";
        break;

    case UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_ATOMIC_CONCURRENT_ACCESS:
        os << "UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_ATOMIC_CONCURRENT_ACCESS";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeFlag_ur_device_usm_access_capability_flags_t(
    std::ostream &os, ur_device_usm_access_capability_flags_t flag) {
    uint32_t val = flag;
    bool first = true;

    if ((val & UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_ACCESS) ==
        (uint32_t)UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_ACCESS) {
        val ^= (uint32_t)UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_ACCESS;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_ACCESS;
    }

    if ((val & UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_ATOMIC_ACCESS) ==
        (uint32_t)UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_ATOMIC_ACCESS) {
        val ^= (uint32_t)UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_ATOMIC_ACCESS;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_ATOMIC_ACCESS;
    }

    if ((val & UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_CONCURRENT_ACCESS) ==
        (uint32_t)UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_CONCURRENT_ACCESS) {
        val ^= (uint32_t)UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_CONCURRENT_ACCESS;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_CONCURRENT_ACCESS;
    }

    if ((val & UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_ATOMIC_CONCURRENT_ACCESS) ==
        (uint32_t)
            UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_ATOMIC_CONCURRENT_ACCESS) {
        val ^= (uint32_t)
            UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_ATOMIC_CONCURRENT_ACCESS;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_DEVICE_USM_ACCESS_CAPABILITY_FLAG_ATOMIC_CONCURRENT_ACCESS;
    }
    if (val != 0) {
        std::bitset<32> bits(val);
        if (!first) {
            os << " | ";
        }
        os << "unknown bit flags " << bits;
    } else if (first) {
        os << "0";
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_context_flag_t value) {
    switch (value) {

    case UR_CONTEXT_FLAG_TBD:
        os << "UR_CONTEXT_FLAG_TBD";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeFlag_ur_context_flags_t(std::ostream &os,
                                             ur_context_flags_t flag) {
    uint32_t val = flag;
    bool first = true;

    if ((val & UR_CONTEXT_FLAG_TBD) == (uint32_t)UR_CONTEXT_FLAG_TBD) {
        val ^= (uint32_t)UR_CONTEXT_FLAG_TBD;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_CONTEXT_FLAG_TBD;
    }
    if (val != 0) {
        std::bitset<32> bits(val);
        if (!first) {
            os << " | ";
        }
        os << "unknown bit flags " << bits;
    } else if (first) {
        os << "0";
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_context_properties_t params) {
    os << "(struct ur_context_properties_t){";

    os << ".stype = ";

    os << (params.stype);

    os << ", ";
    os << ".pNext = ";

    ur_params::serializeStruct(os, (params.pNext));

    os << ", ";
    os << ".flags = ";

    ur_params::serializeFlag_ur_context_flags_t(os, (params.flags));

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_context_info_t value) {
    switch (value) {

    case UR_CONTEXT_INFO_NUM_DEVICES:
        os << "UR_CONTEXT_INFO_NUM_DEVICES";
        break;

    case UR_CONTEXT_INFO_DEVICES:
        os << "UR_CONTEXT_INFO_DEVICES";
        break;

    case UR_CONTEXT_INFO_REFERENCE_COUNT:
        os << "UR_CONTEXT_INFO_REFERENCE_COUNT";
        break;

    case UR_CONTEXT_INFO_USM_MEMCPY2D_SUPPORT:
        os << "UR_CONTEXT_INFO_USM_MEMCPY2D_SUPPORT";
        break;

    case UR_CONTEXT_INFO_USM_FILL2D_SUPPORT:
        os << "UR_CONTEXT_INFO_USM_FILL2D_SUPPORT";
        break;

    case UR_CONTEXT_INFO_ATOMIC_MEMORY_ORDER_CAPABILITIES:
        os << "UR_CONTEXT_INFO_ATOMIC_MEMORY_ORDER_CAPABILITIES";
        break;

    case UR_CONTEXT_INFO_ATOMIC_MEMORY_SCOPE_CAPABILITIES:
        os << "UR_CONTEXT_INFO_ATOMIC_MEMORY_SCOPE_CAPABILITIES";
        break;

    case UR_CONTEXT_INFO_ATOMIC_FENCE_ORDER_CAPABILITIES:
        os << "UR_CONTEXT_INFO_ATOMIC_FENCE_ORDER_CAPABILITIES";
        break;

    case UR_CONTEXT_INFO_ATOMIC_FENCE_SCOPE_CAPABILITIES:
        os << "UR_CONTEXT_INFO_ATOMIC_FENCE_SCOPE_CAPABILITIES";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeTaggedTyped_ur_context_info_t(std::ostream &os,
                                                   const void *ptr,
                                                   enum ur_context_info_t value,
                                                   size_t size) {
    if (ptr == NULL) {
        serializePtr(os, ptr);
        return;
    }

    switch (value) {

    case UR_CONTEXT_INFO_NUM_DEVICES: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_CONTEXT_INFO_DEVICES: {

        const ur_device_handle_t *tptr = (const ur_device_handle_t *)ptr;
        os << "[";
        size_t nelems = size / sizeof(ur_device_handle_t);
        for (size_t i = 0; i < nelems; ++i) {
            if (i != 0) {
                os << ", ";
            }

            ur_params::serializePtr(os, tptr[i]);
        }
        os << "]";
    } break;

    case UR_CONTEXT_INFO_REFERENCE_COUNT: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_CONTEXT_INFO_USM_MEMCPY2D_SUPPORT: {
        const ur_bool_t *tptr = (const ur_bool_t *)ptr;
        if (sizeof(ur_bool_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_bool_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_CONTEXT_INFO_USM_FILL2D_SUPPORT: {
        const ur_bool_t *tptr = (const ur_bool_t *)ptr;
        if (sizeof(ur_bool_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_bool_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_CONTEXT_INFO_ATOMIC_MEMORY_ORDER_CAPABILITIES: {
        const ur_memory_order_capability_flags_t *tptr =
            (const ur_memory_order_capability_flags_t *)ptr;
        if (sizeof(ur_memory_order_capability_flags_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_memory_order_capability_flags_t)
               << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializeFlag_ur_memory_order_capability_flags_t(os, *tptr);

        os << ")";
    } break;

    case UR_CONTEXT_INFO_ATOMIC_MEMORY_SCOPE_CAPABILITIES: {
        const ur_memory_scope_capability_flags_t *tptr =
            (const ur_memory_scope_capability_flags_t *)ptr;
        if (sizeof(ur_memory_scope_capability_flags_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_memory_scope_capability_flags_t)
               << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializeFlag_ur_memory_scope_capability_flags_t(os, *tptr);

        os << ")";
    } break;

    case UR_CONTEXT_INFO_ATOMIC_FENCE_ORDER_CAPABILITIES: {
        const ur_memory_order_capability_flags_t *tptr =
            (const ur_memory_order_capability_flags_t *)ptr;
        if (sizeof(ur_memory_order_capability_flags_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_memory_order_capability_flags_t)
               << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializeFlag_ur_memory_order_capability_flags_t(os, *tptr);

        os << ")";
    } break;

    case UR_CONTEXT_INFO_ATOMIC_FENCE_SCOPE_CAPABILITIES: {
        const ur_memory_scope_capability_flags_t *tptr =
            (const ur_memory_scope_capability_flags_t *)ptr;
        if (sizeof(ur_memory_scope_capability_flags_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_memory_scope_capability_flags_t)
               << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializeFlag_ur_memory_scope_capability_flags_t(os, *tptr);

        os << ")";
    } break;
    default:
        os << "unknown enumerator";
        break;
    }
}
} // namespace ur_params
inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_context_native_properties_t params) {
    os << "(struct ur_context_native_properties_t){";

    os << ".stype = ";

    os << (params.stype);

    os << ", ";
    os << ".pNext = ";

    ur_params::serializeStruct(os, (params.pNext));

    os << ", ";
    os << ".isNativeHandleOwned = ";

    os << (params.isNativeHandleOwned);

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os, enum ur_mem_flag_t value) {
    switch (value) {

    case UR_MEM_FLAG_READ_WRITE:
        os << "UR_MEM_FLAG_READ_WRITE";
        break;

    case UR_MEM_FLAG_WRITE_ONLY:
        os << "UR_MEM_FLAG_WRITE_ONLY";
        break;

    case UR_MEM_FLAG_READ_ONLY:
        os << "UR_MEM_FLAG_READ_ONLY";
        break;

    case UR_MEM_FLAG_USE_HOST_POINTER:
        os << "UR_MEM_FLAG_USE_HOST_POINTER";
        break;

    case UR_MEM_FLAG_ALLOC_HOST_POINTER:
        os << "UR_MEM_FLAG_ALLOC_HOST_POINTER";
        break;

    case UR_MEM_FLAG_ALLOC_COPY_HOST_POINTER:
        os << "UR_MEM_FLAG_ALLOC_COPY_HOST_POINTER";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeFlag_ur_mem_flags_t(std::ostream &os,
                                         ur_mem_flags_t flag) {
    uint32_t val = flag;
    bool first = true;

    if ((val & UR_MEM_FLAG_READ_WRITE) == (uint32_t)UR_MEM_FLAG_READ_WRITE) {
        val ^= (uint32_t)UR_MEM_FLAG_READ_WRITE;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_MEM_FLAG_READ_WRITE;
    }

    if ((val & UR_MEM_FLAG_WRITE_ONLY) == (uint32_t)UR_MEM_FLAG_WRITE_ONLY) {
        val ^= (uint32_t)UR_MEM_FLAG_WRITE_ONLY;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_MEM_FLAG_WRITE_ONLY;
    }

    if ((val & UR_MEM_FLAG_READ_ONLY) == (uint32_t)UR_MEM_FLAG_READ_ONLY) {
        val ^= (uint32_t)UR_MEM_FLAG_READ_ONLY;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_MEM_FLAG_READ_ONLY;
    }

    if ((val & UR_MEM_FLAG_USE_HOST_POINTER) ==
        (uint32_t)UR_MEM_FLAG_USE_HOST_POINTER) {
        val ^= (uint32_t)UR_MEM_FLAG_USE_HOST_POINTER;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_MEM_FLAG_USE_HOST_POINTER;
    }

    if ((val & UR_MEM_FLAG_ALLOC_HOST_POINTER) ==
        (uint32_t)UR_MEM_FLAG_ALLOC_HOST_POINTER) {
        val ^= (uint32_t)UR_MEM_FLAG_ALLOC_HOST_POINTER;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_MEM_FLAG_ALLOC_HOST_POINTER;
    }

    if ((val & UR_MEM_FLAG_ALLOC_COPY_HOST_POINTER) ==
        (uint32_t)UR_MEM_FLAG_ALLOC_COPY_HOST_POINTER) {
        val ^= (uint32_t)UR_MEM_FLAG_ALLOC_COPY_HOST_POINTER;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_MEM_FLAG_ALLOC_COPY_HOST_POINTER;
    }
    if (val != 0) {
        std::bitset<32> bits(val);
        if (!first) {
            os << " | ";
        }
        os << "unknown bit flags " << bits;
    } else if (first) {
        os << "0";
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os, enum ur_mem_type_t value) {
    switch (value) {

    case UR_MEM_TYPE_BUFFER:
        os << "UR_MEM_TYPE_BUFFER";
        break;

    case UR_MEM_TYPE_IMAGE2D:
        os << "UR_MEM_TYPE_IMAGE2D";
        break;

    case UR_MEM_TYPE_IMAGE3D:
        os << "UR_MEM_TYPE_IMAGE3D";
        break;

    case UR_MEM_TYPE_IMAGE2D_ARRAY:
        os << "UR_MEM_TYPE_IMAGE2D_ARRAY";
        break;

    case UR_MEM_TYPE_IMAGE1D:
        os << "UR_MEM_TYPE_IMAGE1D";
        break;

    case UR_MEM_TYPE_IMAGE1D_ARRAY:
        os << "UR_MEM_TYPE_IMAGE1D_ARRAY";
        break;

    case UR_MEM_TYPE_IMAGE1D_BUFFER:
        os << "UR_MEM_TYPE_IMAGE1D_BUFFER";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
inline std::ostream &operator<<(std::ostream &os, enum ur_mem_info_t value) {
    switch (value) {

    case UR_MEM_INFO_SIZE:
        os << "UR_MEM_INFO_SIZE";
        break;

    case UR_MEM_INFO_CONTEXT:
        os << "UR_MEM_INFO_CONTEXT";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeTaggedTyped_ur_mem_info_t(std::ostream &os,
                                               const void *ptr,
                                               enum ur_mem_info_t value,
                                               size_t size) {
    if (ptr == NULL) {
        serializePtr(os, ptr);
        return;
    }

    switch (value) {

    case UR_MEM_INFO_SIZE: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_MEM_INFO_CONTEXT: {
        const ur_context_handle_t *tptr = (const ur_context_handle_t *)ptr;
        if (sizeof(ur_context_handle_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_context_handle_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializePtr(os, *tptr);

        os << ")";
    } break;
    default:
        os << "unknown enumerator";
        break;
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_image_channel_order_t value) {
    switch (value) {

    case UR_IMAGE_CHANNEL_ORDER_A:
        os << "UR_IMAGE_CHANNEL_ORDER_A";
        break;

    case UR_IMAGE_CHANNEL_ORDER_R:
        os << "UR_IMAGE_CHANNEL_ORDER_R";
        break;

    case UR_IMAGE_CHANNEL_ORDER_RG:
        os << "UR_IMAGE_CHANNEL_ORDER_RG";
        break;

    case UR_IMAGE_CHANNEL_ORDER_RA:
        os << "UR_IMAGE_CHANNEL_ORDER_RA";
        break;

    case UR_IMAGE_CHANNEL_ORDER_RGB:
        os << "UR_IMAGE_CHANNEL_ORDER_RGB";
        break;

    case UR_IMAGE_CHANNEL_ORDER_RGBA:
        os << "UR_IMAGE_CHANNEL_ORDER_RGBA";
        break;

    case UR_IMAGE_CHANNEL_ORDER_BGRA:
        os << "UR_IMAGE_CHANNEL_ORDER_BGRA";
        break;

    case UR_IMAGE_CHANNEL_ORDER_ARGB:
        os << "UR_IMAGE_CHANNEL_ORDER_ARGB";
        break;

    case UR_IMAGE_CHANNEL_ORDER_ABGR:
        os << "UR_IMAGE_CHANNEL_ORDER_ABGR";
        break;

    case UR_IMAGE_CHANNEL_ORDER_INTENSITY:
        os << "UR_IMAGE_CHANNEL_ORDER_INTENSITY";
        break;

    case UR_IMAGE_CHANNEL_ORDER_LUMINANCE:
        os << "UR_IMAGE_CHANNEL_ORDER_LUMINANCE";
        break;

    case UR_IMAGE_CHANNEL_ORDER_RX:
        os << "UR_IMAGE_CHANNEL_ORDER_RX";
        break;

    case UR_IMAGE_CHANNEL_ORDER_RGX:
        os << "UR_IMAGE_CHANNEL_ORDER_RGX";
        break;

    case UR_IMAGE_CHANNEL_ORDER_RGBX:
        os << "UR_IMAGE_CHANNEL_ORDER_RGBX";
        break;

    case UR_IMAGE_CHANNEL_ORDER_SRGBA:
        os << "UR_IMAGE_CHANNEL_ORDER_SRGBA";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_image_channel_type_t value) {
    switch (value) {

    case UR_IMAGE_CHANNEL_TYPE_SNORM_INT8:
        os << "UR_IMAGE_CHANNEL_TYPE_SNORM_INT8";
        break;

    case UR_IMAGE_CHANNEL_TYPE_SNORM_INT16:
        os << "UR_IMAGE_CHANNEL_TYPE_SNORM_INT16";
        break;

    case UR_IMAGE_CHANNEL_TYPE_UNORM_INT8:
        os << "UR_IMAGE_CHANNEL_TYPE_UNORM_INT8";
        break;

    case UR_IMAGE_CHANNEL_TYPE_UNORM_INT16:
        os << "UR_IMAGE_CHANNEL_TYPE_UNORM_INT16";
        break;

    case UR_IMAGE_CHANNEL_TYPE_UNORM_SHORT_565:
        os << "UR_IMAGE_CHANNEL_TYPE_UNORM_SHORT_565";
        break;

    case UR_IMAGE_CHANNEL_TYPE_UNORM_SHORT_555:
        os << "UR_IMAGE_CHANNEL_TYPE_UNORM_SHORT_555";
        break;

    case UR_IMAGE_CHANNEL_TYPE_INT_101010:
        os << "UR_IMAGE_CHANNEL_TYPE_INT_101010";
        break;

    case UR_IMAGE_CHANNEL_TYPE_SIGNED_INT8:
        os << "UR_IMAGE_CHANNEL_TYPE_SIGNED_INT8";
        break;

    case UR_IMAGE_CHANNEL_TYPE_SIGNED_INT16:
        os << "UR_IMAGE_CHANNEL_TYPE_SIGNED_INT16";
        break;

    case UR_IMAGE_CHANNEL_TYPE_SIGNED_INT32:
        os << "UR_IMAGE_CHANNEL_TYPE_SIGNED_INT32";
        break;

    case UR_IMAGE_CHANNEL_TYPE_UNSIGNED_INT8:
        os << "UR_IMAGE_CHANNEL_TYPE_UNSIGNED_INT8";
        break;

    case UR_IMAGE_CHANNEL_TYPE_UNSIGNED_INT16:
        os << "UR_IMAGE_CHANNEL_TYPE_UNSIGNED_INT16";
        break;

    case UR_IMAGE_CHANNEL_TYPE_UNSIGNED_INT32:
        os << "UR_IMAGE_CHANNEL_TYPE_UNSIGNED_INT32";
        break;

    case UR_IMAGE_CHANNEL_TYPE_HALF_FLOAT:
        os << "UR_IMAGE_CHANNEL_TYPE_HALF_FLOAT";
        break;

    case UR_IMAGE_CHANNEL_TYPE_FLOAT:
        os << "UR_IMAGE_CHANNEL_TYPE_FLOAT";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
inline std::ostream &operator<<(std::ostream &os, enum ur_image_info_t value) {
    switch (value) {

    case UR_IMAGE_INFO_FORMAT:
        os << "UR_IMAGE_INFO_FORMAT";
        break;

    case UR_IMAGE_INFO_ELEMENT_SIZE:
        os << "UR_IMAGE_INFO_ELEMENT_SIZE";
        break;

    case UR_IMAGE_INFO_ROW_PITCH:
        os << "UR_IMAGE_INFO_ROW_PITCH";
        break;

    case UR_IMAGE_INFO_SLICE_PITCH:
        os << "UR_IMAGE_INFO_SLICE_PITCH";
        break;

    case UR_IMAGE_INFO_WIDTH:
        os << "UR_IMAGE_INFO_WIDTH";
        break;

    case UR_IMAGE_INFO_HEIGHT:
        os << "UR_IMAGE_INFO_HEIGHT";
        break;

    case UR_IMAGE_INFO_DEPTH:
        os << "UR_IMAGE_INFO_DEPTH";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeTaggedTyped_ur_image_info_t(std::ostream &os,
                                                 const void *ptr,
                                                 enum ur_image_info_t value,
                                                 size_t size) {
    if (ptr == NULL) {
        serializePtr(os, ptr);
        return;
    }

    switch (value) {

    case UR_IMAGE_INFO_FORMAT: {
        const ur_image_format_t *tptr = (const ur_image_format_t *)ptr;
        if (sizeof(ur_image_format_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_image_format_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_IMAGE_INFO_ELEMENT_SIZE: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_IMAGE_INFO_ROW_PITCH: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_IMAGE_INFO_SLICE_PITCH: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_IMAGE_INFO_WIDTH: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_IMAGE_INFO_HEIGHT: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_IMAGE_INFO_DEPTH: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;
    default:
        os << "unknown enumerator";
        break;
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_image_format_t params) {
    os << "(struct ur_image_format_t){";

    os << ".channelOrder = ";

    os << (params.channelOrder);

    os << ", ";
    os << ".channelType = ";

    os << (params.channelType);

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_image_desc_t params) {
    os << "(struct ur_image_desc_t){";

    os << ".stype = ";

    os << (params.stype);

    os << ", ";
    os << ".pNext = ";

    ur_params::serializeStruct(os, (params.pNext));

    os << ", ";
    os << ".type = ";

    os << (params.type);

    os << ", ";
    os << ".width = ";

    os << (params.width);

    os << ", ";
    os << ".height = ";

    os << (params.height);

    os << ", ";
    os << ".depth = ";

    os << (params.depth);

    os << ", ";
    os << ".arraySize = ";

    os << (params.arraySize);

    os << ", ";
    os << ".rowPitch = ";

    os << (params.rowPitch);

    os << ", ";
    os << ".slicePitch = ";

    os << (params.slicePitch);

    os << ", ";
    os << ".numMipLevel = ";

    os << (params.numMipLevel);

    os << ", ";
    os << ".numSamples = ";

    os << (params.numSamples);

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_buffer_properties_t params) {
    os << "(struct ur_buffer_properties_t){";

    os << ".stype = ";

    os << (params.stype);

    os << ", ";
    os << ".pNext = ";

    ur_params::serializeStruct(os, (params.pNext));

    os << ", ";
    os << ".pHost = ";

    ur_params::serializePtr(os, (params.pHost));

    os << "}";
    return os;
}
inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_buffer_channel_properties_t params) {
    os << "(struct ur_buffer_channel_properties_t){";

    os << ".stype = ";

    os << (params.stype);

    os << ", ";
    os << ".pNext = ";

    ur_params::serializeStruct(os, (params.pNext));

    os << ", ";
    os << ".channel = ";

    os << (params.channel);

    os << "}";
    return os;
}
inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_buffer_alloc_location_properties_t params) {
    os << "(struct ur_buffer_alloc_location_properties_t){";

    os << ".stype = ";

    os << (params.stype);

    os << ", ";
    os << ".pNext = ";

    ur_params::serializeStruct(os, (params.pNext));

    os << ", ";
    os << ".location = ";

    os << (params.location);

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_buffer_region_t params) {
    os << "(struct ur_buffer_region_t){";

    os << ".stype = ";

    os << (params.stype);

    os << ", ";
    os << ".pNext = ";

    ur_params::serializeStruct(os, (params.pNext));

    os << ", ";
    os << ".origin = ";

    os << (params.origin);

    os << ", ";
    os << ".size = ";

    os << (params.size);

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_buffer_create_type_t value) {
    switch (value) {

    case UR_BUFFER_CREATE_TYPE_REGION:
        os << "UR_BUFFER_CREATE_TYPE_REGION";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
inline std::ostream &
operator<<(std::ostream &os, const struct ur_mem_native_properties_t params) {
    os << "(struct ur_mem_native_properties_t){";

    os << ".stype = ";

    os << (params.stype);

    os << ", ";
    os << ".pNext = ";

    ur_params::serializeStruct(os, (params.pNext));

    os << ", ";
    os << ".isNativeHandleOwned = ";

    os << (params.isNativeHandleOwned);

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_sampler_filter_mode_t value) {
    switch (value) {

    case UR_SAMPLER_FILTER_MODE_NEAREST:
        os << "UR_SAMPLER_FILTER_MODE_NEAREST";
        break;

    case UR_SAMPLER_FILTER_MODE_LINEAR:
        os << "UR_SAMPLER_FILTER_MODE_LINEAR";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_sampler_addressing_mode_t value) {
    switch (value) {

    case UR_SAMPLER_ADDRESSING_MODE_NONE:
        os << "UR_SAMPLER_ADDRESSING_MODE_NONE";
        break;

    case UR_SAMPLER_ADDRESSING_MODE_CLAMP_TO_EDGE:
        os << "UR_SAMPLER_ADDRESSING_MODE_CLAMP_TO_EDGE";
        break;

    case UR_SAMPLER_ADDRESSING_MODE_CLAMP:
        os << "UR_SAMPLER_ADDRESSING_MODE_CLAMP";
        break;

    case UR_SAMPLER_ADDRESSING_MODE_REPEAT:
        os << "UR_SAMPLER_ADDRESSING_MODE_REPEAT";
        break;

    case UR_SAMPLER_ADDRESSING_MODE_MIRRORED_REPEAT:
        os << "UR_SAMPLER_ADDRESSING_MODE_MIRRORED_REPEAT";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_sampler_info_t value) {
    switch (value) {

    case UR_SAMPLER_INFO_REFERENCE_COUNT:
        os << "UR_SAMPLER_INFO_REFERENCE_COUNT";
        break;

    case UR_SAMPLER_INFO_CONTEXT:
        os << "UR_SAMPLER_INFO_CONTEXT";
        break;

    case UR_SAMPLER_INFO_NORMALIZED_COORDS:
        os << "UR_SAMPLER_INFO_NORMALIZED_COORDS";
        break;

    case UR_SAMPLER_INFO_ADDRESSING_MODE:
        os << "UR_SAMPLER_INFO_ADDRESSING_MODE";
        break;

    case UR_SAMPLER_INFO_FILTER_MODE:
        os << "UR_SAMPLER_INFO_FILTER_MODE";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeTaggedTyped_ur_sampler_info_t(std::ostream &os,
                                                   const void *ptr,
                                                   enum ur_sampler_info_t value,
                                                   size_t size) {
    if (ptr == NULL) {
        serializePtr(os, ptr);
        return;
    }

    switch (value) {

    case UR_SAMPLER_INFO_REFERENCE_COUNT: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_SAMPLER_INFO_CONTEXT: {
        const ur_context_handle_t *tptr = (const ur_context_handle_t *)ptr;
        if (sizeof(ur_context_handle_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_context_handle_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializePtr(os, *tptr);

        os << ")";
    } break;

    case UR_SAMPLER_INFO_NORMALIZED_COORDS: {
        const ur_bool_t *tptr = (const ur_bool_t *)ptr;
        if (sizeof(ur_bool_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_bool_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_SAMPLER_INFO_ADDRESSING_MODE: {
        const ur_sampler_addressing_mode_t *tptr =
            (const ur_sampler_addressing_mode_t *)ptr;
        if (sizeof(ur_sampler_addressing_mode_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_sampler_addressing_mode_t)
               << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_SAMPLER_INFO_FILTER_MODE: {
        const ur_sampler_filter_mode_t *tptr =
            (const ur_sampler_filter_mode_t *)ptr;
        if (sizeof(ur_sampler_filter_mode_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_sampler_filter_mode_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;
    default:
        os << "unknown enumerator";
        break;
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_sampler_desc_t params) {
    os << "(struct ur_sampler_desc_t){";

    os << ".stype = ";

    os << (params.stype);

    os << ", ";
    os << ".pNext = ";

    ur_params::serializeStruct(os, (params.pNext));

    os << ", ";
    os << ".normalizedCoords = ";

    os << (params.normalizedCoords);

    os << ", ";
    os << ".addressingMode = ";

    os << (params.addressingMode);

    os << ", ";
    os << ".filterMode = ";

    os << (params.filterMode);

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_usm_host_mem_flag_t value) {
    switch (value) {

    case UR_USM_HOST_MEM_FLAG_INITIAL_PLACEMENT:
        os << "UR_USM_HOST_MEM_FLAG_INITIAL_PLACEMENT";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void
serializeFlag_ur_usm_host_mem_flags_t(std::ostream &os,
                                      ur_usm_host_mem_flags_t flag) {
    uint32_t val = flag;
    bool first = true;

    if ((val & UR_USM_HOST_MEM_FLAG_INITIAL_PLACEMENT) ==
        (uint32_t)UR_USM_HOST_MEM_FLAG_INITIAL_PLACEMENT) {
        val ^= (uint32_t)UR_USM_HOST_MEM_FLAG_INITIAL_PLACEMENT;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_USM_HOST_MEM_FLAG_INITIAL_PLACEMENT;
    }
    if (val != 0) {
        std::bitset<32> bits(val);
        if (!first) {
            os << " | ";
        }
        os << "unknown bit flags " << bits;
    } else if (first) {
        os << "0";
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_usm_device_mem_flag_t value) {
    switch (value) {

    case UR_USM_DEVICE_MEM_FLAG_WRITE_COMBINED:
        os << "UR_USM_DEVICE_MEM_FLAG_WRITE_COMBINED";
        break;

    case UR_USM_DEVICE_MEM_FLAG_INITIAL_PLACEMENT:
        os << "UR_USM_DEVICE_MEM_FLAG_INITIAL_PLACEMENT";
        break;

    case UR_USM_DEVICE_MEM_FLAG_DEVICE_READ_ONLY:
        os << "UR_USM_DEVICE_MEM_FLAG_DEVICE_READ_ONLY";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void
serializeFlag_ur_usm_device_mem_flags_t(std::ostream &os,
                                        ur_usm_device_mem_flags_t flag) {
    uint32_t val = flag;
    bool first = true;

    if ((val & UR_USM_DEVICE_MEM_FLAG_WRITE_COMBINED) ==
        (uint32_t)UR_USM_DEVICE_MEM_FLAG_WRITE_COMBINED) {
        val ^= (uint32_t)UR_USM_DEVICE_MEM_FLAG_WRITE_COMBINED;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_USM_DEVICE_MEM_FLAG_WRITE_COMBINED;
    }

    if ((val & UR_USM_DEVICE_MEM_FLAG_INITIAL_PLACEMENT) ==
        (uint32_t)UR_USM_DEVICE_MEM_FLAG_INITIAL_PLACEMENT) {
        val ^= (uint32_t)UR_USM_DEVICE_MEM_FLAG_INITIAL_PLACEMENT;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_USM_DEVICE_MEM_FLAG_INITIAL_PLACEMENT;
    }

    if ((val & UR_USM_DEVICE_MEM_FLAG_DEVICE_READ_ONLY) ==
        (uint32_t)UR_USM_DEVICE_MEM_FLAG_DEVICE_READ_ONLY) {
        val ^= (uint32_t)UR_USM_DEVICE_MEM_FLAG_DEVICE_READ_ONLY;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_USM_DEVICE_MEM_FLAG_DEVICE_READ_ONLY;
    }
    if (val != 0) {
        std::bitset<32> bits(val);
        if (!first) {
            os << " | ";
        }
        os << "unknown bit flags " << bits;
    } else if (first) {
        os << "0";
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_usm_pool_flag_t value) {
    switch (value) {

    case UR_USM_POOL_FLAG_ZERO_INITIALIZE_BLOCK:
        os << "UR_USM_POOL_FLAG_ZERO_INITIALIZE_BLOCK";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeFlag_ur_usm_pool_flags_t(std::ostream &os,
                                              ur_usm_pool_flags_t flag) {
    uint32_t val = flag;
    bool first = true;

    if ((val & UR_USM_POOL_FLAG_ZERO_INITIALIZE_BLOCK) ==
        (uint32_t)UR_USM_POOL_FLAG_ZERO_INITIALIZE_BLOCK) {
        val ^= (uint32_t)UR_USM_POOL_FLAG_ZERO_INITIALIZE_BLOCK;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_USM_POOL_FLAG_ZERO_INITIALIZE_BLOCK;
    }
    if (val != 0) {
        std::bitset<32> bits(val);
        if (!first) {
            os << " | ";
        }
        os << "unknown bit flags " << bits;
    } else if (first) {
        os << "0";
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os, enum ur_usm_type_t value) {
    switch (value) {

    case UR_USM_TYPE_UNKNOWN:
        os << "UR_USM_TYPE_UNKNOWN";
        break;

    case UR_USM_TYPE_HOST:
        os << "UR_USM_TYPE_HOST";
        break;

    case UR_USM_TYPE_DEVICE:
        os << "UR_USM_TYPE_DEVICE";
        break;

    case UR_USM_TYPE_SHARED:
        os << "UR_USM_TYPE_SHARED";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_usm_alloc_info_t value) {
    switch (value) {

    case UR_USM_ALLOC_INFO_TYPE:
        os << "UR_USM_ALLOC_INFO_TYPE";
        break;

    case UR_USM_ALLOC_INFO_BASE_PTR:
        os << "UR_USM_ALLOC_INFO_BASE_PTR";
        break;

    case UR_USM_ALLOC_INFO_SIZE:
        os << "UR_USM_ALLOC_INFO_SIZE";
        break;

    case UR_USM_ALLOC_INFO_DEVICE:
        os << "UR_USM_ALLOC_INFO_DEVICE";
        break;

    case UR_USM_ALLOC_INFO_POOL:
        os << "UR_USM_ALLOC_INFO_POOL";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void
serializeTaggedTyped_ur_usm_alloc_info_t(std::ostream &os, const void *ptr,
                                         enum ur_usm_alloc_info_t value,
                                         size_t size) {
    if (ptr == NULL) {
        serializePtr(os, ptr);
        return;
    }

    switch (value) {

    case UR_USM_ALLOC_INFO_TYPE: {
        const ur_usm_type_t *tptr = (const ur_usm_type_t *)ptr;
        if (sizeof(ur_usm_type_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_usm_type_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_USM_ALLOC_INFO_BASE_PTR: {
        const void **tptr = (const void **)ptr;
        if (sizeof(void *) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(void *) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_USM_ALLOC_INFO_SIZE: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_USM_ALLOC_INFO_DEVICE: {
        const ur_device_handle_t *tptr = (const ur_device_handle_t *)ptr;
        if (sizeof(ur_device_handle_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_device_handle_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializePtr(os, *tptr);

        os << ")";
    } break;

    case UR_USM_ALLOC_INFO_POOL: {
        const ur_usm_pool_handle_t *tptr = (const ur_usm_pool_handle_t *)ptr;
        if (sizeof(ur_usm_pool_handle_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_usm_pool_handle_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializePtr(os, *tptr);

        os << ")";
    } break;
    default:
        os << "unknown enumerator";
        break;
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_usm_advice_flag_t value) {
    switch (value) {

    case UR_USM_ADVICE_FLAG_DEFAULT:
        os << "UR_USM_ADVICE_FLAG_DEFAULT";
        break;

    case UR_USM_ADVICE_FLAG_SET_READ_MOSTLY:
        os << "UR_USM_ADVICE_FLAG_SET_READ_MOSTLY";
        break;

    case UR_USM_ADVICE_FLAG_CLEAR_READ_MOSTLY:
        os << "UR_USM_ADVICE_FLAG_CLEAR_READ_MOSTLY";
        break;

    case UR_USM_ADVICE_FLAG_SET_PREFERRED_LOCATION:
        os << "UR_USM_ADVICE_FLAG_SET_PREFERRED_LOCATION";
        break;

    case UR_USM_ADVICE_FLAG_CLEAR_PREFERRED_LOCATION:
        os << "UR_USM_ADVICE_FLAG_CLEAR_PREFERRED_LOCATION";
        break;

    case UR_USM_ADVICE_FLAG_SET_NON_ATOMIC_MOSTLY:
        os << "UR_USM_ADVICE_FLAG_SET_NON_ATOMIC_MOSTLY";
        break;

    case UR_USM_ADVICE_FLAG_CLEAR_NON_ATOMIC_MOSTLY:
        os << "UR_USM_ADVICE_FLAG_CLEAR_NON_ATOMIC_MOSTLY";
        break;

    case UR_USM_ADVICE_FLAG_BIAS_CACHED:
        os << "UR_USM_ADVICE_FLAG_BIAS_CACHED";
        break;

    case UR_USM_ADVICE_FLAG_BIAS_UNCACHED:
        os << "UR_USM_ADVICE_FLAG_BIAS_UNCACHED";
        break;

    case UR_USM_ADVICE_FLAG_SET_ACCESSED_BY_DEVICE:
        os << "UR_USM_ADVICE_FLAG_SET_ACCESSED_BY_DEVICE";
        break;

    case UR_USM_ADVICE_FLAG_CLEAR_ACCESSED_BY_DEVICE:
        os << "UR_USM_ADVICE_FLAG_CLEAR_ACCESSED_BY_DEVICE";
        break;

    case UR_USM_ADVICE_FLAG_SET_ACCESSED_BY_HOST:
        os << "UR_USM_ADVICE_FLAG_SET_ACCESSED_BY_HOST";
        break;

    case UR_USM_ADVICE_FLAG_CLEAR_ACCESSED_BY_HOST:
        os << "UR_USM_ADVICE_FLAG_CLEAR_ACCESSED_BY_HOST";
        break;

    case UR_USM_ADVICE_FLAG_SET_PREFERRED_LOCATION_HOST:
        os << "UR_USM_ADVICE_FLAG_SET_PREFERRED_LOCATION_HOST";
        break;

    case UR_USM_ADVICE_FLAG_CLEAR_PREFERRED_LOCATION_HOST:
        os << "UR_USM_ADVICE_FLAG_CLEAR_PREFERRED_LOCATION_HOST";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeFlag_ur_usm_advice_flags_t(std::ostream &os,
                                                ur_usm_advice_flags_t flag) {
    uint32_t val = flag;
    bool first = true;

    if ((val & UR_USM_ADVICE_FLAG_DEFAULT) ==
        (uint32_t)UR_USM_ADVICE_FLAG_DEFAULT) {
        val ^= (uint32_t)UR_USM_ADVICE_FLAG_DEFAULT;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_USM_ADVICE_FLAG_DEFAULT;
    }

    if ((val & UR_USM_ADVICE_FLAG_SET_READ_MOSTLY) ==
        (uint32_t)UR_USM_ADVICE_FLAG_SET_READ_MOSTLY) {
        val ^= (uint32_t)UR_USM_ADVICE_FLAG_SET_READ_MOSTLY;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_USM_ADVICE_FLAG_SET_READ_MOSTLY;
    }

    if ((val & UR_USM_ADVICE_FLAG_CLEAR_READ_MOSTLY) ==
        (uint32_t)UR_USM_ADVICE_FLAG_CLEAR_READ_MOSTLY) {
        val ^= (uint32_t)UR_USM_ADVICE_FLAG_CLEAR_READ_MOSTLY;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_USM_ADVICE_FLAG_CLEAR_READ_MOSTLY;
    }

    if ((val & UR_USM_ADVICE_FLAG_SET_PREFERRED_LOCATION) ==
        (uint32_t)UR_USM_ADVICE_FLAG_SET_PREFERRED_LOCATION) {
        val ^= (uint32_t)UR_USM_ADVICE_FLAG_SET_PREFERRED_LOCATION;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_USM_ADVICE_FLAG_SET_PREFERRED_LOCATION;
    }

    if ((val & UR_USM_ADVICE_FLAG_CLEAR_PREFERRED_LOCATION) ==
        (uint32_t)UR_USM_ADVICE_FLAG_CLEAR_PREFERRED_LOCATION) {
        val ^= (uint32_t)UR_USM_ADVICE_FLAG_CLEAR_PREFERRED_LOCATION;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_USM_ADVICE_FLAG_CLEAR_PREFERRED_LOCATION;
    }

    if ((val & UR_USM_ADVICE_FLAG_SET_NON_ATOMIC_MOSTLY) ==
        (uint32_t)UR_USM_ADVICE_FLAG_SET_NON_ATOMIC_MOSTLY) {
        val ^= (uint32_t)UR_USM_ADVICE_FLAG_SET_NON_ATOMIC_MOSTLY;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_USM_ADVICE_FLAG_SET_NON_ATOMIC_MOSTLY;
    }

    if ((val & UR_USM_ADVICE_FLAG_CLEAR_NON_ATOMIC_MOSTLY) ==
        (uint32_t)UR_USM_ADVICE_FLAG_CLEAR_NON_ATOMIC_MOSTLY) {
        val ^= (uint32_t)UR_USM_ADVICE_FLAG_CLEAR_NON_ATOMIC_MOSTLY;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_USM_ADVICE_FLAG_CLEAR_NON_ATOMIC_MOSTLY;
    }

    if ((val & UR_USM_ADVICE_FLAG_BIAS_CACHED) ==
        (uint32_t)UR_USM_ADVICE_FLAG_BIAS_CACHED) {
        val ^= (uint32_t)UR_USM_ADVICE_FLAG_BIAS_CACHED;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_USM_ADVICE_FLAG_BIAS_CACHED;
    }

    if ((val & UR_USM_ADVICE_FLAG_BIAS_UNCACHED) ==
        (uint32_t)UR_USM_ADVICE_FLAG_BIAS_UNCACHED) {
        val ^= (uint32_t)UR_USM_ADVICE_FLAG_BIAS_UNCACHED;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_USM_ADVICE_FLAG_BIAS_UNCACHED;
    }

    if ((val & UR_USM_ADVICE_FLAG_SET_ACCESSED_BY_DEVICE) ==
        (uint32_t)UR_USM_ADVICE_FLAG_SET_ACCESSED_BY_DEVICE) {
        val ^= (uint32_t)UR_USM_ADVICE_FLAG_SET_ACCESSED_BY_DEVICE;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_USM_ADVICE_FLAG_SET_ACCESSED_BY_DEVICE;
    }

    if ((val & UR_USM_ADVICE_FLAG_CLEAR_ACCESSED_BY_DEVICE) ==
        (uint32_t)UR_USM_ADVICE_FLAG_CLEAR_ACCESSED_BY_DEVICE) {
        val ^= (uint32_t)UR_USM_ADVICE_FLAG_CLEAR_ACCESSED_BY_DEVICE;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_USM_ADVICE_FLAG_CLEAR_ACCESSED_BY_DEVICE;
    }

    if ((val & UR_USM_ADVICE_FLAG_SET_ACCESSED_BY_HOST) ==
        (uint32_t)UR_USM_ADVICE_FLAG_SET_ACCESSED_BY_HOST) {
        val ^= (uint32_t)UR_USM_ADVICE_FLAG_SET_ACCESSED_BY_HOST;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_USM_ADVICE_FLAG_SET_ACCESSED_BY_HOST;
    }

    if ((val & UR_USM_ADVICE_FLAG_CLEAR_ACCESSED_BY_HOST) ==
        (uint32_t)UR_USM_ADVICE_FLAG_CLEAR_ACCESSED_BY_HOST) {
        val ^= (uint32_t)UR_USM_ADVICE_FLAG_CLEAR_ACCESSED_BY_HOST;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_USM_ADVICE_FLAG_CLEAR_ACCESSED_BY_HOST;
    }

    if ((val & UR_USM_ADVICE_FLAG_SET_PREFERRED_LOCATION_HOST) ==
        (uint32_t)UR_USM_ADVICE_FLAG_SET_PREFERRED_LOCATION_HOST) {
        val ^= (uint32_t)UR_USM_ADVICE_FLAG_SET_PREFERRED_LOCATION_HOST;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_USM_ADVICE_FLAG_SET_PREFERRED_LOCATION_HOST;
    }

    if ((val & UR_USM_ADVICE_FLAG_CLEAR_PREFERRED_LOCATION_HOST) ==
        (uint32_t)UR_USM_ADVICE_FLAG_CLEAR_PREFERRED_LOCATION_HOST) {
        val ^= (uint32_t)UR_USM_ADVICE_FLAG_CLEAR_PREFERRED_LOCATION_HOST;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_USM_ADVICE_FLAG_CLEAR_PREFERRED_LOCATION_HOST;
    }
    if (val != 0) {
        std::bitset<32> bits(val);
        if (!first) {
            os << " | ";
        }
        os << "unknown bit flags " << bits;
    } else if (first) {
        os << "0";
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_usm_desc_t params) {
    os << "(struct ur_usm_desc_t){";

    os << ".stype = ";

    os << (params.stype);

    os << ", ";
    os << ".pNext = ";

    ur_params::serializeStruct(os, (params.pNext));

    os << ", ";
    os << ".hints = ";

    ur_params::serializeFlag_ur_usm_advice_flags_t(os, (params.hints));

    os << ", ";
    os << ".align = ";

    os << (params.align);

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_usm_host_desc_t params) {
    os << "(struct ur_usm_host_desc_t){";

    os << ".stype = ";

    os << (params.stype);

    os << ", ";
    os << ".pNext = ";

    ur_params::serializeStruct(os, (params.pNext));

    os << ", ";
    os << ".flags = ";

    ur_params::serializeFlag_ur_usm_host_mem_flags_t(os, (params.flags));

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_usm_device_desc_t params) {
    os << "(struct ur_usm_device_desc_t){";

    os << ".stype = ";

    os << (params.stype);

    os << ", ";
    os << ".pNext = ";

    ur_params::serializeStruct(os, (params.pNext));

    os << ", ";
    os << ".flags = ";

    ur_params::serializeFlag_ur_usm_device_mem_flags_t(os, (params.flags));

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_usm_pool_desc_t params) {
    os << "(struct ur_usm_pool_desc_t){";

    os << ".stype = ";

    os << (params.stype);

    os << ", ";
    os << ".pNext = ";

    ur_params::serializeStruct(os, (params.pNext));

    os << ", ";
    os << ".flags = ";

    ur_params::serializeFlag_ur_usm_pool_flags_t(os, (params.flags));

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_usm_pool_limits_desc_t params) {
    os << "(struct ur_usm_pool_limits_desc_t){";

    os << ".stype = ";

    os << (params.stype);

    os << ", ";
    os << ".pNext = ";

    ur_params::serializeStruct(os, (params.pNext));

    os << ", ";
    os << ".maxPoolableSize = ";

    os << (params.maxPoolableSize);

    os << ", ";
    os << ".minDriverAllocSize = ";

    os << (params.minDriverAllocSize);

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_program_metadata_type_t value) {
    switch (value) {

    case UR_PROGRAM_METADATA_TYPE_UINT32:
        os << "UR_PROGRAM_METADATA_TYPE_UINT32";
        break;

    case UR_PROGRAM_METADATA_TYPE_UINT64:
        os << "UR_PROGRAM_METADATA_TYPE_UINT64";
        break;

    case UR_PROGRAM_METADATA_TYPE_BYTE_ARRAY:
        os << "UR_PROGRAM_METADATA_TYPE_BYTE_ARRAY";
        break;

    case UR_PROGRAM_METADATA_TYPE_STRING:
        os << "UR_PROGRAM_METADATA_TYPE_STRING";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
inline std::ostream &
operator<<(std::ostream &os, const union ur_program_metadata_value_t params) {
    os << "(union ur_program_metadata_value_t){";

    os << ".data32 = ";

    os << (params.data32);

    os << ", ";
    os << ".data64 = ";

    os << (params.data64);

    os << ", ";
    os << ".pString = ";

    ur_params::serializePtr(os, (params.pString));

    os << ", ";
    os << ".pData = ";

    ur_params::serializePtr(os, (params.pData));

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_program_metadata_t params) {
    os << "(struct ur_program_metadata_t){";

    os << ".pName = ";

    ur_params::serializePtr(os, (params.pName));

    os << ", ";
    os << ".type = ";

    os << (params.type);

    os << ", ";
    os << ".size = ";

    os << (params.size);

    os << ", ";
    os << ".value = ";

    os << (params.value);

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_program_properties_t params) {
    os << "(struct ur_program_properties_t){";

    os << ".stype = ";

    os << (params.stype);

    os << ", ";
    os << ".pNext = ";

    ur_params::serializeStruct(os, (params.pNext));

    os << ", ";
    os << ".count = ";

    os << (params.count);

    os << ", ";
    os << ".pMetadatas = [";
    for (size_t i = 0; (params.pMetadatas) != NULL && i < params.count; ++i) {
        if (i != 0) {
            os << ", ";
        }

        os << ((params.pMetadatas))[i];
    }
    os << "]";

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_program_info_t value) {
    switch (value) {

    case UR_PROGRAM_INFO_REFERENCE_COUNT:
        os << "UR_PROGRAM_INFO_REFERENCE_COUNT";
        break;

    case UR_PROGRAM_INFO_CONTEXT:
        os << "UR_PROGRAM_INFO_CONTEXT";
        break;

    case UR_PROGRAM_INFO_NUM_DEVICES:
        os << "UR_PROGRAM_INFO_NUM_DEVICES";
        break;

    case UR_PROGRAM_INFO_DEVICES:
        os << "UR_PROGRAM_INFO_DEVICES";
        break;

    case UR_PROGRAM_INFO_SOURCE:
        os << "UR_PROGRAM_INFO_SOURCE";
        break;

    case UR_PROGRAM_INFO_BINARY_SIZES:
        os << "UR_PROGRAM_INFO_BINARY_SIZES";
        break;

    case UR_PROGRAM_INFO_BINARIES:
        os << "UR_PROGRAM_INFO_BINARIES";
        break;

    case UR_PROGRAM_INFO_NUM_KERNELS:
        os << "UR_PROGRAM_INFO_NUM_KERNELS";
        break;

    case UR_PROGRAM_INFO_KERNEL_NAMES:
        os << "UR_PROGRAM_INFO_KERNEL_NAMES";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeTaggedTyped_ur_program_info_t(std::ostream &os,
                                                   const void *ptr,
                                                   enum ur_program_info_t value,
                                                   size_t size) {
    if (ptr == NULL) {
        serializePtr(os, ptr);
        return;
    }

    switch (value) {

    case UR_PROGRAM_INFO_REFERENCE_COUNT: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_PROGRAM_INFO_CONTEXT: {
        const ur_context_handle_t *tptr = (const ur_context_handle_t *)ptr;
        if (sizeof(ur_context_handle_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_context_handle_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializePtr(os, *tptr);

        os << ")";
    } break;

    case UR_PROGRAM_INFO_NUM_DEVICES: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_PROGRAM_INFO_DEVICES: {

        const ur_device_handle_t *tptr = (const ur_device_handle_t *)ptr;
        os << "[";
        size_t nelems = size / sizeof(ur_device_handle_t);
        for (size_t i = 0; i < nelems; ++i) {
            if (i != 0) {
                os << ", ";
            }

            ur_params::serializePtr(os, tptr[i]);
        }
        os << "]";
    } break;

    case UR_PROGRAM_INFO_SOURCE: {

        const char *tptr = (const char *)ptr;
        serializePtr(os, tptr);
    } break;

    case UR_PROGRAM_INFO_BINARY_SIZES: {

        const size_t *tptr = (const size_t *)ptr;
        os << "[";
        size_t nelems = size / sizeof(size_t);
        for (size_t i = 0; i < nelems; ++i) {
            if (i != 0) {
                os << ", ";
            }

            os << tptr[i];
        }
        os << "]";
    } break;

    case UR_PROGRAM_INFO_BINARIES: {

        const unsigned char *tptr = (const unsigned char *)ptr;
        serializePtr(os, tptr);
    } break;

    case UR_PROGRAM_INFO_NUM_KERNELS: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_PROGRAM_INFO_KERNEL_NAMES: {

        const char *tptr = (const char *)ptr;
        serializePtr(os, tptr);
    } break;
    default:
        os << "unknown enumerator";
        break;
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_program_build_status_t value) {
    switch (value) {

    case UR_PROGRAM_BUILD_STATUS_NONE:
        os << "UR_PROGRAM_BUILD_STATUS_NONE";
        break;

    case UR_PROGRAM_BUILD_STATUS_ERROR:
        os << "UR_PROGRAM_BUILD_STATUS_ERROR";
        break;

    case UR_PROGRAM_BUILD_STATUS_SUCCESS:
        os << "UR_PROGRAM_BUILD_STATUS_SUCCESS";
        break;

    case UR_PROGRAM_BUILD_STATUS_IN_PROGRESS:
        os << "UR_PROGRAM_BUILD_STATUS_IN_PROGRESS";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_program_binary_type_t value) {
    switch (value) {

    case UR_PROGRAM_BINARY_TYPE_NONE:
        os << "UR_PROGRAM_BINARY_TYPE_NONE";
        break;

    case UR_PROGRAM_BINARY_TYPE_COMPILED_OBJECT:
        os << "UR_PROGRAM_BINARY_TYPE_COMPILED_OBJECT";
        break;

    case UR_PROGRAM_BINARY_TYPE_LIBRARY:
        os << "UR_PROGRAM_BINARY_TYPE_LIBRARY";
        break;

    case UR_PROGRAM_BINARY_TYPE_EXECUTABLE:
        os << "UR_PROGRAM_BINARY_TYPE_EXECUTABLE";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_program_build_info_t value) {
    switch (value) {

    case UR_PROGRAM_BUILD_INFO_STATUS:
        os << "UR_PROGRAM_BUILD_INFO_STATUS";
        break;

    case UR_PROGRAM_BUILD_INFO_OPTIONS:
        os << "UR_PROGRAM_BUILD_INFO_OPTIONS";
        break;

    case UR_PROGRAM_BUILD_INFO_LOG:
        os << "UR_PROGRAM_BUILD_INFO_LOG";
        break;

    case UR_PROGRAM_BUILD_INFO_BINARY_TYPE:
        os << "UR_PROGRAM_BUILD_INFO_BINARY_TYPE";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void
serializeTaggedTyped_ur_program_build_info_t(std::ostream &os, const void *ptr,
                                             enum ur_program_build_info_t value,
                                             size_t size) {
    if (ptr == NULL) {
        serializePtr(os, ptr);
        return;
    }

    switch (value) {

    case UR_PROGRAM_BUILD_INFO_STATUS: {
        const ur_program_build_status_t *tptr =
            (const ur_program_build_status_t *)ptr;
        if (sizeof(ur_program_build_status_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_program_build_status_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_PROGRAM_BUILD_INFO_OPTIONS: {

        const char *tptr = (const char *)ptr;
        serializePtr(os, tptr);
    } break;

    case UR_PROGRAM_BUILD_INFO_LOG: {

        const char *tptr = (const char *)ptr;
        serializePtr(os, tptr);
    } break;

    case UR_PROGRAM_BUILD_INFO_BINARY_TYPE: {
        const ur_program_binary_type_t *tptr =
            (const ur_program_binary_type_t *)ptr;
        if (sizeof(ur_program_binary_type_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_program_binary_type_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;
    default:
        os << "unknown enumerator";
        break;
    }
}
} // namespace ur_params
inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_specialization_constant_info_t params) {
    os << "(struct ur_specialization_constant_info_t){";

    os << ".id = ";

    os << (params.id);

    os << ", ";
    os << ".size = ";

    os << (params.size);

    os << ", ";
    os << ".pValue = ";

    ur_params::serializePtr(os, (params.pValue));

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os, enum ur_kernel_info_t value) {
    switch (value) {

    case UR_KERNEL_INFO_FUNCTION_NAME:
        os << "UR_KERNEL_INFO_FUNCTION_NAME";
        break;

    case UR_KERNEL_INFO_NUM_ARGS:
        os << "UR_KERNEL_INFO_NUM_ARGS";
        break;

    case UR_KERNEL_INFO_REFERENCE_COUNT:
        os << "UR_KERNEL_INFO_REFERENCE_COUNT";
        break;

    case UR_KERNEL_INFO_CONTEXT:
        os << "UR_KERNEL_INFO_CONTEXT";
        break;

    case UR_KERNEL_INFO_PROGRAM:
        os << "UR_KERNEL_INFO_PROGRAM";
        break;

    case UR_KERNEL_INFO_ATTRIBUTES:
        os << "UR_KERNEL_INFO_ATTRIBUTES";
        break;

    case UR_KERNEL_INFO_NUM_REGS:
        os << "UR_KERNEL_INFO_NUM_REGS";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeTaggedTyped_ur_kernel_info_t(std::ostream &os,
                                                  const void *ptr,
                                                  enum ur_kernel_info_t value,
                                                  size_t size) {
    if (ptr == NULL) {
        serializePtr(os, ptr);
        return;
    }

    switch (value) {

    case UR_KERNEL_INFO_FUNCTION_NAME: {

        const char *tptr = (const char *)ptr;
        serializePtr(os, tptr);
    } break;

    case UR_KERNEL_INFO_NUM_ARGS: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_KERNEL_INFO_REFERENCE_COUNT: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_KERNEL_INFO_CONTEXT: {
        const ur_context_handle_t *tptr = (const ur_context_handle_t *)ptr;
        if (sizeof(ur_context_handle_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_context_handle_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializePtr(os, *tptr);

        os << ")";
    } break;

    case UR_KERNEL_INFO_PROGRAM: {
        const ur_program_handle_t *tptr = (const ur_program_handle_t *)ptr;
        if (sizeof(ur_program_handle_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_program_handle_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializePtr(os, *tptr);

        os << ")";
    } break;

    case UR_KERNEL_INFO_ATTRIBUTES: {

        const char *tptr = (const char *)ptr;
        serializePtr(os, tptr);
    } break;

    case UR_KERNEL_INFO_NUM_REGS: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;
    default:
        os << "unknown enumerator";
        break;
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_kernel_group_info_t value) {
    switch (value) {

    case UR_KERNEL_GROUP_INFO_GLOBAL_WORK_SIZE:
        os << "UR_KERNEL_GROUP_INFO_GLOBAL_WORK_SIZE";
        break;

    case UR_KERNEL_GROUP_INFO_WORK_GROUP_SIZE:
        os << "UR_KERNEL_GROUP_INFO_WORK_GROUP_SIZE";
        break;

    case UR_KERNEL_GROUP_INFO_COMPILE_WORK_GROUP_SIZE:
        os << "UR_KERNEL_GROUP_INFO_COMPILE_WORK_GROUP_SIZE";
        break;

    case UR_KERNEL_GROUP_INFO_LOCAL_MEM_SIZE:
        os << "UR_KERNEL_GROUP_INFO_LOCAL_MEM_SIZE";
        break;

    case UR_KERNEL_GROUP_INFO_PREFERRED_WORK_GROUP_SIZE_MULTIPLE:
        os << "UR_KERNEL_GROUP_INFO_PREFERRED_WORK_GROUP_SIZE_MULTIPLE";
        break;

    case UR_KERNEL_GROUP_INFO_PRIVATE_MEM_SIZE:
        os << "UR_KERNEL_GROUP_INFO_PRIVATE_MEM_SIZE";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void
serializeTaggedTyped_ur_kernel_group_info_t(std::ostream &os, const void *ptr,
                                            enum ur_kernel_group_info_t value,
                                            size_t size) {
    if (ptr == NULL) {
        serializePtr(os, ptr);
        return;
    }

    switch (value) {

    case UR_KERNEL_GROUP_INFO_GLOBAL_WORK_SIZE: {

        const size_t *tptr = (const size_t *)ptr;
        os << "[";
        size_t nelems = size / sizeof(size_t);
        for (size_t i = 0; i < nelems; ++i) {
            if (i != 0) {
                os << ", ";
            }

            os << tptr[i];
        }
        os << "]";
    } break;

    case UR_KERNEL_GROUP_INFO_WORK_GROUP_SIZE: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_KERNEL_GROUP_INFO_COMPILE_WORK_GROUP_SIZE: {

        const size_t *tptr = (const size_t *)ptr;
        os << "[";
        size_t nelems = size / sizeof(size_t);
        for (size_t i = 0; i < nelems; ++i) {
            if (i != 0) {
                os << ", ";
            }

            os << tptr[i];
        }
        os << "]";
    } break;

    case UR_KERNEL_GROUP_INFO_LOCAL_MEM_SIZE: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_KERNEL_GROUP_INFO_PREFERRED_WORK_GROUP_SIZE_MULTIPLE: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_KERNEL_GROUP_INFO_PRIVATE_MEM_SIZE: {
        const size_t *tptr = (const size_t *)ptr;
        if (sizeof(size_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(size_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;
    default:
        os << "unknown enumerator";
        break;
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_kernel_sub_group_info_t value) {
    switch (value) {

    case UR_KERNEL_SUB_GROUP_INFO_MAX_SUB_GROUP_SIZE:
        os << "UR_KERNEL_SUB_GROUP_INFO_MAX_SUB_GROUP_SIZE";
        break;

    case UR_KERNEL_SUB_GROUP_INFO_MAX_NUM_SUB_GROUPS:
        os << "UR_KERNEL_SUB_GROUP_INFO_MAX_NUM_SUB_GROUPS";
        break;

    case UR_KERNEL_SUB_GROUP_INFO_COMPILE_NUM_SUB_GROUPS:
        os << "UR_KERNEL_SUB_GROUP_INFO_COMPILE_NUM_SUB_GROUPS";
        break;

    case UR_KERNEL_SUB_GROUP_INFO_SUB_GROUP_SIZE_INTEL:
        os << "UR_KERNEL_SUB_GROUP_INFO_SUB_GROUP_SIZE_INTEL";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeTaggedTyped_ur_kernel_sub_group_info_t(
    std::ostream &os, const void *ptr, enum ur_kernel_sub_group_info_t value,
    size_t size) {
    if (ptr == NULL) {
        serializePtr(os, ptr);
        return;
    }

    switch (value) {

    case UR_KERNEL_SUB_GROUP_INFO_MAX_SUB_GROUP_SIZE: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_KERNEL_SUB_GROUP_INFO_MAX_NUM_SUB_GROUPS: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_KERNEL_SUB_GROUP_INFO_COMPILE_NUM_SUB_GROUPS: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_KERNEL_SUB_GROUP_INFO_SUB_GROUP_SIZE_INTEL: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;
    default:
        os << "unknown enumerator";
        break;
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_kernel_cache_config_t value) {
    switch (value) {

    case UR_KERNEL_CACHE_CONFIG_DEFAULT:
        os << "UR_KERNEL_CACHE_CONFIG_DEFAULT";
        break;

    case UR_KERNEL_CACHE_CONFIG_LARGE_SLM:
        os << "UR_KERNEL_CACHE_CONFIG_LARGE_SLM";
        break;

    case UR_KERNEL_CACHE_CONFIG_LARGE_DATA:
        os << "UR_KERNEL_CACHE_CONFIG_LARGE_DATA";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_kernel_exec_info_t value) {
    switch (value) {

    case UR_KERNEL_EXEC_INFO_USM_INDIRECT_ACCESS:
        os << "UR_KERNEL_EXEC_INFO_USM_INDIRECT_ACCESS";
        break;

    case UR_KERNEL_EXEC_INFO_USM_PTRS:
        os << "UR_KERNEL_EXEC_INFO_USM_PTRS";
        break;

    case UR_KERNEL_EXEC_INFO_CACHE_CONFIG:
        os << "UR_KERNEL_EXEC_INFO_CACHE_CONFIG";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void
serializeTaggedTyped_ur_kernel_exec_info_t(std::ostream &os, const void *ptr,
                                           enum ur_kernel_exec_info_t value,
                                           size_t size) {
    if (ptr == NULL) {
        serializePtr(os, ptr);
        return;
    }

    switch (value) {

    case UR_KERNEL_EXEC_INFO_USM_INDIRECT_ACCESS: {
        const ur_bool_t *tptr = (const ur_bool_t *)ptr;
        if (sizeof(ur_bool_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_bool_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_KERNEL_EXEC_INFO_USM_PTRS: {

        const void **tptr = (const void **)ptr;
        os << "[";
        size_t nelems = size / sizeof(void *);
        for (size_t i = 0; i < nelems; ++i) {
            if (i != 0) {
                os << ", ";
            }

            os << tptr[i];
        }
        os << "]";
    } break;

    case UR_KERNEL_EXEC_INFO_CACHE_CONFIG: {
        const ur_kernel_cache_config_t *tptr =
            (const ur_kernel_cache_config_t *)ptr;
        if (sizeof(ur_kernel_cache_config_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_kernel_cache_config_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;
    default:
        os << "unknown enumerator";
        break;
    }
}
} // namespace ur_params
inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_kernel_native_properties_t params) {
    os << "(struct ur_kernel_native_properties_t){";

    os << ".stype = ";

    os << (params.stype);

    os << ", ";
    os << ".pNext = ";

    ur_params::serializeStruct(os, (params.pNext));

    os << ", ";
    os << ".isNativeHandleOwned = ";

    os << (params.isNativeHandleOwned);

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os, enum ur_queue_info_t value) {
    switch (value) {

    case UR_QUEUE_INFO_CONTEXT:
        os << "UR_QUEUE_INFO_CONTEXT";
        break;

    case UR_QUEUE_INFO_DEVICE:
        os << "UR_QUEUE_INFO_DEVICE";
        break;

    case UR_QUEUE_INFO_DEVICE_DEFAULT:
        os << "UR_QUEUE_INFO_DEVICE_DEFAULT";
        break;

    case UR_QUEUE_INFO_FLAGS:
        os << "UR_QUEUE_INFO_FLAGS";
        break;

    case UR_QUEUE_INFO_REFERENCE_COUNT:
        os << "UR_QUEUE_INFO_REFERENCE_COUNT";
        break;

    case UR_QUEUE_INFO_SIZE:
        os << "UR_QUEUE_INFO_SIZE";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeTaggedTyped_ur_queue_info_t(std::ostream &os,
                                                 const void *ptr,
                                                 enum ur_queue_info_t value,
                                                 size_t size) {
    if (ptr == NULL) {
        serializePtr(os, ptr);
        return;
    }

    switch (value) {

    case UR_QUEUE_INFO_CONTEXT: {
        const ur_queue_handle_t *tptr = (const ur_queue_handle_t *)ptr;
        if (sizeof(ur_queue_handle_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_queue_handle_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializePtr(os, *tptr);

        os << ")";
    } break;

    case UR_QUEUE_INFO_DEVICE: {
        const ur_device_handle_t *tptr = (const ur_device_handle_t *)ptr;
        if (sizeof(ur_device_handle_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_device_handle_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializePtr(os, *tptr);

        os << ")";
    } break;

    case UR_QUEUE_INFO_DEVICE_DEFAULT: {
        const ur_queue_handle_t *tptr = (const ur_queue_handle_t *)ptr;
        if (sizeof(ur_queue_handle_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_queue_handle_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializePtr(os, *tptr);

        os << ")";
    } break;

    case UR_QUEUE_INFO_FLAGS: {
        const ur_queue_flags_t *tptr = (const ur_queue_flags_t *)ptr;
        if (sizeof(ur_queue_flags_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_queue_flags_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializeFlag_ur_queue_flags_t(os, *tptr);

        os << ")";
    } break;

    case UR_QUEUE_INFO_REFERENCE_COUNT: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_QUEUE_INFO_SIZE: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;
    default:
        os << "unknown enumerator";
        break;
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os, enum ur_queue_flag_t value) {
    switch (value) {

    case UR_QUEUE_FLAG_OUT_OF_ORDER_EXEC_MODE_ENABLE:
        os << "UR_QUEUE_FLAG_OUT_OF_ORDER_EXEC_MODE_ENABLE";
        break;

    case UR_QUEUE_FLAG_PROFILING_ENABLE:
        os << "UR_QUEUE_FLAG_PROFILING_ENABLE";
        break;

    case UR_QUEUE_FLAG_ON_DEVICE:
        os << "UR_QUEUE_FLAG_ON_DEVICE";
        break;

    case UR_QUEUE_FLAG_ON_DEVICE_DEFAULT:
        os << "UR_QUEUE_FLAG_ON_DEVICE_DEFAULT";
        break;

    case UR_QUEUE_FLAG_DISCARD_EVENTS:
        os << "UR_QUEUE_FLAG_DISCARD_EVENTS";
        break;

    case UR_QUEUE_FLAG_PRIORITY_LOW:
        os << "UR_QUEUE_FLAG_PRIORITY_LOW";
        break;

    case UR_QUEUE_FLAG_PRIORITY_HIGH:
        os << "UR_QUEUE_FLAG_PRIORITY_HIGH";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeFlag_ur_queue_flags_t(std::ostream &os,
                                           ur_queue_flags_t flag) {
    uint32_t val = flag;
    bool first = true;

    if ((val & UR_QUEUE_FLAG_OUT_OF_ORDER_EXEC_MODE_ENABLE) ==
        (uint32_t)UR_QUEUE_FLAG_OUT_OF_ORDER_EXEC_MODE_ENABLE) {
        val ^= (uint32_t)UR_QUEUE_FLAG_OUT_OF_ORDER_EXEC_MODE_ENABLE;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_QUEUE_FLAG_OUT_OF_ORDER_EXEC_MODE_ENABLE;
    }

    if ((val & UR_QUEUE_FLAG_PROFILING_ENABLE) ==
        (uint32_t)UR_QUEUE_FLAG_PROFILING_ENABLE) {
        val ^= (uint32_t)UR_QUEUE_FLAG_PROFILING_ENABLE;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_QUEUE_FLAG_PROFILING_ENABLE;
    }

    if ((val & UR_QUEUE_FLAG_ON_DEVICE) == (uint32_t)UR_QUEUE_FLAG_ON_DEVICE) {
        val ^= (uint32_t)UR_QUEUE_FLAG_ON_DEVICE;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_QUEUE_FLAG_ON_DEVICE;
    }

    if ((val & UR_QUEUE_FLAG_ON_DEVICE_DEFAULT) ==
        (uint32_t)UR_QUEUE_FLAG_ON_DEVICE_DEFAULT) {
        val ^= (uint32_t)UR_QUEUE_FLAG_ON_DEVICE_DEFAULT;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_QUEUE_FLAG_ON_DEVICE_DEFAULT;
    }

    if ((val & UR_QUEUE_FLAG_DISCARD_EVENTS) ==
        (uint32_t)UR_QUEUE_FLAG_DISCARD_EVENTS) {
        val ^= (uint32_t)UR_QUEUE_FLAG_DISCARD_EVENTS;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_QUEUE_FLAG_DISCARD_EVENTS;
    }

    if ((val & UR_QUEUE_FLAG_PRIORITY_LOW) ==
        (uint32_t)UR_QUEUE_FLAG_PRIORITY_LOW) {
        val ^= (uint32_t)UR_QUEUE_FLAG_PRIORITY_LOW;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_QUEUE_FLAG_PRIORITY_LOW;
    }

    if ((val & UR_QUEUE_FLAG_PRIORITY_HIGH) ==
        (uint32_t)UR_QUEUE_FLAG_PRIORITY_HIGH) {
        val ^= (uint32_t)UR_QUEUE_FLAG_PRIORITY_HIGH;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_QUEUE_FLAG_PRIORITY_HIGH;
    }
    if (val != 0) {
        std::bitset<32> bits(val);
        if (!first) {
            os << " | ";
        }
        os << "unknown bit flags " << bits;
    } else if (first) {
        os << "0";
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_queue_properties_t params) {
    os << "(struct ur_queue_properties_t){";

    os << ".stype = ";

    os << (params.stype);

    os << ", ";
    os << ".pNext = ";

    ur_params::serializeStruct(os, (params.pNext));

    os << ", ";
    os << ".flags = ";

    ur_params::serializeFlag_ur_queue_flags_t(os, (params.flags));

    os << "}";
    return os;
}
inline std::ostream &
operator<<(std::ostream &os, const struct ur_queue_index_properties_t params) {
    os << "(struct ur_queue_index_properties_t){";

    os << ".stype = ";

    os << (params.stype);

    os << ", ";
    os << ".pNext = ";

    ur_params::serializeStruct(os, (params.pNext));

    os << ", ";
    os << ".computeIndex = ";

    os << (params.computeIndex);

    os << "}";
    return os;
}
inline std::ostream &
operator<<(std::ostream &os, const struct ur_queue_native_properties_t params) {
    os << "(struct ur_queue_native_properties_t){";

    os << ".stype = ";

    os << (params.stype);

    os << ", ";
    os << ".pNext = ";

    ur_params::serializeStruct(os, (params.pNext));

    os << ", ";
    os << ".isNativeHandleOwned = ";

    os << (params.isNativeHandleOwned);

    os << "}";
    return os;
}
inline std::ostream &operator<<(std::ostream &os, enum ur_command_t value) {
    switch (value) {

    case UR_COMMAND_KERNEL_LAUNCH:
        os << "UR_COMMAND_KERNEL_LAUNCH";
        break;

    case UR_COMMAND_EVENTS_WAIT:
        os << "UR_COMMAND_EVENTS_WAIT";
        break;

    case UR_COMMAND_EVENTS_WAIT_WITH_BARRIER:
        os << "UR_COMMAND_EVENTS_WAIT_WITH_BARRIER";
        break;

    case UR_COMMAND_MEM_BUFFER_READ:
        os << "UR_COMMAND_MEM_BUFFER_READ";
        break;

    case UR_COMMAND_MEM_BUFFER_WRITE:
        os << "UR_COMMAND_MEM_BUFFER_WRITE";
        break;

    case UR_COMMAND_MEM_BUFFER_READ_RECT:
        os << "UR_COMMAND_MEM_BUFFER_READ_RECT";
        break;

    case UR_COMMAND_MEM_BUFFER_WRITE_RECT:
        os << "UR_COMMAND_MEM_BUFFER_WRITE_RECT";
        break;

    case UR_COMMAND_MEM_BUFFER_COPY:
        os << "UR_COMMAND_MEM_BUFFER_COPY";
        break;

    case UR_COMMAND_MEM_BUFFER_COPY_RECT:
        os << "UR_COMMAND_MEM_BUFFER_COPY_RECT";
        break;

    case UR_COMMAND_MEM_BUFFER_FILL:
        os << "UR_COMMAND_MEM_BUFFER_FILL";
        break;

    case UR_COMMAND_MEM_IMAGE_READ:
        os << "UR_COMMAND_MEM_IMAGE_READ";
        break;

    case UR_COMMAND_MEM_IMAGE_WRITE:
        os << "UR_COMMAND_MEM_IMAGE_WRITE";
        break;

    case UR_COMMAND_MEM_IMAGE_COPY:
        os << "UR_COMMAND_MEM_IMAGE_COPY";
        break;

    case UR_COMMAND_MEM_BUFFER_MAP:
        os << "UR_COMMAND_MEM_BUFFER_MAP";
        break;

    case UR_COMMAND_MEM_UNMAP:
        os << "UR_COMMAND_MEM_UNMAP";
        break;

    case UR_COMMAND_USM_FILL:
        os << "UR_COMMAND_USM_FILL";
        break;

    case UR_COMMAND_USM_MEMCPY:
        os << "UR_COMMAND_USM_MEMCPY";
        break;

    case UR_COMMAND_USM_PREFETCH:
        os << "UR_COMMAND_USM_PREFETCH";
        break;

    case UR_COMMAND_USM_ADVISE:
        os << "UR_COMMAND_USM_ADVISE";
        break;

    case UR_COMMAND_USM_FILL_2D:
        os << "UR_COMMAND_USM_FILL_2D";
        break;

    case UR_COMMAND_USM_MEMCPY_2D:
        os << "UR_COMMAND_USM_MEMCPY_2D";
        break;

    case UR_COMMAND_DEVICE_GLOBAL_VARIABLE_WRITE:
        os << "UR_COMMAND_DEVICE_GLOBAL_VARIABLE_WRITE";
        break;

    case UR_COMMAND_DEVICE_GLOBAL_VARIABLE_READ:
        os << "UR_COMMAND_DEVICE_GLOBAL_VARIABLE_READ";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_event_status_t value) {
    switch (value) {

    case UR_EVENT_STATUS_COMPLETE:
        os << "UR_EVENT_STATUS_COMPLETE";
        break;

    case UR_EVENT_STATUS_RUNNING:
        os << "UR_EVENT_STATUS_RUNNING";
        break;

    case UR_EVENT_STATUS_SUBMITTED:
        os << "UR_EVENT_STATUS_SUBMITTED";
        break;

    case UR_EVENT_STATUS_QUEUED:
        os << "UR_EVENT_STATUS_QUEUED";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
inline std::ostream &operator<<(std::ostream &os, enum ur_event_info_t value) {
    switch (value) {

    case UR_EVENT_INFO_COMMAND_QUEUE:
        os << "UR_EVENT_INFO_COMMAND_QUEUE";
        break;

    case UR_EVENT_INFO_CONTEXT:
        os << "UR_EVENT_INFO_CONTEXT";
        break;

    case UR_EVENT_INFO_COMMAND_TYPE:
        os << "UR_EVENT_INFO_COMMAND_TYPE";
        break;

    case UR_EVENT_INFO_COMMAND_EXECUTION_STATUS:
        os << "UR_EVENT_INFO_COMMAND_EXECUTION_STATUS";
        break;

    case UR_EVENT_INFO_REFERENCE_COUNT:
        os << "UR_EVENT_INFO_REFERENCE_COUNT";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeTaggedTyped_ur_event_info_t(std::ostream &os,
                                                 const void *ptr,
                                                 enum ur_event_info_t value,
                                                 size_t size) {
    if (ptr == NULL) {
        serializePtr(os, ptr);
        return;
    }

    switch (value) {

    case UR_EVENT_INFO_COMMAND_QUEUE: {
        const ur_queue_handle_t *tptr = (const ur_queue_handle_t *)ptr;
        if (sizeof(ur_queue_handle_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_queue_handle_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializePtr(os, *tptr);

        os << ")";
    } break;

    case UR_EVENT_INFO_CONTEXT: {
        const ur_context_handle_t *tptr = (const ur_context_handle_t *)ptr;
        if (sizeof(ur_context_handle_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_context_handle_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        ur_params::serializePtr(os, *tptr);

        os << ")";
    } break;

    case UR_EVENT_INFO_COMMAND_TYPE: {
        const ur_command_t *tptr = (const ur_command_t *)ptr;
        if (sizeof(ur_command_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_command_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_EVENT_INFO_COMMAND_EXECUTION_STATUS: {
        const ur_event_status_t *tptr = (const ur_event_status_t *)ptr;
        if (sizeof(ur_event_status_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(ur_event_status_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_EVENT_INFO_REFERENCE_COUNT: {
        const uint32_t *tptr = (const uint32_t *)ptr;
        if (sizeof(uint32_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint32_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;
    default:
        os << "unknown enumerator";
        break;
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_profiling_info_t value) {
    switch (value) {

    case UR_PROFILING_INFO_COMMAND_QUEUED:
        os << "UR_PROFILING_INFO_COMMAND_QUEUED";
        break;

    case UR_PROFILING_INFO_COMMAND_SUBMIT:
        os << "UR_PROFILING_INFO_COMMAND_SUBMIT";
        break;

    case UR_PROFILING_INFO_COMMAND_START:
        os << "UR_PROFILING_INFO_COMMAND_START";
        break;

    case UR_PROFILING_INFO_COMMAND_END:
        os << "UR_PROFILING_INFO_COMMAND_END";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void
serializeTaggedTyped_ur_profiling_info_t(std::ostream &os, const void *ptr,
                                         enum ur_profiling_info_t value,
                                         size_t size) {
    if (ptr == NULL) {
        serializePtr(os, ptr);
        return;
    }

    switch (value) {

    case UR_PROFILING_INFO_COMMAND_QUEUED: {
        const uint64_t *tptr = (const uint64_t *)ptr;
        if (sizeof(uint64_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint64_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_PROFILING_INFO_COMMAND_SUBMIT: {
        const uint64_t *tptr = (const uint64_t *)ptr;
        if (sizeof(uint64_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint64_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_PROFILING_INFO_COMMAND_START: {
        const uint64_t *tptr = (const uint64_t *)ptr;
        if (sizeof(uint64_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint64_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;

    case UR_PROFILING_INFO_COMMAND_END: {
        const uint64_t *tptr = (const uint64_t *)ptr;
        if (sizeof(uint64_t) > size) {
            os << "invalid size (is: " << size
               << ", expected: >=" << sizeof(uint64_t) << ")";
            return;
        }
        os << (void *)(tptr) << " (";

        os << *tptr;

        os << ")";
    } break;
    default:
        os << "unknown enumerator";
        break;
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_execution_info_t value) {
    switch (value) {

    case UR_EXECUTION_INFO_EXECUTION_INFO_COMPLETE:
        os << "UR_EXECUTION_INFO_EXECUTION_INFO_COMPLETE";
        break;

    case UR_EXECUTION_INFO_EXECUTION_INFO_RUNNING:
        os << "UR_EXECUTION_INFO_EXECUTION_INFO_RUNNING";
        break;

    case UR_EXECUTION_INFO_EXECUTION_INFO_SUBMITTED:
        os << "UR_EXECUTION_INFO_EXECUTION_INFO_SUBMITTED";
        break;

    case UR_EXECUTION_INFO_EXECUTION_INFO_QUEUED:
        os << "UR_EXECUTION_INFO_EXECUTION_INFO_QUEUED";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
inline std::ostream &operator<<(std::ostream &os, enum ur_function_t value) {
    switch (value) {

    case UR_FUNCTION_CONTEXT_CREATE:
        os << "UR_FUNCTION_CONTEXT_CREATE";
        break;

    case UR_FUNCTION_CONTEXT_RETAIN:
        os << "UR_FUNCTION_CONTEXT_RETAIN";
        break;

    case UR_FUNCTION_CONTEXT_RELEASE:
        os << "UR_FUNCTION_CONTEXT_RELEASE";
        break;

    case UR_FUNCTION_CONTEXT_GET_INFO:
        os << "UR_FUNCTION_CONTEXT_GET_INFO";
        break;

    case UR_FUNCTION_CONTEXT_GET_NATIVE_HANDLE:
        os << "UR_FUNCTION_CONTEXT_GET_NATIVE_HANDLE";
        break;

    case UR_FUNCTION_CONTEXT_CREATE_WITH_NATIVE_HANDLE:
        os << "UR_FUNCTION_CONTEXT_CREATE_WITH_NATIVE_HANDLE";
        break;

    case UR_FUNCTION_CONTEXT_SET_EXTENDED_DELETER:
        os << "UR_FUNCTION_CONTEXT_SET_EXTENDED_DELETER";
        break;

    case UR_FUNCTION_DEVICE_GET:
        os << "UR_FUNCTION_DEVICE_GET";
        break;

    case UR_FUNCTION_DEVICE_GET_INFO:
        os << "UR_FUNCTION_DEVICE_GET_INFO";
        break;

    case UR_FUNCTION_DEVICE_RETAIN:
        os << "UR_FUNCTION_DEVICE_RETAIN";
        break;

    case UR_FUNCTION_DEVICE_RELEASE:
        os << "UR_FUNCTION_DEVICE_RELEASE";
        break;

    case UR_FUNCTION_DEVICE_PARTITION:
        os << "UR_FUNCTION_DEVICE_PARTITION";
        break;

    case UR_FUNCTION_DEVICE_SELECT_BINARY:
        os << "UR_FUNCTION_DEVICE_SELECT_BINARY";
        break;

    case UR_FUNCTION_DEVICE_GET_NATIVE_HANDLE:
        os << "UR_FUNCTION_DEVICE_GET_NATIVE_HANDLE";
        break;

    case UR_FUNCTION_DEVICE_CREATE_WITH_NATIVE_HANDLE:
        os << "UR_FUNCTION_DEVICE_CREATE_WITH_NATIVE_HANDLE";
        break;

    case UR_FUNCTION_DEVICE_GET_GLOBAL_TIMESTAMPS:
        os << "UR_FUNCTION_DEVICE_GET_GLOBAL_TIMESTAMPS";
        break;

    case UR_FUNCTION_ENQUEUE_KERNEL_LAUNCH:
        os << "UR_FUNCTION_ENQUEUE_KERNEL_LAUNCH";
        break;

    case UR_FUNCTION_ENQUEUE_EVENTS_WAIT:
        os << "UR_FUNCTION_ENQUEUE_EVENTS_WAIT";
        break;

    case UR_FUNCTION_ENQUEUE_EVENTS_WAIT_WITH_BARRIER:
        os << "UR_FUNCTION_ENQUEUE_EVENTS_WAIT_WITH_BARRIER";
        break;

    case UR_FUNCTION_ENQUEUE_MEM_BUFFER_READ:
        os << "UR_FUNCTION_ENQUEUE_MEM_BUFFER_READ";
        break;

    case UR_FUNCTION_ENQUEUE_MEM_BUFFER_WRITE:
        os << "UR_FUNCTION_ENQUEUE_MEM_BUFFER_WRITE";
        break;

    case UR_FUNCTION_ENQUEUE_MEM_BUFFER_READ_RECT:
        os << "UR_FUNCTION_ENQUEUE_MEM_BUFFER_READ_RECT";
        break;

    case UR_FUNCTION_ENQUEUE_MEM_BUFFER_WRITE_RECT:
        os << "UR_FUNCTION_ENQUEUE_MEM_BUFFER_WRITE_RECT";
        break;

    case UR_FUNCTION_ENQUEUE_MEM_BUFFER_COPY:
        os << "UR_FUNCTION_ENQUEUE_MEM_BUFFER_COPY";
        break;

    case UR_FUNCTION_ENQUEUE_MEM_BUFFER_COPY_RECT:
        os << "UR_FUNCTION_ENQUEUE_MEM_BUFFER_COPY_RECT";
        break;

    case UR_FUNCTION_ENQUEUE_MEM_BUFFER_FILL:
        os << "UR_FUNCTION_ENQUEUE_MEM_BUFFER_FILL";
        break;

    case UR_FUNCTION_ENQUEUE_MEM_IMAGE_READ:
        os << "UR_FUNCTION_ENQUEUE_MEM_IMAGE_READ";
        break;

    case UR_FUNCTION_ENQUEUE_MEM_IMAGE_WRITE:
        os << "UR_FUNCTION_ENQUEUE_MEM_IMAGE_WRITE";
        break;

    case UR_FUNCTION_ENQUEUE_MEM_IMAGE_COPY:
        os << "UR_FUNCTION_ENQUEUE_MEM_IMAGE_COPY";
        break;

    case UR_FUNCTION_ENQUEUE_MEM_BUFFER_MAP:
        os << "UR_FUNCTION_ENQUEUE_MEM_BUFFER_MAP";
        break;

    case UR_FUNCTION_ENQUEUE_MEM_UNMAP:
        os << "UR_FUNCTION_ENQUEUE_MEM_UNMAP";
        break;

    case UR_FUNCTION_ENQUEUE_USM_FILL:
        os << "UR_FUNCTION_ENQUEUE_USM_FILL";
        break;

    case UR_FUNCTION_ENQUEUE_USM_MEMCPY:
        os << "UR_FUNCTION_ENQUEUE_USM_MEMCPY";
        break;

    case UR_FUNCTION_ENQUEUE_USM_PREFETCH:
        os << "UR_FUNCTION_ENQUEUE_USM_PREFETCH";
        break;

    case UR_FUNCTION_ENQUEUE_USM_ADVISE:
        os << "UR_FUNCTION_ENQUEUE_USM_ADVISE";
        break;

    case UR_FUNCTION_ENQUEUE_USM_FILL2_D:
        os << "UR_FUNCTION_ENQUEUE_USM_FILL2_D";
        break;

    case UR_FUNCTION_ENQUEUE_USM_MEMCPY2_D:
        os << "UR_FUNCTION_ENQUEUE_USM_MEMCPY2_D";
        break;

    case UR_FUNCTION_ENQUEUE_DEVICE_GLOBAL_VARIABLE_WRITE:
        os << "UR_FUNCTION_ENQUEUE_DEVICE_GLOBAL_VARIABLE_WRITE";
        break;

    case UR_FUNCTION_ENQUEUE_DEVICE_GLOBAL_VARIABLE_READ:
        os << "UR_FUNCTION_ENQUEUE_DEVICE_GLOBAL_VARIABLE_READ";
        break;

    case UR_FUNCTION_EVENT_GET_INFO:
        os << "UR_FUNCTION_EVENT_GET_INFO";
        break;

    case UR_FUNCTION_EVENT_GET_PROFILING_INFO:
        os << "UR_FUNCTION_EVENT_GET_PROFILING_INFO";
        break;

    case UR_FUNCTION_EVENT_WAIT:
        os << "UR_FUNCTION_EVENT_WAIT";
        break;

    case UR_FUNCTION_EVENT_RETAIN:
        os << "UR_FUNCTION_EVENT_RETAIN";
        break;

    case UR_FUNCTION_EVENT_RELEASE:
        os << "UR_FUNCTION_EVENT_RELEASE";
        break;

    case UR_FUNCTION_EVENT_GET_NATIVE_HANDLE:
        os << "UR_FUNCTION_EVENT_GET_NATIVE_HANDLE";
        break;

    case UR_FUNCTION_EVENT_CREATE_WITH_NATIVE_HANDLE:
        os << "UR_FUNCTION_EVENT_CREATE_WITH_NATIVE_HANDLE";
        break;

    case UR_FUNCTION_EVENT_SET_CALLBACK:
        os << "UR_FUNCTION_EVENT_SET_CALLBACK";
        break;

    case UR_FUNCTION_KERNEL_CREATE:
        os << "UR_FUNCTION_KERNEL_CREATE";
        break;

    case UR_FUNCTION_KERNEL_SET_ARG_VALUE:
        os << "UR_FUNCTION_KERNEL_SET_ARG_VALUE";
        break;

    case UR_FUNCTION_KERNEL_SET_ARG_LOCAL:
        os << "UR_FUNCTION_KERNEL_SET_ARG_LOCAL";
        break;

    case UR_FUNCTION_KERNEL_GET_INFO:
        os << "UR_FUNCTION_KERNEL_GET_INFO";
        break;

    case UR_FUNCTION_KERNEL_GET_GROUP_INFO:
        os << "UR_FUNCTION_KERNEL_GET_GROUP_INFO";
        break;

    case UR_FUNCTION_KERNEL_GET_SUB_GROUP_INFO:
        os << "UR_FUNCTION_KERNEL_GET_SUB_GROUP_INFO";
        break;

    case UR_FUNCTION_KERNEL_RETAIN:
        os << "UR_FUNCTION_KERNEL_RETAIN";
        break;

    case UR_FUNCTION_KERNEL_RELEASE:
        os << "UR_FUNCTION_KERNEL_RELEASE";
        break;

    case UR_FUNCTION_KERNEL_SET_ARG_POINTER:
        os << "UR_FUNCTION_KERNEL_SET_ARG_POINTER";
        break;

    case UR_FUNCTION_KERNEL_SET_EXEC_INFO:
        os << "UR_FUNCTION_KERNEL_SET_EXEC_INFO";
        break;

    case UR_FUNCTION_KERNEL_SET_ARG_SAMPLER:
        os << "UR_FUNCTION_KERNEL_SET_ARG_SAMPLER";
        break;

    case UR_FUNCTION_KERNEL_SET_ARG_MEM_OBJ:
        os << "UR_FUNCTION_KERNEL_SET_ARG_MEM_OBJ";
        break;

    case UR_FUNCTION_KERNEL_SET_SPECIALIZATION_CONSTANTS:
        os << "UR_FUNCTION_KERNEL_SET_SPECIALIZATION_CONSTANTS";
        break;

    case UR_FUNCTION_KERNEL_GET_NATIVE_HANDLE:
        os << "UR_FUNCTION_KERNEL_GET_NATIVE_HANDLE";
        break;

    case UR_FUNCTION_KERNEL_CREATE_WITH_NATIVE_HANDLE:
        os << "UR_FUNCTION_KERNEL_CREATE_WITH_NATIVE_HANDLE";
        break;

    case UR_FUNCTION_MEM_IMAGE_CREATE:
        os << "UR_FUNCTION_MEM_IMAGE_CREATE";
        break;

    case UR_FUNCTION_MEM_BUFFER_CREATE:
        os << "UR_FUNCTION_MEM_BUFFER_CREATE";
        break;

    case UR_FUNCTION_MEM_RETAIN:
        os << "UR_FUNCTION_MEM_RETAIN";
        break;

    case UR_FUNCTION_MEM_RELEASE:
        os << "UR_FUNCTION_MEM_RELEASE";
        break;

    case UR_FUNCTION_MEM_BUFFER_PARTITION:
        os << "UR_FUNCTION_MEM_BUFFER_PARTITION";
        break;

    case UR_FUNCTION_MEM_GET_NATIVE_HANDLE:
        os << "UR_FUNCTION_MEM_GET_NATIVE_HANDLE";
        break;

    case UR_FUNCTION_MEM_GET_INFO:
        os << "UR_FUNCTION_MEM_GET_INFO";
        break;

    case UR_FUNCTION_MEM_IMAGE_GET_INFO:
        os << "UR_FUNCTION_MEM_IMAGE_GET_INFO";
        break;

    case UR_FUNCTION_PLATFORM_GET:
        os << "UR_FUNCTION_PLATFORM_GET";
        break;

    case UR_FUNCTION_PLATFORM_GET_INFO:
        os << "UR_FUNCTION_PLATFORM_GET_INFO";
        break;

    case UR_FUNCTION_PLATFORM_GET_API_VERSION:
        os << "UR_FUNCTION_PLATFORM_GET_API_VERSION";
        break;

    case UR_FUNCTION_PLATFORM_GET_NATIVE_HANDLE:
        os << "UR_FUNCTION_PLATFORM_GET_NATIVE_HANDLE";
        break;

    case UR_FUNCTION_PLATFORM_CREATE_WITH_NATIVE_HANDLE:
        os << "UR_FUNCTION_PLATFORM_CREATE_WITH_NATIVE_HANDLE";
        break;

    case UR_FUNCTION_GET_LAST_RESULT:
        os << "UR_FUNCTION_GET_LAST_RESULT";
        break;

    case UR_FUNCTION_PROGRAM_CREATE_WITH_IL:
        os << "UR_FUNCTION_PROGRAM_CREATE_WITH_IL";
        break;

    case UR_FUNCTION_PROGRAM_CREATE_WITH_BINARY:
        os << "UR_FUNCTION_PROGRAM_CREATE_WITH_BINARY";
        break;

    case UR_FUNCTION_PROGRAM_BUILD:
        os << "UR_FUNCTION_PROGRAM_BUILD";
        break;

    case UR_FUNCTION_PROGRAM_COMPILE:
        os << "UR_FUNCTION_PROGRAM_COMPILE";
        break;

    case UR_FUNCTION_PROGRAM_LINK:
        os << "UR_FUNCTION_PROGRAM_LINK";
        break;

    case UR_FUNCTION_PROGRAM_RETAIN:
        os << "UR_FUNCTION_PROGRAM_RETAIN";
        break;

    case UR_FUNCTION_PROGRAM_RELEASE:
        os << "UR_FUNCTION_PROGRAM_RELEASE";
        break;

    case UR_FUNCTION_PROGRAM_GET_FUNCTION_POINTER:
        os << "UR_FUNCTION_PROGRAM_GET_FUNCTION_POINTER";
        break;

    case UR_FUNCTION_PROGRAM_GET_INFO:
        os << "UR_FUNCTION_PROGRAM_GET_INFO";
        break;

    case UR_FUNCTION_PROGRAM_GET_BUILD_INFO:
        os << "UR_FUNCTION_PROGRAM_GET_BUILD_INFO";
        break;

    case UR_FUNCTION_PROGRAM_SET_SPECIALIZATION_CONSTANTS:
        os << "UR_FUNCTION_PROGRAM_SET_SPECIALIZATION_CONSTANTS";
        break;

    case UR_FUNCTION_PROGRAM_GET_NATIVE_HANDLE:
        os << "UR_FUNCTION_PROGRAM_GET_NATIVE_HANDLE";
        break;

    case UR_FUNCTION_PROGRAM_CREATE_WITH_NATIVE_HANDLE:
        os << "UR_FUNCTION_PROGRAM_CREATE_WITH_NATIVE_HANDLE";
        break;

    case UR_FUNCTION_QUEUE_GET_INFO:
        os << "UR_FUNCTION_QUEUE_GET_INFO";
        break;

    case UR_FUNCTION_QUEUE_CREATE:
        os << "UR_FUNCTION_QUEUE_CREATE";
        break;

    case UR_FUNCTION_QUEUE_RETAIN:
        os << "UR_FUNCTION_QUEUE_RETAIN";
        break;

    case UR_FUNCTION_QUEUE_RELEASE:
        os << "UR_FUNCTION_QUEUE_RELEASE";
        break;

    case UR_FUNCTION_QUEUE_GET_NATIVE_HANDLE:
        os << "UR_FUNCTION_QUEUE_GET_NATIVE_HANDLE";
        break;

    case UR_FUNCTION_QUEUE_CREATE_WITH_NATIVE_HANDLE:
        os << "UR_FUNCTION_QUEUE_CREATE_WITH_NATIVE_HANDLE";
        break;

    case UR_FUNCTION_QUEUE_FINISH:
        os << "UR_FUNCTION_QUEUE_FINISH";
        break;

    case UR_FUNCTION_QUEUE_FLUSH:
        os << "UR_FUNCTION_QUEUE_FLUSH";
        break;

    case UR_FUNCTION_INIT:
        os << "UR_FUNCTION_INIT";
        break;

    case UR_FUNCTION_TEAR_DOWN:
        os << "UR_FUNCTION_TEAR_DOWN";
        break;

    case UR_FUNCTION_SAMPLER_CREATE:
        os << "UR_FUNCTION_SAMPLER_CREATE";
        break;

    case UR_FUNCTION_SAMPLER_RETAIN:
        os << "UR_FUNCTION_SAMPLER_RETAIN";
        break;

    case UR_FUNCTION_SAMPLER_RELEASE:
        os << "UR_FUNCTION_SAMPLER_RELEASE";
        break;

    case UR_FUNCTION_SAMPLER_GET_INFO:
        os << "UR_FUNCTION_SAMPLER_GET_INFO";
        break;

    case UR_FUNCTION_SAMPLER_GET_NATIVE_HANDLE:
        os << "UR_FUNCTION_SAMPLER_GET_NATIVE_HANDLE";
        break;

    case UR_FUNCTION_SAMPLER_CREATE_WITH_NATIVE_HANDLE:
        os << "UR_FUNCTION_SAMPLER_CREATE_WITH_NATIVE_HANDLE";
        break;

    case UR_FUNCTION_USM_HOST_ALLOC:
        os << "UR_FUNCTION_USM_HOST_ALLOC";
        break;

    case UR_FUNCTION_USM_DEVICE_ALLOC:
        os << "UR_FUNCTION_USM_DEVICE_ALLOC";
        break;

    case UR_FUNCTION_USM_SHARED_ALLOC:
        os << "UR_FUNCTION_USM_SHARED_ALLOC";
        break;

    case UR_FUNCTION_USM_FREE:
        os << "UR_FUNCTION_USM_FREE";
        break;

    case UR_FUNCTION_USM_GET_MEM_ALLOC_INFO:
        os << "UR_FUNCTION_USM_GET_MEM_ALLOC_INFO";
        break;

    case UR_FUNCTION_USM_POOL_CREATE:
        os << "UR_FUNCTION_USM_POOL_CREATE";
        break;

    case UR_FUNCTION_USM_POOL_DESTROY:
        os << "UR_FUNCTION_USM_POOL_DESTROY";
        break;

    case UR_FUNCTION_PLATFORM_GET_BACKEND_OPTION:
        os << "UR_FUNCTION_PLATFORM_GET_BACKEND_OPTION";
        break;

    case UR_FUNCTION_MEM_BUFFER_CREATE_WITH_NATIVE_HANDLE:
        os << "UR_FUNCTION_MEM_BUFFER_CREATE_WITH_NATIVE_HANDLE";
        break;

    case UR_FUNCTION_MEM_IMAGE_CREATE_WITH_NATIVE_HANDLE:
        os << "UR_FUNCTION_MEM_IMAGE_CREATE_WITH_NATIVE_HANDLE";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
inline std::ostream &operator<<(std::ostream &os, enum ur_map_flag_t value) {
    switch (value) {

    case UR_MAP_FLAG_READ:
        os << "UR_MAP_FLAG_READ";
        break;

    case UR_MAP_FLAG_WRITE:
        os << "UR_MAP_FLAG_WRITE";
        break;

    case UR_MAP_FLAG_WRITE_INVALIDATE_REGION:
        os << "UR_MAP_FLAG_WRITE_INVALIDATE_REGION";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void serializeFlag_ur_map_flags_t(std::ostream &os,
                                         ur_map_flags_t flag) {
    uint32_t val = flag;
    bool first = true;

    if ((val & UR_MAP_FLAG_READ) == (uint32_t)UR_MAP_FLAG_READ) {
        val ^= (uint32_t)UR_MAP_FLAG_READ;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_MAP_FLAG_READ;
    }

    if ((val & UR_MAP_FLAG_WRITE) == (uint32_t)UR_MAP_FLAG_WRITE) {
        val ^= (uint32_t)UR_MAP_FLAG_WRITE;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_MAP_FLAG_WRITE;
    }

    if ((val & UR_MAP_FLAG_WRITE_INVALIDATE_REGION) ==
        (uint32_t)UR_MAP_FLAG_WRITE_INVALIDATE_REGION) {
        val ^= (uint32_t)UR_MAP_FLAG_WRITE_INVALIDATE_REGION;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_MAP_FLAG_WRITE_INVALIDATE_REGION;
    }
    if (val != 0) {
        std::bitset<32> bits(val);
        if (!first) {
            os << " | ";
        }
        os << "unknown bit flags " << bits;
    } else if (first) {
        os << "0";
    }
}
} // namespace ur_params
inline std::ostream &operator<<(std::ostream &os,
                                enum ur_usm_migration_flag_t value) {
    switch (value) {

    case UR_USM_MIGRATION_FLAG_DEFAULT:
        os << "UR_USM_MIGRATION_FLAG_DEFAULT";
        break;
    default:
        os << "unknown enumerator";
        break;
    }
    return os;
}
namespace ur_params {
inline void
serializeFlag_ur_usm_migration_flags_t(std::ostream &os,
                                       ur_usm_migration_flags_t flag) {
    uint32_t val = flag;
    bool first = true;

    if ((val & UR_USM_MIGRATION_FLAG_DEFAULT) ==
        (uint32_t)UR_USM_MIGRATION_FLAG_DEFAULT) {
        val ^= (uint32_t)UR_USM_MIGRATION_FLAG_DEFAULT;
        if (!first) {
            os << " | ";
        } else {
            first = false;
        }
        os << UR_USM_MIGRATION_FLAG_DEFAULT;
    }
    if (val != 0) {
        std::bitset<32> bits(val);
        if (!first) {
            os << " | ";
        }
        os << "unknown bit flags " << bits;
    } else if (first) {
        os << "0";
    }
}
} // namespace ur_params

inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_init_params_t *params) {

    os << ".device_flags = ";

    ur_params::serializeFlag_ur_device_init_flags_t(os,
                                                    *(params->pdevice_flags));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_get_last_result_params_t *params) {

    os << ".hPlatform = ";

    ur_params::serializePtr(os, *(params->phPlatform));

    os << ", ";
    os << ".ppMessage = ";

    ur_params::serializePtr(os, *(params->pppMessage));

    return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_tear_down_params_t *params) {

    os << ".pParams = ";

    ur_params::serializePtr(os, *(params->ppParams));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_context_create_params_t *params) {

    os << ".DeviceCount = ";

    os << *(params->pDeviceCount);

    os << ", ";
    os << ".phDevices = [";
    for (size_t i = 0;
         *(params->pphDevices) != NULL && i < *params->pDeviceCount; ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphDevices))[i]);
    }
    os << "]";

    os << ", ";
    os << ".pProperties = ";

    ur_params::serializePtr(os, *(params->ppProperties));

    os << ", ";
    os << ".phContext = ";

    ur_params::serializePtr(os, *(params->pphContext));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_context_retain_params_t *params) {

    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_context_release_params_t *params) {

    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_context_get_info_params_t *params) {

    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".propName = ";

    os << *(params->ppropName);

    os << ", ";
    os << ".propSize = ";

    os << *(params->ppropSize);

    os << ", ";
    os << ".pPropValue = ";
    ur_params::serializeTaggedTyped_ur_context_info_t(
        os, *(params->ppPropValue), *(params->ppropName), *(params->ppropSize));

    os << ", ";
    os << ".pPropSizeRet = ";

    ur_params::serializePtr(os, *(params->ppPropSizeRet));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_context_get_native_handle_params_t *params) {

    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".phNativeContext = ";

    ur_params::serializePtr(os, *(params->pphNativeContext));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_context_create_with_native_handle_params_t *params) {

    os << ".hNativeContext = ";

    ur_params::serializePtr(os, *(params->phNativeContext));

    os << ", ";
    os << ".numDevices = ";

    os << *(params->pnumDevices);

    os << ", ";
    os << ".phDevices = [";
    for (size_t i = 0;
         *(params->pphDevices) != NULL && i < *params->pnumDevices; ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphDevices))[i]);
    }
    os << "]";

    os << ", ";
    os << ".pProperties = ";

    ur_params::serializePtr(os, *(params->ppProperties));

    os << ", ";
    os << ".phContext = ";

    ur_params::serializePtr(os, *(params->pphContext));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_context_set_extended_deleter_params_t *params) {

    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".pfnDeleter = ";

    os << *(params->ppfnDeleter);

    os << ", ";
    os << ".pUserData = ";

    ur_params::serializePtr(os, *(params->ppUserData));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_enqueue_kernel_launch_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".hKernel = ";

    ur_params::serializePtr(os, *(params->phKernel));

    os << ", ";
    os << ".workDim = ";

    os << *(params->pworkDim);

    os << ", ";
    os << ".pGlobalWorkOffset = ";

    ur_params::serializePtr(os, *(params->ppGlobalWorkOffset));

    os << ", ";
    os << ".pGlobalWorkSize = ";

    ur_params::serializePtr(os, *(params->ppGlobalWorkSize));

    os << ", ";
    os << ".pLocalWorkSize = ";

    ur_params::serializePtr(os, *(params->ppLocalWorkSize));

    os << ", ";
    os << ".numEventsInWaitList = ";

    os << *(params->pnumEventsInWaitList);

    os << ", ";
    os << ".phEventWaitList = [";
    for (size_t i = 0; *(params->pphEventWaitList) != NULL &&
                       i < *params->pnumEventsInWaitList;
         ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphEventWaitList))[i]);
    }
    os << "]";

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_enqueue_events_wait_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".numEventsInWaitList = ";

    os << *(params->pnumEventsInWaitList);

    os << ", ";
    os << ".phEventWaitList = [";
    for (size_t i = 0; *(params->pphEventWaitList) != NULL &&
                       i < *params->pnumEventsInWaitList;
         ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphEventWaitList))[i]);
    }
    os << "]";

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_enqueue_events_wait_with_barrier_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".numEventsInWaitList = ";

    os << *(params->pnumEventsInWaitList);

    os << ", ";
    os << ".phEventWaitList = [";
    for (size_t i = 0; *(params->pphEventWaitList) != NULL &&
                       i < *params->pnumEventsInWaitList;
         ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphEventWaitList))[i]);
    }
    os << "]";

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_enqueue_mem_buffer_read_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".hBuffer = ";

    ur_params::serializePtr(os, *(params->phBuffer));

    os << ", ";
    os << ".blockingRead = ";

    os << *(params->pblockingRead);

    os << ", ";
    os << ".offset = ";

    os << *(params->poffset);

    os << ", ";
    os << ".size = ";

    os << *(params->psize);

    os << ", ";
    os << ".pDst = ";

    ur_params::serializePtr(os, *(params->ppDst));

    os << ", ";
    os << ".numEventsInWaitList = ";

    os << *(params->pnumEventsInWaitList);

    os << ", ";
    os << ".phEventWaitList = [";
    for (size_t i = 0; *(params->pphEventWaitList) != NULL &&
                       i < *params->pnumEventsInWaitList;
         ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphEventWaitList))[i]);
    }
    os << "]";

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_enqueue_mem_buffer_write_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".hBuffer = ";

    ur_params::serializePtr(os, *(params->phBuffer));

    os << ", ";
    os << ".blockingWrite = ";

    os << *(params->pblockingWrite);

    os << ", ";
    os << ".offset = ";

    os << *(params->poffset);

    os << ", ";
    os << ".size = ";

    os << *(params->psize);

    os << ", ";
    os << ".pSrc = ";

    ur_params::serializePtr(os, *(params->ppSrc));

    os << ", ";
    os << ".numEventsInWaitList = ";

    os << *(params->pnumEventsInWaitList);

    os << ", ";
    os << ".phEventWaitList = [";
    for (size_t i = 0; *(params->pphEventWaitList) != NULL &&
                       i < *params->pnumEventsInWaitList;
         ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphEventWaitList))[i]);
    }
    os << "]";

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_enqueue_mem_buffer_read_rect_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".hBuffer = ";

    ur_params::serializePtr(os, *(params->phBuffer));

    os << ", ";
    os << ".blockingRead = ";

    os << *(params->pblockingRead);

    os << ", ";
    os << ".bufferOrigin = ";

    os << *(params->pbufferOrigin);

    os << ", ";
    os << ".hostOrigin = ";

    os << *(params->phostOrigin);

    os << ", ";
    os << ".region = ";

    os << *(params->pregion);

    os << ", ";
    os << ".bufferRowPitch = ";

    os << *(params->pbufferRowPitch);

    os << ", ";
    os << ".bufferSlicePitch = ";

    os << *(params->pbufferSlicePitch);

    os << ", ";
    os << ".hostRowPitch = ";

    os << *(params->phostRowPitch);

    os << ", ";
    os << ".hostSlicePitch = ";

    os << *(params->phostSlicePitch);

    os << ", ";
    os << ".pDst = ";

    ur_params::serializePtr(os, *(params->ppDst));

    os << ", ";
    os << ".numEventsInWaitList = ";

    os << *(params->pnumEventsInWaitList);

    os << ", ";
    os << ".phEventWaitList = [";
    for (size_t i = 0; *(params->pphEventWaitList) != NULL &&
                       i < *params->pnumEventsInWaitList;
         ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphEventWaitList))[i]);
    }
    os << "]";

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_enqueue_mem_buffer_write_rect_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".hBuffer = ";

    ur_params::serializePtr(os, *(params->phBuffer));

    os << ", ";
    os << ".blockingWrite = ";

    os << *(params->pblockingWrite);

    os << ", ";
    os << ".bufferOrigin = ";

    os << *(params->pbufferOrigin);

    os << ", ";
    os << ".hostOrigin = ";

    os << *(params->phostOrigin);

    os << ", ";
    os << ".region = ";

    os << *(params->pregion);

    os << ", ";
    os << ".bufferRowPitch = ";

    os << *(params->pbufferRowPitch);

    os << ", ";
    os << ".bufferSlicePitch = ";

    os << *(params->pbufferSlicePitch);

    os << ", ";
    os << ".hostRowPitch = ";

    os << *(params->phostRowPitch);

    os << ", ";
    os << ".hostSlicePitch = ";

    os << *(params->phostSlicePitch);

    os << ", ";
    os << ".pSrc = ";

    ur_params::serializePtr(os, *(params->ppSrc));

    os << ", ";
    os << ".numEventsInWaitList = ";

    os << *(params->pnumEventsInWaitList);

    os << ", ";
    os << ".phEventWaitList = [";
    for (size_t i = 0; *(params->pphEventWaitList) != NULL &&
                       i < *params->pnumEventsInWaitList;
         ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphEventWaitList))[i]);
    }
    os << "]";

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_enqueue_mem_buffer_copy_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".hBufferSrc = ";

    ur_params::serializePtr(os, *(params->phBufferSrc));

    os << ", ";
    os << ".hBufferDst = ";

    ur_params::serializePtr(os, *(params->phBufferDst));

    os << ", ";
    os << ".srcOffset = ";

    os << *(params->psrcOffset);

    os << ", ";
    os << ".dstOffset = ";

    os << *(params->pdstOffset);

    os << ", ";
    os << ".size = ";

    os << *(params->psize);

    os << ", ";
    os << ".numEventsInWaitList = ";

    os << *(params->pnumEventsInWaitList);

    os << ", ";
    os << ".phEventWaitList = [";
    for (size_t i = 0; *(params->pphEventWaitList) != NULL &&
                       i < *params->pnumEventsInWaitList;
         ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphEventWaitList))[i]);
    }
    os << "]";

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_enqueue_mem_buffer_copy_rect_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".hBufferSrc = ";

    ur_params::serializePtr(os, *(params->phBufferSrc));

    os << ", ";
    os << ".hBufferDst = ";

    ur_params::serializePtr(os, *(params->phBufferDst));

    os << ", ";
    os << ".srcOrigin = ";

    os << *(params->psrcOrigin);

    os << ", ";
    os << ".dstOrigin = ";

    os << *(params->pdstOrigin);

    os << ", ";
    os << ".region = ";

    os << *(params->pregion);

    os << ", ";
    os << ".srcRowPitch = ";

    os << *(params->psrcRowPitch);

    os << ", ";
    os << ".srcSlicePitch = ";

    os << *(params->psrcSlicePitch);

    os << ", ";
    os << ".dstRowPitch = ";

    os << *(params->pdstRowPitch);

    os << ", ";
    os << ".dstSlicePitch = ";

    os << *(params->pdstSlicePitch);

    os << ", ";
    os << ".numEventsInWaitList = ";

    os << *(params->pnumEventsInWaitList);

    os << ", ";
    os << ".phEventWaitList = [";
    for (size_t i = 0; *(params->pphEventWaitList) != NULL &&
                       i < *params->pnumEventsInWaitList;
         ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphEventWaitList))[i]);
    }
    os << "]";

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_enqueue_mem_buffer_fill_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".hBuffer = ";

    ur_params::serializePtr(os, *(params->phBuffer));

    os << ", ";
    os << ".pPattern = ";

    ur_params::serializePtr(os, *(params->ppPattern));

    os << ", ";
    os << ".patternSize = ";

    os << *(params->ppatternSize);

    os << ", ";
    os << ".offset = ";

    os << *(params->poffset);

    os << ", ";
    os << ".size = ";

    os << *(params->psize);

    os << ", ";
    os << ".numEventsInWaitList = ";

    os << *(params->pnumEventsInWaitList);

    os << ", ";
    os << ".phEventWaitList = [";
    for (size_t i = 0; *(params->pphEventWaitList) != NULL &&
                       i < *params->pnumEventsInWaitList;
         ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphEventWaitList))[i]);
    }
    os << "]";

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_enqueue_mem_image_read_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".hImage = ";

    ur_params::serializePtr(os, *(params->phImage));

    os << ", ";
    os << ".blockingRead = ";

    os << *(params->pblockingRead);

    os << ", ";
    os << ".origin = ";

    os << *(params->porigin);

    os << ", ";
    os << ".region = ";

    os << *(params->pregion);

    os << ", ";
    os << ".rowPitch = ";

    os << *(params->prowPitch);

    os << ", ";
    os << ".slicePitch = ";

    os << *(params->pslicePitch);

    os << ", ";
    os << ".pDst = ";

    ur_params::serializePtr(os, *(params->ppDst));

    os << ", ";
    os << ".numEventsInWaitList = ";

    os << *(params->pnumEventsInWaitList);

    os << ", ";
    os << ".phEventWaitList = [";
    for (size_t i = 0; *(params->pphEventWaitList) != NULL &&
                       i < *params->pnumEventsInWaitList;
         ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphEventWaitList))[i]);
    }
    os << "]";

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_enqueue_mem_image_write_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".hImage = ";

    ur_params::serializePtr(os, *(params->phImage));

    os << ", ";
    os << ".blockingWrite = ";

    os << *(params->pblockingWrite);

    os << ", ";
    os << ".origin = ";

    os << *(params->porigin);

    os << ", ";
    os << ".region = ";

    os << *(params->pregion);

    os << ", ";
    os << ".rowPitch = ";

    os << *(params->prowPitch);

    os << ", ";
    os << ".slicePitch = ";

    os << *(params->pslicePitch);

    os << ", ";
    os << ".pSrc = ";

    ur_params::serializePtr(os, *(params->ppSrc));

    os << ", ";
    os << ".numEventsInWaitList = ";

    os << *(params->pnumEventsInWaitList);

    os << ", ";
    os << ".phEventWaitList = [";
    for (size_t i = 0; *(params->pphEventWaitList) != NULL &&
                       i < *params->pnumEventsInWaitList;
         ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphEventWaitList))[i]);
    }
    os << "]";

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_enqueue_mem_image_copy_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".hImageSrc = ";

    ur_params::serializePtr(os, *(params->phImageSrc));

    os << ", ";
    os << ".hImageDst = ";

    ur_params::serializePtr(os, *(params->phImageDst));

    os << ", ";
    os << ".srcOrigin = ";

    os << *(params->psrcOrigin);

    os << ", ";
    os << ".dstOrigin = ";

    os << *(params->pdstOrigin);

    os << ", ";
    os << ".region = ";

    os << *(params->pregion);

    os << ", ";
    os << ".numEventsInWaitList = ";

    os << *(params->pnumEventsInWaitList);

    os << ", ";
    os << ".phEventWaitList = [";
    for (size_t i = 0; *(params->pphEventWaitList) != NULL &&
                       i < *params->pnumEventsInWaitList;
         ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphEventWaitList))[i]);
    }
    os << "]";

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_enqueue_mem_buffer_map_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".hBuffer = ";

    ur_params::serializePtr(os, *(params->phBuffer));

    os << ", ";
    os << ".blockingMap = ";

    os << *(params->pblockingMap);

    os << ", ";
    os << ".mapFlags = ";

    ur_params::serializeFlag_ur_map_flags_t(os, *(params->pmapFlags));

    os << ", ";
    os << ".offset = ";

    os << *(params->poffset);

    os << ", ";
    os << ".size = ";

    os << *(params->psize);

    os << ", ";
    os << ".numEventsInWaitList = ";

    os << *(params->pnumEventsInWaitList);

    os << ", ";
    os << ".phEventWaitList = [";
    for (size_t i = 0; *(params->pphEventWaitList) != NULL &&
                       i < *params->pnumEventsInWaitList;
         ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphEventWaitList))[i]);
    }
    os << "]";

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    os << ", ";
    os << ".ppRetMap = ";

    ur_params::serializePtr(os, *(params->pppRetMap));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_enqueue_mem_unmap_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".hMem = ";

    ur_params::serializePtr(os, *(params->phMem));

    os << ", ";
    os << ".pMappedPtr = ";

    ur_params::serializePtr(os, *(params->ppMappedPtr));

    os << ", ";
    os << ".numEventsInWaitList = ";

    os << *(params->pnumEventsInWaitList);

    os << ", ";
    os << ".phEventWaitList = [";
    for (size_t i = 0; *(params->pphEventWaitList) != NULL &&
                       i < *params->pnumEventsInWaitList;
         ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphEventWaitList))[i]);
    }
    os << "]";

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_enqueue_usm_fill_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".ptr = ";

    ur_params::serializePtr(os, *(params->pptr));

    os << ", ";
    os << ".patternSize = ";

    os << *(params->ppatternSize);

    os << ", ";
    os << ".pPattern = ";

    ur_params::serializePtr(os, *(params->ppPattern));

    os << ", ";
    os << ".size = ";

    os << *(params->psize);

    os << ", ";
    os << ".numEventsInWaitList = ";

    os << *(params->pnumEventsInWaitList);

    os << ", ";
    os << ".phEventWaitList = [";
    for (size_t i = 0; *(params->pphEventWaitList) != NULL &&
                       i < *params->pnumEventsInWaitList;
         ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphEventWaitList))[i]);
    }
    os << "]";

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_enqueue_usm_memcpy_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".blocking = ";

    os << *(params->pblocking);

    os << ", ";
    os << ".pDst = ";

    ur_params::serializePtr(os, *(params->ppDst));

    os << ", ";
    os << ".pSrc = ";

    ur_params::serializePtr(os, *(params->ppSrc));

    os << ", ";
    os << ".size = ";

    os << *(params->psize);

    os << ", ";
    os << ".numEventsInWaitList = ";

    os << *(params->pnumEventsInWaitList);

    os << ", ";
    os << ".phEventWaitList = [";
    for (size_t i = 0; *(params->pphEventWaitList) != NULL &&
                       i < *params->pnumEventsInWaitList;
         ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphEventWaitList))[i]);
    }
    os << "]";

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_enqueue_usm_prefetch_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".pMem = ";

    ur_params::serializePtr(os, *(params->ppMem));

    os << ", ";
    os << ".size = ";

    os << *(params->psize);

    os << ", ";
    os << ".flags = ";

    ur_params::serializeFlag_ur_usm_migration_flags_t(os, *(params->pflags));

    os << ", ";
    os << ".numEventsInWaitList = ";

    os << *(params->pnumEventsInWaitList);

    os << ", ";
    os << ".phEventWaitList = [";
    for (size_t i = 0; *(params->pphEventWaitList) != NULL &&
                       i < *params->pnumEventsInWaitList;
         ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphEventWaitList))[i]);
    }
    os << "]";

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_enqueue_usm_advise_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".pMem = ";

    ur_params::serializePtr(os, *(params->ppMem));

    os << ", ";
    os << ".size = ";

    os << *(params->psize);

    os << ", ";
    os << ".advice = ";

    ur_params::serializeFlag_ur_usm_advice_flags_t(os, *(params->padvice));

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_enqueue_usm_fill2_d_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".pMem = ";

    ur_params::serializePtr(os, *(params->ppMem));

    os << ", ";
    os << ".pitch = ";

    os << *(params->ppitch);

    os << ", ";
    os << ".patternSize = ";

    os << *(params->ppatternSize);

    os << ", ";
    os << ".pPattern = ";

    ur_params::serializePtr(os, *(params->ppPattern));

    os << ", ";
    os << ".width = ";

    os << *(params->pwidth);

    os << ", ";
    os << ".height = ";

    os << *(params->pheight);

    os << ", ";
    os << ".numEventsInWaitList = ";

    os << *(params->pnumEventsInWaitList);

    os << ", ";
    os << ".phEventWaitList = [";
    for (size_t i = 0; *(params->pphEventWaitList) != NULL &&
                       i < *params->pnumEventsInWaitList;
         ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphEventWaitList))[i]);
    }
    os << "]";

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_enqueue_usm_memcpy2_d_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".blocking = ";

    os << *(params->pblocking);

    os << ", ";
    os << ".pDst = ";

    ur_params::serializePtr(os, *(params->ppDst));

    os << ", ";
    os << ".dstPitch = ";

    os << *(params->pdstPitch);

    os << ", ";
    os << ".pSrc = ";

    ur_params::serializePtr(os, *(params->ppSrc));

    os << ", ";
    os << ".srcPitch = ";

    os << *(params->psrcPitch);

    os << ", ";
    os << ".width = ";

    os << *(params->pwidth);

    os << ", ";
    os << ".height = ";

    os << *(params->pheight);

    os << ", ";
    os << ".numEventsInWaitList = ";

    os << *(params->pnumEventsInWaitList);

    os << ", ";
    os << ".phEventWaitList = [";
    for (size_t i = 0; *(params->pphEventWaitList) != NULL &&
                       i < *params->pnumEventsInWaitList;
         ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphEventWaitList))[i]);
    }
    os << "]";

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    const struct ur_enqueue_device_global_variable_write_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".hProgram = ";

    ur_params::serializePtr(os, *(params->phProgram));

    os << ", ";
    os << ".name = ";

    ur_params::serializePtr(os, *(params->pname));

    os << ", ";
    os << ".blockingWrite = ";

    os << *(params->pblockingWrite);

    os << ", ";
    os << ".count = ";

    os << *(params->pcount);

    os << ", ";
    os << ".offset = ";

    os << *(params->poffset);

    os << ", ";
    os << ".pSrc = ";

    ur_params::serializePtr(os, *(params->ppSrc));

    os << ", ";
    os << ".numEventsInWaitList = ";

    os << *(params->pnumEventsInWaitList);

    os << ", ";
    os << ".phEventWaitList = [";
    for (size_t i = 0; *(params->pphEventWaitList) != NULL &&
                       i < *params->pnumEventsInWaitList;
         ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphEventWaitList))[i]);
    }
    os << "]";

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    const struct ur_enqueue_device_global_variable_read_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".hProgram = ";

    ur_params::serializePtr(os, *(params->phProgram));

    os << ", ";
    os << ".name = ";

    ur_params::serializePtr(os, *(params->pname));

    os << ", ";
    os << ".blockingRead = ";

    os << *(params->pblockingRead);

    os << ", ";
    os << ".count = ";

    os << *(params->pcount);

    os << ", ";
    os << ".offset = ";

    os << *(params->poffset);

    os << ", ";
    os << ".pDst = ";

    ur_params::serializePtr(os, *(params->ppDst));

    os << ", ";
    os << ".numEventsInWaitList = ";

    os << *(params->pnumEventsInWaitList);

    os << ", ";
    os << ".phEventWaitList = [";
    for (size_t i = 0; *(params->pphEventWaitList) != NULL &&
                       i < *params->pnumEventsInWaitList;
         ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphEventWaitList))[i]);
    }
    os << "]";

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_event_get_info_params_t *params) {

    os << ".hEvent = ";

    ur_params::serializePtr(os, *(params->phEvent));

    os << ", ";
    os << ".propName = ";

    os << *(params->ppropName);

    os << ", ";
    os << ".propSize = ";

    os << *(params->ppropSize);

    os << ", ";
    os << ".pPropValue = ";
    ur_params::serializeTaggedTyped_ur_event_info_t(
        os, *(params->ppPropValue), *(params->ppropName), *(params->ppropSize));

    os << ", ";
    os << ".pPropSizeRet = ";

    ur_params::serializePtr(os, *(params->ppPropSizeRet));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_event_get_profiling_info_params_t *params) {

    os << ".hEvent = ";

    ur_params::serializePtr(os, *(params->phEvent));

    os << ", ";
    os << ".propName = ";

    os << *(params->ppropName);

    os << ", ";
    os << ".propSize = ";

    os << *(params->ppropSize);

    os << ", ";
    os << ".pPropValue = ";
    ur_params::serializeTaggedTyped_ur_profiling_info_t(
        os, *(params->ppPropValue), *(params->ppropName), *(params->ppropSize));

    os << ", ";
    os << ".pPropSizeRet = ";

    ur_params::serializePtr(os, *(params->ppPropSizeRet));

    return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_event_wait_params_t *params) {

    os << ".numEvents = ";

    os << *(params->pnumEvents);

    os << ", ";
    os << ".phEventWaitList = [";
    for (size_t i = 0;
         *(params->pphEventWaitList) != NULL && i < *params->pnumEvents; ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphEventWaitList))[i]);
    }
    os << "]";

    return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_event_retain_params_t *params) {

    os << ".hEvent = ";

    ur_params::serializePtr(os, *(params->phEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_event_release_params_t *params) {

    os << ".hEvent = ";

    ur_params::serializePtr(os, *(params->phEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_event_get_native_handle_params_t *params) {

    os << ".hEvent = ";

    ur_params::serializePtr(os, *(params->phEvent));

    os << ", ";
    os << ".phNativeEvent = ";

    ur_params::serializePtr(os, *(params->pphNativeEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_event_create_with_native_handle_params_t *params) {

    os << ".hNativeEvent = ";

    ur_params::serializePtr(os, *(params->phNativeEvent));

    os << ", ";
    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".phEvent = ";

    ur_params::serializePtr(os, *(params->pphEvent));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_event_set_callback_params_t *params) {

    os << ".hEvent = ";

    ur_params::serializePtr(os, *(params->phEvent));

    os << ", ";
    os << ".execStatus = ";

    os << *(params->pexecStatus);

    os << ", ";
    os << ".pfnNotify = ";

    os << *(params->ppfnNotify);

    os << ", ";
    os << ".pUserData = ";

    ur_params::serializePtr(os, *(params->ppUserData));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_kernel_create_params_t *params) {

    os << ".hProgram = ";

    ur_params::serializePtr(os, *(params->phProgram));

    os << ", ";
    os << ".pKernelName = ";

    ur_params::serializePtr(os, *(params->ppKernelName));

    os << ", ";
    os << ".phKernel = ";

    ur_params::serializePtr(os, *(params->pphKernel));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_kernel_get_info_params_t *params) {

    os << ".hKernel = ";

    ur_params::serializePtr(os, *(params->phKernel));

    os << ", ";
    os << ".propName = ";

    os << *(params->ppropName);

    os << ", ";
    os << ".propSize = ";

    os << *(params->ppropSize);

    os << ", ";
    os << ".pPropValue = ";
    ur_params::serializeTaggedTyped_ur_kernel_info_t(
        os, *(params->ppPropValue), *(params->ppropName), *(params->ppropSize));

    os << ", ";
    os << ".pPropSizeRet = ";

    ur_params::serializePtr(os, *(params->ppPropSizeRet));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_kernel_get_group_info_params_t *params) {

    os << ".hKernel = ";

    ur_params::serializePtr(os, *(params->phKernel));

    os << ", ";
    os << ".hDevice = ";

    ur_params::serializePtr(os, *(params->phDevice));

    os << ", ";
    os << ".propName = ";

    os << *(params->ppropName);

    os << ", ";
    os << ".propSize = ";

    os << *(params->ppropSize);

    os << ", ";
    os << ".pPropValue = ";
    ur_params::serializeTaggedTyped_ur_kernel_group_info_t(
        os, *(params->ppPropValue), *(params->ppropName), *(params->ppropSize));

    os << ", ";
    os << ".pPropSizeRet = ";

    ur_params::serializePtr(os, *(params->ppPropSizeRet));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_kernel_get_sub_group_info_params_t *params) {

    os << ".hKernel = ";

    ur_params::serializePtr(os, *(params->phKernel));

    os << ", ";
    os << ".hDevice = ";

    ur_params::serializePtr(os, *(params->phDevice));

    os << ", ";
    os << ".propName = ";

    os << *(params->ppropName);

    os << ", ";
    os << ".propSize = ";

    os << *(params->ppropSize);

    os << ", ";
    os << ".pPropValue = ";
    ur_params::serializeTaggedTyped_ur_kernel_sub_group_info_t(
        os, *(params->ppPropValue), *(params->ppropName), *(params->ppropSize));

    os << ", ";
    os << ".pPropSizeRet = ";

    ur_params::serializePtr(os, *(params->ppPropSizeRet));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_kernel_retain_params_t *params) {

    os << ".hKernel = ";

    ur_params::serializePtr(os, *(params->phKernel));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_kernel_release_params_t *params) {

    os << ".hKernel = ";

    ur_params::serializePtr(os, *(params->phKernel));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_kernel_get_native_handle_params_t *params) {

    os << ".hKernel = ";

    ur_params::serializePtr(os, *(params->phKernel));

    os << ", ";
    os << ".phNativeKernel = ";

    ur_params::serializePtr(os, *(params->pphNativeKernel));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_kernel_create_with_native_handle_params_t *params) {

    os << ".hNativeKernel = ";

    ur_params::serializePtr(os, *(params->phNativeKernel));

    os << ", ";
    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".hProgram = ";

    ur_params::serializePtr(os, *(params->phProgram));

    os << ", ";
    os << ".pProperties = ";

    ur_params::serializePtr(os, *(params->ppProperties));

    os << ", ";
    os << ".phKernel = ";

    ur_params::serializePtr(os, *(params->pphKernel));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_kernel_set_arg_value_params_t *params) {

    os << ".hKernel = ";

    ur_params::serializePtr(os, *(params->phKernel));

    os << ", ";
    os << ".argIndex = ";

    os << *(params->pargIndex);

    os << ", ";
    os << ".argSize = ";

    os << *(params->pargSize);

    os << ", ";
    os << ".pArgValue = ";

    ur_params::serializePtr(os, *(params->ppArgValue));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_kernel_set_arg_local_params_t *params) {

    os << ".hKernel = ";

    ur_params::serializePtr(os, *(params->phKernel));

    os << ", ";
    os << ".argIndex = ";

    os << *(params->pargIndex);

    os << ", ";
    os << ".argSize = ";

    os << *(params->pargSize);

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_kernel_set_arg_pointer_params_t *params) {

    os << ".hKernel = ";

    ur_params::serializePtr(os, *(params->phKernel));

    os << ", ";
    os << ".argIndex = ";

    os << *(params->pargIndex);

    os << ", ";
    os << ".pArgValue = ";

    ur_params::serializePtr(os, *(params->ppArgValue));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_kernel_set_exec_info_params_t *params) {

    os << ".hKernel = ";

    ur_params::serializePtr(os, *(params->phKernel));

    os << ", ";
    os << ".propName = ";

    os << *(params->ppropName);

    os << ", ";
    os << ".propSize = ";

    os << *(params->ppropSize);

    os << ", ";
    os << ".pPropValue = ";
    ur_params::serializeTaggedTyped_ur_kernel_exec_info_t(
        os, *(params->ppPropValue), *(params->ppropName), *(params->ppropSize));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_kernel_set_arg_sampler_params_t *params) {

    os << ".hKernel = ";

    ur_params::serializePtr(os, *(params->phKernel));

    os << ", ";
    os << ".argIndex = ";

    os << *(params->pargIndex);

    os << ", ";
    os << ".hArgValue = ";

    ur_params::serializePtr(os, *(params->phArgValue));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_kernel_set_arg_mem_obj_params_t *params) {

    os << ".hKernel = ";

    ur_params::serializePtr(os, *(params->phKernel));

    os << ", ";
    os << ".argIndex = ";

    os << *(params->pargIndex);

    os << ", ";
    os << ".hArgValue = ";

    ur_params::serializePtr(os, *(params->phArgValue));

    return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    const struct ur_kernel_set_specialization_constants_params_t *params) {

    os << ".hKernel = ";

    ur_params::serializePtr(os, *(params->phKernel));

    os << ", ";
    os << ".count = ";

    os << *(params->pcount);

    os << ", ";
    os << ".pSpecConstants = ";

    ur_params::serializePtr(os, *(params->ppSpecConstants));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_mem_image_create_params_t *params) {

    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".flags = ";

    ur_params::serializeFlag_ur_mem_flags_t(os, *(params->pflags));

    os << ", ";
    os << ".pImageFormat = ";

    ur_params::serializePtr(os, *(params->ppImageFormat));

    os << ", ";
    os << ".pImageDesc = ";

    ur_params::serializePtr(os, *(params->ppImageDesc));

    os << ", ";
    os << ".pHost = ";

    ur_params::serializePtr(os, *(params->ppHost));

    os << ", ";
    os << ".phMem = ";

    ur_params::serializePtr(os, *(params->pphMem));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_mem_buffer_create_params_t *params) {

    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".flags = ";

    ur_params::serializeFlag_ur_mem_flags_t(os, *(params->pflags));

    os << ", ";
    os << ".size = ";

    os << *(params->psize);

    os << ", ";
    os << ".pProperties = ";

    ur_params::serializePtr(os, *(params->ppProperties));

    os << ", ";
    os << ".phBuffer = ";

    ur_params::serializePtr(os, *(params->pphBuffer));

    return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_mem_retain_params_t *params) {

    os << ".hMem = ";

    ur_params::serializePtr(os, *(params->phMem));

    return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_mem_release_params_t *params) {

    os << ".hMem = ";

    ur_params::serializePtr(os, *(params->phMem));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_mem_buffer_partition_params_t *params) {

    os << ".hBuffer = ";

    ur_params::serializePtr(os, *(params->phBuffer));

    os << ", ";
    os << ".flags = ";

    ur_params::serializeFlag_ur_mem_flags_t(os, *(params->pflags));

    os << ", ";
    os << ".bufferCreateType = ";

    os << *(params->pbufferCreateType);

    os << ", ";
    os << ".pRegion = ";

    ur_params::serializePtr(os, *(params->ppRegion));

    os << ", ";
    os << ".phMem = ";

    ur_params::serializePtr(os, *(params->pphMem));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_mem_get_native_handle_params_t *params) {

    os << ".hMem = ";

    ur_params::serializePtr(os, *(params->phMem));

    os << ", ";
    os << ".phNativeMem = ";

    ur_params::serializePtr(os, *(params->pphNativeMem));

    return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    const struct ur_mem_buffer_create_with_native_handle_params_t *params) {

    os << ".hNativeMem = ";

    ur_params::serializePtr(os, *(params->phNativeMem));

    os << ", ";
    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".pProperties = ";

    ur_params::serializePtr(os, *(params->ppProperties));

    os << ", ";
    os << ".phMem = ";

    ur_params::serializePtr(os, *(params->pphMem));

    return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    const struct ur_mem_image_create_with_native_handle_params_t *params) {

    os << ".hNativeMem = ";

    ur_params::serializePtr(os, *(params->phNativeMem));

    os << ", ";
    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".pImageFormat = ";

    ur_params::serializePtr(os, *(params->ppImageFormat));

    os << ", ";
    os << ".pImageDesc = ";

    ur_params::serializePtr(os, *(params->ppImageDesc));

    os << ", ";
    os << ".pProperties = ";

    ur_params::serializePtr(os, *(params->ppProperties));

    os << ", ";
    os << ".phMem = ";

    ur_params::serializePtr(os, *(params->pphMem));

    return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_mem_get_info_params_t *params) {

    os << ".hMemory = ";

    ur_params::serializePtr(os, *(params->phMemory));

    os << ", ";
    os << ".propName = ";

    os << *(params->ppropName);

    os << ", ";
    os << ".propSize = ";

    os << *(params->ppropSize);

    os << ", ";
    os << ".pPropValue = ";
    ur_params::serializeTaggedTyped_ur_mem_info_t(
        os, *(params->ppPropValue), *(params->ppropName), *(params->ppropSize));

    os << ", ";
    os << ".pPropSizeRet = ";

    ur_params::serializePtr(os, *(params->ppPropSizeRet));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_mem_image_get_info_params_t *params) {

    os << ".hMemory = ";

    ur_params::serializePtr(os, *(params->phMemory));

    os << ", ";
    os << ".propName = ";

    os << *(params->ppropName);

    os << ", ";
    os << ".propSize = ";

    os << *(params->ppropSize);

    os << ", ";
    os << ".pPropValue = ";
    ur_params::serializeTaggedTyped_ur_image_info_t(
        os, *(params->ppPropValue), *(params->ppropName), *(params->ppropSize));

    os << ", ";
    os << ".pPropSizeRet = ";

    ur_params::serializePtr(os, *(params->ppPropSizeRet));

    return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_platform_get_params_t *params) {

    os << ".NumEntries = ";

    os << *(params->pNumEntries);

    os << ", ";
    os << ".phPlatforms = [";
    for (size_t i = 0;
         *(params->pphPlatforms) != NULL && i < *params->pNumEntries; ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphPlatforms))[i]);
    }
    os << "]";

    os << ", ";
    os << ".pNumPlatforms = ";

    ur_params::serializePtr(os, *(params->ppNumPlatforms));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_platform_get_info_params_t *params) {

    os << ".hPlatform = ";

    ur_params::serializePtr(os, *(params->phPlatform));

    os << ", ";
    os << ".propName = ";

    os << *(params->ppropName);

    os << ", ";
    os << ".propSize = ";

    os << *(params->ppropSize);

    os << ", ";
    os << ".pPropValue = ";
    ur_params::serializeTaggedTyped_ur_platform_info_t(
        os, *(params->ppPropValue), *(params->ppropName), *(params->ppropSize));

    os << ", ";
    os << ".pSizeRet = ";

    ur_params::serializePtr(os, *(params->ppSizeRet));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_platform_get_native_handle_params_t *params) {

    os << ".hPlatform = ";

    ur_params::serializePtr(os, *(params->phPlatform));

    os << ", ";
    os << ".phNativePlatform = ";

    ur_params::serializePtr(os, *(params->pphNativePlatform));

    return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    const struct ur_platform_create_with_native_handle_params_t *params) {

    os << ".hNativePlatform = ";

    ur_params::serializePtr(os, *(params->phNativePlatform));

    os << ", ";
    os << ".phPlatform = ";

    ur_params::serializePtr(os, *(params->pphPlatform));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_platform_get_api_version_params_t *params) {

    os << ".hDriver = ";

    ur_params::serializePtr(os, *(params->phDriver));

    os << ", ";
    os << ".pVersion = ";

    ur_params::serializePtr(os, *(params->ppVersion));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_platform_get_backend_option_params_t *params) {

    os << ".hPlatform = ";

    ur_params::serializePtr(os, *(params->phPlatform));

    os << ", ";
    os << ".pFrontendOption = ";

    ur_params::serializePtr(os, *(params->ppFrontendOption));

    os << ", ";
    os << ".ppPlatformOption = ";

    ur_params::serializePtr(os, *(params->pppPlatformOption));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_program_create_with_il_params_t *params) {

    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".pIL = ";

    ur_params::serializePtr(os, *(params->ppIL));

    os << ", ";
    os << ".length = ";

    os << *(params->plength);

    os << ", ";
    os << ".pProperties = ";

    ur_params::serializePtr(os, *(params->ppProperties));

    os << ", ";
    os << ".phProgram = ";

    ur_params::serializePtr(os, *(params->pphProgram));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_program_create_with_binary_params_t *params) {

    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".hDevice = ";

    ur_params::serializePtr(os, *(params->phDevice));

    os << ", ";
    os << ".size = ";

    os << *(params->psize);

    os << ", ";
    os << ".pBinary = ";

    ur_params::serializePtr(os, *(params->ppBinary));

    os << ", ";
    os << ".pProperties = ";

    ur_params::serializePtr(os, *(params->ppProperties));

    os << ", ";
    os << ".phProgram = ";

    ur_params::serializePtr(os, *(params->pphProgram));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_program_build_params_t *params) {

    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".hProgram = ";

    ur_params::serializePtr(os, *(params->phProgram));

    os << ", ";
    os << ".pOptions = ";

    ur_params::serializePtr(os, *(params->ppOptions));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_program_compile_params_t *params) {

    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".hProgram = ";

    ur_params::serializePtr(os, *(params->phProgram));

    os << ", ";
    os << ".pOptions = ";

    ur_params::serializePtr(os, *(params->ppOptions));

    return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_program_link_params_t *params) {

    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".count = ";

    os << *(params->pcount);

    os << ", ";
    os << ".phPrograms = [";
    for (size_t i = 0; *(params->pphPrograms) != NULL && i < *params->pcount;
         ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphPrograms))[i]);
    }
    os << "]";

    os << ", ";
    os << ".pOptions = ";

    ur_params::serializePtr(os, *(params->ppOptions));

    os << ", ";
    os << ".phProgram = ";

    ur_params::serializePtr(os, *(params->pphProgram));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_program_retain_params_t *params) {

    os << ".hProgram = ";

    ur_params::serializePtr(os, *(params->phProgram));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_program_release_params_t *params) {

    os << ".hProgram = ";

    ur_params::serializePtr(os, *(params->phProgram));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_program_get_function_pointer_params_t *params) {

    os << ".hDevice = ";

    ur_params::serializePtr(os, *(params->phDevice));

    os << ", ";
    os << ".hProgram = ";

    ur_params::serializePtr(os, *(params->phProgram));

    os << ", ";
    os << ".pFunctionName = ";

    ur_params::serializePtr(os, *(params->ppFunctionName));

    os << ", ";
    os << ".ppFunctionPointer = ";

    ur_params::serializePtr(os, *(params->pppFunctionPointer));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_program_get_info_params_t *params) {

    os << ".hProgram = ";

    ur_params::serializePtr(os, *(params->phProgram));

    os << ", ";
    os << ".propName = ";

    os << *(params->ppropName);

    os << ", ";
    os << ".propSize = ";

    os << *(params->ppropSize);

    os << ", ";
    os << ".pPropValue = ";
    ur_params::serializeTaggedTyped_ur_program_info_t(
        os, *(params->ppPropValue), *(params->ppropName), *(params->ppropSize));

    os << ", ";
    os << ".pPropSizeRet = ";

    ur_params::serializePtr(os, *(params->ppPropSizeRet));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_program_get_build_info_params_t *params) {

    os << ".hProgram = ";

    ur_params::serializePtr(os, *(params->phProgram));

    os << ", ";
    os << ".hDevice = ";

    ur_params::serializePtr(os, *(params->phDevice));

    os << ", ";
    os << ".propName = ";

    os << *(params->ppropName);

    os << ", ";
    os << ".propSize = ";

    os << *(params->ppropSize);

    os << ", ";
    os << ".pPropValue = ";
    ur_params::serializeTaggedTyped_ur_program_build_info_t(
        os, *(params->ppPropValue), *(params->ppropName), *(params->ppropSize));

    os << ", ";
    os << ".pPropSizeRet = ";

    ur_params::serializePtr(os, *(params->ppPropSizeRet));

    return os;
}

inline std::ostream &operator<<(
    std::ostream &os,
    const struct ur_program_set_specialization_constants_params_t *params) {

    os << ".hProgram = ";

    ur_params::serializePtr(os, *(params->phProgram));

    os << ", ";
    os << ".count = ";

    os << *(params->pcount);

    os << ", ";
    os << ".pSpecConstants = [";
    for (size_t i = 0;
         *(params->ppSpecConstants) != NULL && i < *params->pcount; ++i) {
        if (i != 0) {
            os << ", ";
        }

        os << (*(params->ppSpecConstants))[i];
    }
    os << "]";

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_program_get_native_handle_params_t *params) {

    os << ".hProgram = ";

    ur_params::serializePtr(os, *(params->phProgram));

    os << ", ";
    os << ".phNativeProgram = ";

    ur_params::serializePtr(os, *(params->pphNativeProgram));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_program_create_with_native_handle_params_t *params) {

    os << ".hNativeProgram = ";

    ur_params::serializePtr(os, *(params->phNativeProgram));

    os << ", ";
    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".phProgram = ";

    ur_params::serializePtr(os, *(params->pphProgram));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_queue_get_info_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".propName = ";

    os << *(params->ppropName);

    os << ", ";
    os << ".propSize = ";

    os << *(params->ppropSize);

    os << ", ";
    os << ".pPropValue = ";
    ur_params::serializeTaggedTyped_ur_queue_info_t(
        os, *(params->ppPropValue), *(params->ppropName), *(params->ppropSize));

    os << ", ";
    os << ".pPropSizeRet = ";

    ur_params::serializePtr(os, *(params->ppPropSizeRet));

    return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_queue_create_params_t *params) {

    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".hDevice = ";

    ur_params::serializePtr(os, *(params->phDevice));

    os << ", ";
    os << ".pProperties = ";

    ur_params::serializePtr(os, *(params->ppProperties));

    os << ", ";
    os << ".phQueue = ";

    ur_params::serializePtr(os, *(params->pphQueue));

    return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_queue_retain_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_queue_release_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_queue_get_native_handle_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    os << ", ";
    os << ".phNativeQueue = ";

    ur_params::serializePtr(os, *(params->pphNativeQueue));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_queue_create_with_native_handle_params_t *params) {

    os << ".hNativeQueue = ";

    ur_params::serializePtr(os, *(params->phNativeQueue));

    os << ", ";
    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".hDevice = ";

    ur_params::serializePtr(os, *(params->phDevice));

    os << ", ";
    os << ".pProperties = ";

    ur_params::serializePtr(os, *(params->ppProperties));

    os << ", ";
    os << ".phQueue = ";

    ur_params::serializePtr(os, *(params->pphQueue));

    return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_queue_finish_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_queue_flush_params_t *params) {

    os << ".hQueue = ";

    ur_params::serializePtr(os, *(params->phQueue));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_sampler_create_params_t *params) {

    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".pDesc = ";

    ur_params::serializePtr(os, *(params->ppDesc));

    os << ", ";
    os << ".phSampler = ";

    ur_params::serializePtr(os, *(params->pphSampler));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_sampler_retain_params_t *params) {

    os << ".hSampler = ";

    ur_params::serializePtr(os, *(params->phSampler));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_sampler_release_params_t *params) {

    os << ".hSampler = ";

    ur_params::serializePtr(os, *(params->phSampler));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_sampler_get_info_params_t *params) {

    os << ".hSampler = ";

    ur_params::serializePtr(os, *(params->phSampler));

    os << ", ";
    os << ".propName = ";

    os << *(params->ppropName);

    os << ", ";
    os << ".propSize = ";

    os << *(params->ppropSize);

    os << ", ";
    os << ".pPropValue = ";
    ur_params::serializeTaggedTyped_ur_sampler_info_t(
        os, *(params->ppPropValue), *(params->ppropName), *(params->ppropSize));

    os << ", ";
    os << ".pPropSizeRet = ";

    ur_params::serializePtr(os, *(params->ppPropSizeRet));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_sampler_get_native_handle_params_t *params) {

    os << ".hSampler = ";

    ur_params::serializePtr(os, *(params->phSampler));

    os << ", ";
    os << ".phNativeSampler = ";

    ur_params::serializePtr(os, *(params->pphNativeSampler));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_sampler_create_with_native_handle_params_t *params) {

    os << ".hNativeSampler = ";

    ur_params::serializePtr(os, *(params->phNativeSampler));

    os << ", ";
    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".phSampler = ";

    ur_params::serializePtr(os, *(params->pphSampler));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_usm_host_alloc_params_t *params) {

    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".pUSMDesc = ";

    ur_params::serializePtr(os, *(params->ppUSMDesc));

    os << ", ";
    os << ".pool = ";

    ur_params::serializePtr(os, *(params->ppool));

    os << ", ";
    os << ".size = ";

    os << *(params->psize);

    os << ", ";
    os << ".ppMem = ";

    ur_params::serializePtr(os, *(params->pppMem));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_usm_device_alloc_params_t *params) {

    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".hDevice = ";

    ur_params::serializePtr(os, *(params->phDevice));

    os << ", ";
    os << ".pUSMDesc = ";

    ur_params::serializePtr(os, *(params->ppUSMDesc));

    os << ", ";
    os << ".pool = ";

    ur_params::serializePtr(os, *(params->ppool));

    os << ", ";
    os << ".size = ";

    os << *(params->psize);

    os << ", ";
    os << ".ppMem = ";

    ur_params::serializePtr(os, *(params->pppMem));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_usm_shared_alloc_params_t *params) {

    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".hDevice = ";

    ur_params::serializePtr(os, *(params->phDevice));

    os << ", ";
    os << ".pUSMDesc = ";

    ur_params::serializePtr(os, *(params->ppUSMDesc));

    os << ", ";
    os << ".pool = ";

    ur_params::serializePtr(os, *(params->ppool));

    os << ", ";
    os << ".size = ";

    os << *(params->psize);

    os << ", ";
    os << ".ppMem = ";

    ur_params::serializePtr(os, *(params->pppMem));

    return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_usm_free_params_t *params) {

    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".pMem = ";

    ur_params::serializePtr(os, *(params->ppMem));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_usm_get_mem_alloc_info_params_t *params) {

    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".pMem = ";

    ur_params::serializePtr(os, *(params->ppMem));

    os << ", ";
    os << ".propName = ";

    os << *(params->ppropName);

    os << ", ";
    os << ".propSize = ";

    os << *(params->ppropSize);

    os << ", ";
    os << ".pPropValue = ";
    ur_params::serializeTaggedTyped_ur_usm_alloc_info_t(
        os, *(params->ppPropValue), *(params->ppropName), *(params->ppropSize));

    os << ", ";
    os << ".pPropSizeRet = ";

    ur_params::serializePtr(os, *(params->ppPropSizeRet));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_usm_pool_create_params_t *params) {

    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".pPoolDesc = ";

    ur_params::serializePtr(os, *(params->ppPoolDesc));

    os << ", ";
    os << ".ppPool = ";

    ur_params::serializePtr(os, *(params->pppPool));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_usm_pool_destroy_params_t *params) {

    os << ".hContext = ";

    ur_params::serializePtr(os, *(params->phContext));

    os << ", ";
    os << ".pPool = ";

    ur_params::serializePtr(os, *(params->ppPool));

    return os;
}

inline std::ostream &operator<<(std::ostream &os,
                                const struct ur_device_get_params_t *params) {

    os << ".hPlatform = ";

    ur_params::serializePtr(os, *(params->phPlatform));

    os << ", ";
    os << ".DeviceType = ";

    os << *(params->pDeviceType);

    os << ", ";
    os << ".NumEntries = ";

    os << *(params->pNumEntries);

    os << ", ";
    os << ".phDevices = [";
    for (size_t i = 0;
         *(params->pphDevices) != NULL && i < *params->pNumEntries; ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphDevices))[i]);
    }
    os << "]";

    os << ", ";
    os << ".pNumDevices = ";

    ur_params::serializePtr(os, *(params->ppNumDevices));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_device_get_info_params_t *params) {

    os << ".hDevice = ";

    ur_params::serializePtr(os, *(params->phDevice));

    os << ", ";
    os << ".propName = ";

    os << *(params->ppropName);

    os << ", ";
    os << ".propSize = ";

    os << *(params->ppropSize);

    os << ", ";
    os << ".pPropValue = ";
    ur_params::serializeTaggedTyped_ur_device_info_t(
        os, *(params->ppPropValue), *(params->ppropName), *(params->ppropSize));

    os << ", ";
    os << ".pPropSizeRet = ";

    ur_params::serializePtr(os, *(params->ppPropSizeRet));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_device_retain_params_t *params) {

    os << ".hDevice = ";

    ur_params::serializePtr(os, *(params->phDevice));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os, const struct ur_device_release_params_t *params) {

    os << ".hDevice = ";

    ur_params::serializePtr(os, *(params->phDevice));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_device_partition_params_t *params) {

    os << ".hDevice = ";

    ur_params::serializePtr(os, *(params->phDevice));

    os << ", ";
    os << ".pProperties = ";

    ur_params::serializePtr(os, *(params->ppProperties));

    os << ", ";
    os << ".NumDevices = ";

    os << *(params->pNumDevices);

    os << ", ";
    os << ".phSubDevices = [";
    for (size_t i = 0;
         *(params->pphSubDevices) != NULL && i < *params->pNumDevices; ++i) {
        if (i != 0) {
            os << ", ";
        }

        ur_params::serializePtr(os, (*(params->pphSubDevices))[i]);
    }
    os << "]";

    os << ", ";
    os << ".pNumDevicesRet = ";

    ur_params::serializePtr(os, *(params->ppNumDevicesRet));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_device_select_binary_params_t *params) {

    os << ".hDevice = ";

    ur_params::serializePtr(os, *(params->phDevice));

    os << ", ";
    os << ".pBinaries = ";

    ur_params::serializePtr(os, *(params->ppBinaries));

    os << ", ";
    os << ".NumBinaries = ";

    os << *(params->pNumBinaries);

    os << ", ";
    os << ".pSelectedBinary = ";

    ur_params::serializePtr(os, *(params->ppSelectedBinary));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_device_get_native_handle_params_t *params) {

    os << ".hDevice = ";

    ur_params::serializePtr(os, *(params->phDevice));

    os << ", ";
    os << ".phNativeDevice = ";

    ur_params::serializePtr(os, *(params->pphNativeDevice));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_device_create_with_native_handle_params_t *params) {

    os << ".hNativeDevice = ";

    ur_params::serializePtr(os, *(params->phNativeDevice));

    os << ", ";
    os << ".hPlatform = ";

    ur_params::serializePtr(os, *(params->phPlatform));

    os << ", ";
    os << ".phDevice = ";

    ur_params::serializePtr(os, *(params->pphDevice));

    return os;
}

inline std::ostream &
operator<<(std::ostream &os,
           const struct ur_device_get_global_timestamps_params_t *params) {

    os << ".hDevice = ";

    ur_params::serializePtr(os, *(params->phDevice));

    os << ", ";
    os << ".pDeviceTimestamp = ";

    ur_params::serializePtr(os, *(params->ppDeviceTimestamp));

    os << ", ";
    os << ".pHostTimestamp = ";

    ur_params::serializePtr(os, *(params->ppHostTimestamp));

    return os;
}

namespace ur_params {
// https://devblogs.microsoft.com/oldnewthing/20190710-00/?p=102678
template <typename, typename = void> constexpr bool is_type_complete_v = false;
template <typename T>
constexpr bool is_type_complete_v<T, std::void_t<decltype(sizeof(T))>> = true;

template <typename T> inline void serializePtr(std::ostream &os, T *ptr) {
    if (ptr == nullptr) {
        os << "nullptr";
    } else if constexpr (std::is_pointer_v<T>) {
        os << (void *)(ptr) << " (";
        serializePtr(os, *ptr);
        os << ")";
    } else if constexpr (std::is_void_v<T> || !is_type_complete_v<T>) {
        os << (void *)ptr;
    } else if constexpr (std::is_same_v<std::remove_cv_t<T>, char>) {
        os << (void *)(ptr) << " (";
        os << ptr;
        os << ")";
    } else {
        os << (void *)(ptr) << " (";
        os << *ptr;
        os << ")";
    }
}

inline int serializeFunctionParams(std::ostream &os, uint32_t function,
                                   const void *params) {
    switch ((enum ur_function_t)function) {
    case UR_FUNCTION_INIT: {
        os << (const struct ur_init_params_t *)params;
    } break;
    case UR_FUNCTION_GET_LAST_RESULT: {
        os << (const struct ur_get_last_result_params_t *)params;
    } break;
    case UR_FUNCTION_TEAR_DOWN: {
        os << (const struct ur_tear_down_params_t *)params;
    } break;
    case UR_FUNCTION_CONTEXT_CREATE: {
        os << (const struct ur_context_create_params_t *)params;
    } break;
    case UR_FUNCTION_CONTEXT_RETAIN: {
        os << (const struct ur_context_retain_params_t *)params;
    } break;
    case UR_FUNCTION_CONTEXT_RELEASE: {
        os << (const struct ur_context_release_params_t *)params;
    } break;
    case UR_FUNCTION_CONTEXT_GET_INFO: {
        os << (const struct ur_context_get_info_params_t *)params;
    } break;
    case UR_FUNCTION_CONTEXT_GET_NATIVE_HANDLE: {
        os << (const struct ur_context_get_native_handle_params_t *)params;
    } break;
    case UR_FUNCTION_CONTEXT_CREATE_WITH_NATIVE_HANDLE: {
        os << (const struct ur_context_create_with_native_handle_params_t *)
                params;
    } break;
    case UR_FUNCTION_CONTEXT_SET_EXTENDED_DELETER: {
        os << (const struct ur_context_set_extended_deleter_params_t *)params;
    } break;
    case UR_FUNCTION_ENQUEUE_KERNEL_LAUNCH: {
        os << (const struct ur_enqueue_kernel_launch_params_t *)params;
    } break;
    case UR_FUNCTION_ENQUEUE_EVENTS_WAIT: {
        os << (const struct ur_enqueue_events_wait_params_t *)params;
    } break;
    case UR_FUNCTION_ENQUEUE_EVENTS_WAIT_WITH_BARRIER: {
        os << (const struct ur_enqueue_events_wait_with_barrier_params_t *)
                params;
    } break;
    case UR_FUNCTION_ENQUEUE_MEM_BUFFER_READ: {
        os << (const struct ur_enqueue_mem_buffer_read_params_t *)params;
    } break;
    case UR_FUNCTION_ENQUEUE_MEM_BUFFER_WRITE: {
        os << (const struct ur_enqueue_mem_buffer_write_params_t *)params;
    } break;
    case UR_FUNCTION_ENQUEUE_MEM_BUFFER_READ_RECT: {
        os << (const struct ur_enqueue_mem_buffer_read_rect_params_t *)params;
    } break;
    case UR_FUNCTION_ENQUEUE_MEM_BUFFER_WRITE_RECT: {
        os << (const struct ur_enqueue_mem_buffer_write_rect_params_t *)params;
    } break;
    case UR_FUNCTION_ENQUEUE_MEM_BUFFER_COPY: {
        os << (const struct ur_enqueue_mem_buffer_copy_params_t *)params;
    } break;
    case UR_FUNCTION_ENQUEUE_MEM_BUFFER_COPY_RECT: {
        os << (const struct ur_enqueue_mem_buffer_copy_rect_params_t *)params;
    } break;
    case UR_FUNCTION_ENQUEUE_MEM_BUFFER_FILL: {
        os << (const struct ur_enqueue_mem_buffer_fill_params_t *)params;
    } break;
    case UR_FUNCTION_ENQUEUE_MEM_IMAGE_READ: {
        os << (const struct ur_enqueue_mem_image_read_params_t *)params;
    } break;
    case UR_FUNCTION_ENQUEUE_MEM_IMAGE_WRITE: {
        os << (const struct ur_enqueue_mem_image_write_params_t *)params;
    } break;
    case UR_FUNCTION_ENQUEUE_MEM_IMAGE_COPY: {
        os << (const struct ur_enqueue_mem_image_copy_params_t *)params;
    } break;
    case UR_FUNCTION_ENQUEUE_MEM_BUFFER_MAP: {
        os << (const struct ur_enqueue_mem_buffer_map_params_t *)params;
    } break;
    case UR_FUNCTION_ENQUEUE_MEM_UNMAP: {
        os << (const struct ur_enqueue_mem_unmap_params_t *)params;
    } break;
    case UR_FUNCTION_ENQUEUE_USM_FILL: {
        os << (const struct ur_enqueue_usm_fill_params_t *)params;
    } break;
    case UR_FUNCTION_ENQUEUE_USM_MEMCPY: {
        os << (const struct ur_enqueue_usm_memcpy_params_t *)params;
    } break;
    case UR_FUNCTION_ENQUEUE_USM_PREFETCH: {
        os << (const struct ur_enqueue_usm_prefetch_params_t *)params;
    } break;
    case UR_FUNCTION_ENQUEUE_USM_ADVISE: {
        os << (const struct ur_enqueue_usm_advise_params_t *)params;
    } break;
    case UR_FUNCTION_ENQUEUE_USM_FILL2_D: {
        os << (const struct ur_enqueue_usm_fill2_d_params_t *)params;
    } break;
    case UR_FUNCTION_ENQUEUE_USM_MEMCPY2_D: {
        os << (const struct ur_enqueue_usm_memcpy2_d_params_t *)params;
    } break;
    case UR_FUNCTION_ENQUEUE_DEVICE_GLOBAL_VARIABLE_WRITE: {
        os << (const struct ur_enqueue_device_global_variable_write_params_t *)
                params;
    } break;
    case UR_FUNCTION_ENQUEUE_DEVICE_GLOBAL_VARIABLE_READ: {
        os << (const struct ur_enqueue_device_global_variable_read_params_t *)
                params;
    } break;
    case UR_FUNCTION_EVENT_GET_INFO: {
        os << (const struct ur_event_get_info_params_t *)params;
    } break;
    case UR_FUNCTION_EVENT_GET_PROFILING_INFO: {
        os << (const struct ur_event_get_profiling_info_params_t *)params;
    } break;
    case UR_FUNCTION_EVENT_WAIT: {
        os << (const struct ur_event_wait_params_t *)params;
    } break;
    case UR_FUNCTION_EVENT_RETAIN: {
        os << (const struct ur_event_retain_params_t *)params;
    } break;
    case UR_FUNCTION_EVENT_RELEASE: {
        os << (const struct ur_event_release_params_t *)params;
    } break;
    case UR_FUNCTION_EVENT_GET_NATIVE_HANDLE: {
        os << (const struct ur_event_get_native_handle_params_t *)params;
    } break;
    case UR_FUNCTION_EVENT_CREATE_WITH_NATIVE_HANDLE: {
        os << (const struct ur_event_create_with_native_handle_params_t *)
                params;
    } break;
    case UR_FUNCTION_EVENT_SET_CALLBACK: {
        os << (const struct ur_event_set_callback_params_t *)params;
    } break;
    case UR_FUNCTION_KERNEL_CREATE: {
        os << (const struct ur_kernel_create_params_t *)params;
    } break;
    case UR_FUNCTION_KERNEL_GET_INFO: {
        os << (const struct ur_kernel_get_info_params_t *)params;
    } break;
    case UR_FUNCTION_KERNEL_GET_GROUP_INFO: {
        os << (const struct ur_kernel_get_group_info_params_t *)params;
    } break;
    case UR_FUNCTION_KERNEL_GET_SUB_GROUP_INFO: {
        os << (const struct ur_kernel_get_sub_group_info_params_t *)params;
    } break;
    case UR_FUNCTION_KERNEL_RETAIN: {
        os << (const struct ur_kernel_retain_params_t *)params;
    } break;
    case UR_FUNCTION_KERNEL_RELEASE: {
        os << (const struct ur_kernel_release_params_t *)params;
    } break;
    case UR_FUNCTION_KERNEL_GET_NATIVE_HANDLE: {
        os << (const struct ur_kernel_get_native_handle_params_t *)params;
    } break;
    case UR_FUNCTION_KERNEL_CREATE_WITH_NATIVE_HANDLE: {
        os << (const struct ur_kernel_create_with_native_handle_params_t *)
                params;
    } break;
    case UR_FUNCTION_KERNEL_SET_ARG_VALUE: {
        os << (const struct ur_kernel_set_arg_value_params_t *)params;
    } break;
    case UR_FUNCTION_KERNEL_SET_ARG_LOCAL: {
        os << (const struct ur_kernel_set_arg_local_params_t *)params;
    } break;
    case UR_FUNCTION_KERNEL_SET_ARG_POINTER: {
        os << (const struct ur_kernel_set_arg_pointer_params_t *)params;
    } break;
    case UR_FUNCTION_KERNEL_SET_EXEC_INFO: {
        os << (const struct ur_kernel_set_exec_info_params_t *)params;
    } break;
    case UR_FUNCTION_KERNEL_SET_ARG_SAMPLER: {
        os << (const struct ur_kernel_set_arg_sampler_params_t *)params;
    } break;
    case UR_FUNCTION_KERNEL_SET_ARG_MEM_OBJ: {
        os << (const struct ur_kernel_set_arg_mem_obj_params_t *)params;
    } break;
    case UR_FUNCTION_KERNEL_SET_SPECIALIZATION_CONSTANTS: {
        os << (const struct ur_kernel_set_specialization_constants_params_t *)
                params;
    } break;
    case UR_FUNCTION_MEM_IMAGE_CREATE: {
        os << (const struct ur_mem_image_create_params_t *)params;
    } break;
    case UR_FUNCTION_MEM_BUFFER_CREATE: {
        os << (const struct ur_mem_buffer_create_params_t *)params;
    } break;
    case UR_FUNCTION_MEM_RETAIN: {
        os << (const struct ur_mem_retain_params_t *)params;
    } break;
    case UR_FUNCTION_MEM_RELEASE: {
        os << (const struct ur_mem_release_params_t *)params;
    } break;
    case UR_FUNCTION_MEM_BUFFER_PARTITION: {
        os << (const struct ur_mem_buffer_partition_params_t *)params;
    } break;
    case UR_FUNCTION_MEM_GET_NATIVE_HANDLE: {
        os << (const struct ur_mem_get_native_handle_params_t *)params;
    } break;
    case UR_FUNCTION_MEM_BUFFER_CREATE_WITH_NATIVE_HANDLE: {
        os << (const struct ur_mem_buffer_create_with_native_handle_params_t *)
                params;
    } break;
    case UR_FUNCTION_MEM_IMAGE_CREATE_WITH_NATIVE_HANDLE: {
        os << (const struct ur_mem_image_create_with_native_handle_params_t *)
                params;
    } break;
    case UR_FUNCTION_MEM_GET_INFO: {
        os << (const struct ur_mem_get_info_params_t *)params;
    } break;
    case UR_FUNCTION_MEM_IMAGE_GET_INFO: {
        os << (const struct ur_mem_image_get_info_params_t *)params;
    } break;
    case UR_FUNCTION_PLATFORM_GET: {
        os << (const struct ur_platform_get_params_t *)params;
    } break;
    case UR_FUNCTION_PLATFORM_GET_INFO: {
        os << (const struct ur_platform_get_info_params_t *)params;
    } break;
    case UR_FUNCTION_PLATFORM_GET_NATIVE_HANDLE: {
        os << (const struct ur_platform_get_native_handle_params_t *)params;
    } break;
    case UR_FUNCTION_PLATFORM_CREATE_WITH_NATIVE_HANDLE: {
        os << (const struct ur_platform_create_with_native_handle_params_t *)
                params;
    } break;
    case UR_FUNCTION_PLATFORM_GET_API_VERSION: {
        os << (const struct ur_platform_get_api_version_params_t *)params;
    } break;
    case UR_FUNCTION_PLATFORM_GET_BACKEND_OPTION: {
        os << (const struct ur_platform_get_backend_option_params_t *)params;
    } break;
    case UR_FUNCTION_PROGRAM_CREATE_WITH_IL: {
        os << (const struct ur_program_create_with_il_params_t *)params;
    } break;
    case UR_FUNCTION_PROGRAM_CREATE_WITH_BINARY: {
        os << (const struct ur_program_create_with_binary_params_t *)params;
    } break;
    case UR_FUNCTION_PROGRAM_BUILD: {
        os << (const struct ur_program_build_params_t *)params;
    } break;
    case UR_FUNCTION_PROGRAM_COMPILE: {
        os << (const struct ur_program_compile_params_t *)params;
    } break;
    case UR_FUNCTION_PROGRAM_LINK: {
        os << (const struct ur_program_link_params_t *)params;
    } break;
    case UR_FUNCTION_PROGRAM_RETAIN: {
        os << (const struct ur_program_retain_params_t *)params;
    } break;
    case UR_FUNCTION_PROGRAM_RELEASE: {
        os << (const struct ur_program_release_params_t *)params;
    } break;
    case UR_FUNCTION_PROGRAM_GET_FUNCTION_POINTER: {
        os << (const struct ur_program_get_function_pointer_params_t *)params;
    } break;
    case UR_FUNCTION_PROGRAM_GET_INFO: {
        os << (const struct ur_program_get_info_params_t *)params;
    } break;
    case UR_FUNCTION_PROGRAM_GET_BUILD_INFO: {
        os << (const struct ur_program_get_build_info_params_t *)params;
    } break;
    case UR_FUNCTION_PROGRAM_SET_SPECIALIZATION_CONSTANTS: {
        os << (const struct ur_program_set_specialization_constants_params_t *)
                params;
    } break;
    case UR_FUNCTION_PROGRAM_GET_NATIVE_HANDLE: {
        os << (const struct ur_program_get_native_handle_params_t *)params;
    } break;
    case UR_FUNCTION_PROGRAM_CREATE_WITH_NATIVE_HANDLE: {
        os << (const struct ur_program_create_with_native_handle_params_t *)
                params;
    } break;
    case UR_FUNCTION_QUEUE_GET_INFO: {
        os << (const struct ur_queue_get_info_params_t *)params;
    } break;
    case UR_FUNCTION_QUEUE_CREATE: {
        os << (const struct ur_queue_create_params_t *)params;
    } break;
    case UR_FUNCTION_QUEUE_RETAIN: {
        os << (const struct ur_queue_retain_params_t *)params;
    } break;
    case UR_FUNCTION_QUEUE_RELEASE: {
        os << (const struct ur_queue_release_params_t *)params;
    } break;
    case UR_FUNCTION_QUEUE_GET_NATIVE_HANDLE: {
        os << (const struct ur_queue_get_native_handle_params_t *)params;
    } break;
    case UR_FUNCTION_QUEUE_CREATE_WITH_NATIVE_HANDLE: {
        os << (const struct ur_queue_create_with_native_handle_params_t *)
                params;
    } break;
    case UR_FUNCTION_QUEUE_FINISH: {
        os << (const struct ur_queue_finish_params_t *)params;
    } break;
    case UR_FUNCTION_QUEUE_FLUSH: {
        os << (const struct ur_queue_flush_params_t *)params;
    } break;
    case UR_FUNCTION_SAMPLER_CREATE: {
        os << (const struct ur_sampler_create_params_t *)params;
    } break;
    case UR_FUNCTION_SAMPLER_RETAIN: {
        os << (const struct ur_sampler_retain_params_t *)params;
    } break;
    case UR_FUNCTION_SAMPLER_RELEASE: {
        os << (const struct ur_sampler_release_params_t *)params;
    } break;
    case UR_FUNCTION_SAMPLER_GET_INFO: {
        os << (const struct ur_sampler_get_info_params_t *)params;
    } break;
    case UR_FUNCTION_SAMPLER_GET_NATIVE_HANDLE: {
        os << (const struct ur_sampler_get_native_handle_params_t *)params;
    } break;
    case UR_FUNCTION_SAMPLER_CREATE_WITH_NATIVE_HANDLE: {
        os << (const struct ur_sampler_create_with_native_handle_params_t *)
                params;
    } break;
    case UR_FUNCTION_USM_HOST_ALLOC: {
        os << (const struct ur_usm_host_alloc_params_t *)params;
    } break;
    case UR_FUNCTION_USM_DEVICE_ALLOC: {
        os << (const struct ur_usm_device_alloc_params_t *)params;
    } break;
    case UR_FUNCTION_USM_SHARED_ALLOC: {
        os << (const struct ur_usm_shared_alloc_params_t *)params;
    } break;
    case UR_FUNCTION_USM_FREE: {
        os << (const struct ur_usm_free_params_t *)params;
    } break;
    case UR_FUNCTION_USM_GET_MEM_ALLOC_INFO: {
        os << (const struct ur_usm_get_mem_alloc_info_params_t *)params;
    } break;
    case UR_FUNCTION_USM_POOL_CREATE: {
        os << (const struct ur_usm_pool_create_params_t *)params;
    } break;
    case UR_FUNCTION_USM_POOL_DESTROY: {
        os << (const struct ur_usm_pool_destroy_params_t *)params;
    } break;
    case UR_FUNCTION_DEVICE_GET: {
        os << (const struct ur_device_get_params_t *)params;
    } break;
    case UR_FUNCTION_DEVICE_GET_INFO: {
        os << (const struct ur_device_get_info_params_t *)params;
    } break;
    case UR_FUNCTION_DEVICE_RETAIN: {
        os << (const struct ur_device_retain_params_t *)params;
    } break;
    case UR_FUNCTION_DEVICE_RELEASE: {
        os << (const struct ur_device_release_params_t *)params;
    } break;
    case UR_FUNCTION_DEVICE_PARTITION: {
        os << (const struct ur_device_partition_params_t *)params;
    } break;
    case UR_FUNCTION_DEVICE_SELECT_BINARY: {
        os << (const struct ur_device_select_binary_params_t *)params;
    } break;
    case UR_FUNCTION_DEVICE_GET_NATIVE_HANDLE: {
        os << (const struct ur_device_get_native_handle_params_t *)params;
    } break;
    case UR_FUNCTION_DEVICE_CREATE_WITH_NATIVE_HANDLE: {
        os << (const struct ur_device_create_with_native_handle_params_t *)
                params;
    } break;
    case UR_FUNCTION_DEVICE_GET_GLOBAL_TIMESTAMPS: {
        os << (const struct ur_device_get_global_timestamps_params_t *)params;
    } break;
    default:
        return -1;
    }
    return 0;
}
} // namespace ur_params

#endif /* UR_PARAMS_HPP */
