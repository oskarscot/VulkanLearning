cmake_minimum_required(VERSION 3.26)
project(VulkanLearning)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "src/*.hpp")

add_executable(VulkanLearning ${SOURCES} ${HEADERS})
add_subdirectory(external/glfw)
target_include_directories(${PROJECT_NAME} PUBLIC external/glfw/include)
target_link_libraries(${PROJECT_NAME} glfw)

add_subdirectory(external/glm)
target_include_directories(${PROJECT_NAME} PUBLIC external/glm)

find_package(Vulkan REQUIRED)
target_link_libraries(${PROJECT_NAME} Vulkan::Vulkan)
