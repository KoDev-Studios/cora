add_executable(tests basic_test.c)

target_link_libraries(tests PRIVATE cora)


add_test(NAME tests COMMAND tests)