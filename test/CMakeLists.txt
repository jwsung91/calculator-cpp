# test/CMakeLists.txt
add_executable(calculator_test calculator_test.cc)
target_link_libraries(calculator_test gtest_main)

include(GoogleTest)
gtest_discover_tests(calculator_test)