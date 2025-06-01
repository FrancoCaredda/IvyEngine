cmake_minimum_required(VERSION 3.8)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS On)

project("IvyEngine")
add_subdirectory("glm")
add_subdirectory("glfw")
add_subdirectory("glad")
add_subdirectory("Engine")
add_subdirectory("Sandbox")