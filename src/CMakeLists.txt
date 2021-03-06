cmake_minimum_required(VERSION 3.0)

project(BOD)

if (BLD_NATIVE)
    # Disable exceptions
    string(REGEX REPLACE /EHsc /EHs-c- CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS})
    # Disable RTTI
    string(REGEX REPLACE /GR /GR- CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS})
    # Set optimisation level
    string(
        REGEX REPLACE /O2 /Od
        CMAKE_CXX_FLAGS_RELWITHDEBINFO ${CMAKE_CXX_FLAGS_RELWITHDEBINFO}
    )
endif()
if (MSVC)
    # Enable asserts
    string(
        REGEX REPLACE "/DNDEBUG" ""
        CMAKE_CXX_FLAGS_RELWITHDEBINFO ${CMAKE_CXX_FLAGS_RELWITHDEBINFO}
    )
endif()

list(APPEND BOD_COMMON_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/include")
list(APPEND BOD_COMMON_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/Blade")
set(PYTHON_INCLUDE_DIR "C:\\Program Files (x86)\\Python\\include")

set(BOD_EXTERNAL_LIB_DIR "${PROJECT_SOURCE_DIR}/../lib/VC")

set(BOD_RUNTIME_DIR "${PROJECT_SOURCE_DIR}/../install/bin")

add_subdirectory(Blade)
add_subdirectory(BladeExt)
add_subdirectory(netgame)
add_subdirectory(Raster)
