project (Thirdparty_Libs)

add_library(Thirdparty_Libs INTERFACE)

target_include_directories(Thirdparty_Libs INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_features(Thirdparty_Libs INTERFACE cxx_std_11)