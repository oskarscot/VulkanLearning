cmake_minimum_required(VERSION 3.26)
project(VulkanLearning)

set(CMAKE_CXX_STANDARD 17)

add_executable(VulkanLearning src/main.cpp)

add_subdirectory(external/glfw)
target_include_directories(${PROJECT_NAME} PUBLIC external/glfw/include)
target_link_libraries(${PROJECT_NAME} glfw)

add_subdirectory(external/glm)
target_include_directories(${PROJECT_NAME} PUBLIC external/glm)

find_package(Vulkan REQUIRED)
target_link_libraries(${PROJECT_NAME} Vulkan::Vulkan)
