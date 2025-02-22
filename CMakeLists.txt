cmake_minimum_required(VERSION 3.10)

project(calculator-cpp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

# Add GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.11.0.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_subdirectory(calculator)
add_subdirectory(test)

# Add main executable
add_executable(calculator_main main.cc)
target_include_directories(calculator_main PRIVATE ${CMAKE_SOURCE_DIR}/calculator)
target_link_libraries(calculator_main Calculator)

# Suppress warnings in Google Test
if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    add_compile_options(-Wno-maybe-uninitialized)
endif()