cmake_minimum_required(VERSION 3.8)

set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_STANDARD 17)

set(SHARED_LIB_PATH "${CMAKE_BINARY_DIR}/Engine/Engine.dll")

project("Sandbox")
add_compile_definitions(_CLIENT_APPLICATION_)
add_executable(${PROJECT_NAME} "src/main.cpp")
target_include_directories(${PROJECT_NAME} PUBLIC "${CMAKE_SOURCE_DIR}/Engine/src"
                                                  "${CMAKE_SOURCE_DIR}/glm")
target_link_libraries(${PROJECT_NAME} PUBLIC Engine)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${SHARED_LIB_PATH}"
        "$<TARGET_FILE_DIR:${PROJECT_NAME}>"
)