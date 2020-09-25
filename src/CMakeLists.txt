project(CPP-Prog)

# sources for unit tests
add_library(prog_lib STATIC Car.cpp Car.h)
target_include_directories(prog_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# main programm
add_executable(CPP-Prog main.cpp)
target_link_libraries(CPP-Prog PRIVATE prog_lib)