# test/CMakeLists.txt
add_executable(calculator_test calculator_test.cc)
target_include_directories(calculator_test PRIVATE ${CMAKE_SOURCE_DIR}/calculator)
target_link_libraries(calculator_test gtest_main Calculator)

include(GoogleTest)
gtest_discover_tests(calculator_test)