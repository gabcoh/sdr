cmake_minimum_required(VERSION 3.13.1)

project(sdr)

set(openFrameworks_DIR ${CMAKE_SOURCE_DIR})

set_property(GLOBAL PROPERTY CXX_STANDARD 14)
set_property(GLOBAL PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(GLOBAL PROPERTY CXX_EXTENSIONS OFF)

# Cross-platform compiler lints
if (${CMAKE_CXX_COMPILER_ID} STREQUAL "Clang"
    OR ${CMAKE_CXX_COMPILER_ID} STREQUAL "GNU")
  add_compile_options(
    -Wall
    -Wextra
    -Wswitch
    -Wconversion
    -Wparentheses
    -Wfloat-equal
    -Wzero-as-null-pointer-constant
    -Wpedantic)
    #-pedantic
    #-pedantic-errors)
elseif (${CMAKE_CXX_COMPILER_ID} STREQUAL "MSVC")
  add_compile_options(/W3)
endif ()

add_subdirectory(src)
