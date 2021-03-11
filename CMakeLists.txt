cmake_minimum_required(VERSION 3.19)
project(MyProject VERSION 0.0.1)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../buildOut)
aux_source_directory(src/ SRC_LIST)
aux_source_directory(includes INC_LIST)

#find_package(OpenGL REQUIRED)
#find_package(glfw3 3.3.3 REQUIRED)


add_executable(projectRunable ${SRC_LIST})
include_directories(includes/)
target_link_libraries(projectRunable PRIVATE SDL2 m)

#target_link_libraries(projectRunable PRIVATE SDL2 glfw3 OpenGL::GL)


