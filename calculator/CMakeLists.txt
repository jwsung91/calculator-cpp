file(GLOB SOURCES "*.cc")

add_library(Calculator STATIC ${SOURCES})
add_executable(calculator_main main.cc)
target_link_libraries(calculator_main PRIVATE Calculator)