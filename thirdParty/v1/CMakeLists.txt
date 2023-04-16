cmake_minimum_required(VERSION 3.16.3)

project(opaquelib VERSION 1.0.0 DESCRIPTION "opaque vendor")

add_library(opaquelib SHARED
src/opaque_api.cpp)

set_target_properties(opaquelib PROPERTIES VERSION ${PROJECT_VERSION})

set_target_properties(opaquelib PROPERTIES PUBLIC_HEADER include/opaque_api.h)

target_include_directories(opaquelib PRIVATE include/)