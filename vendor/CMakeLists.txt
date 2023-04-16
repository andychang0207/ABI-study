cmake_minimum_required(VERSION 3.16.3)

project(vendorlib VERSION 1.0.0 DESCRIPTION "vendor")

add_library(vendorlib SHARED
src/utils.cpp)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_VERBOSE_MAKEFILE ON)

set_target_properties(vendorlib PROPERTIES VERSION ${PROJECT_VERSION})

set_target_properties(vendorlib PROPERTIES PUBLIC_HEADER include/utils.h)


target_include_directories(vendorlib PUBLIC ${CMAKE_SOURCE_DIR}/include/
PRIVATE ${CMAKE_SOURCE_DIR}/../thirdParty/v1/include/
)