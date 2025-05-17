enable_testing()
add_subdirectory(lib/catch2)

add_executable(test_runner test_main.cpp)
target_link_libraries(test_runner Catch2::Catch2WithMain)
add_test(NAME run_tests COMMAND test_runner)