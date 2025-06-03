cmake_minimum_required(VERSION 3.8)

set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_STANDARD 17)

project("Engine")
add_compile_definitions(_ENGINE_DYNAMIC_LIB_)
add_library(${PROJECT_NAME} SHARED "src/Core/Application.h"
                                   "src/Core/Application.cpp"
                                   "pch.h" "src/Core/Event.h")
target_precompile_headers(${PROJECT_NAME} PUBLIC "pch.h")
target_include_directories(${PROJECT_NAME} PUBLIC "${CMAKE_SRC_DIR}/glm"
                                                  "${CMAKE_SRC_DIR}/glfw/include"
                                                  "${CMAKE_SRC_DIR}/glad/include")
target_link_libraries(${PROJECT_NAME} PUBLIC glad glfw glm
                                      PUBLIC "opengl32.lib")