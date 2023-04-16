cmake_minimum_required(VERSION 3.16.3)

project(sampleApp VERSION 1.0.0 DESCRIPTION "app")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_VERBOSE_MAKEFILE ON)

# link_directories(/mnt/d/D-cpp/ABI/vendor/build/)

# link_directories(/mnt/d/D-cpp/ABI/thirdParty/v2/build/)

# target_link_libraries( sampleApp PRIVATE opaquelib vendorlib)


add_executable(sampleApp ../main.cpp)

target_include_directories(sampleApp
PRIVATE ${CMAKE_SOURCE_DIR}/../../vendor/include/
)
#TODO: change here
find_library(vendorlib
        NAMES
            vendorlib
        PATHS
            /mnt/d/D-cpp/ABI/vendor/build/
)
#TODO: change here
find_library(opaquelib
        NAMES
            opaquelib
        PATHS
            /mnt/d/D-cpp/ABI/thirdParty/v1/build/
)

if(NOT vendorlib)
    message(WARNING "vendor lib NOT FOUND - the respective target won't build.")
else()
    message(STATUS "vendor lib : ${vendorlib}")
endif(NOT vendorlib)

if(NOT opaquelib)
    message(WARNING "opaque lib NOT FOUND - the respective target won't build.")
else()
    message(STATUS "opaque lib : ${opaquelib}")
endif(NOT opaquelib)


target_link_libraries( sampleApp PRIVATE ${vendorlib} ${opaquelib})
