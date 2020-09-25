project(TESTS)

set(TEST_FILES
    test.cpp
)

add_executable(TESTS main.cpp ${TEST_FILES})
target_link_libraries(TESTS PRIVATE prog_lib Thirdparty_Libs)
target_compile_definitions(TESTS PRIVATE CATCH_CONFIG_CONSOLE_WIDTH=60)