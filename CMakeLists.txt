cmake_minimum_required(VERSION 3.19)
project(MyProject VERSION 0.0.1)


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin)
aux_source_directory(src/ SRC_LIST)
add_executable(projectRunable ${SRC_LIST})