add_compile_options(${COMPILER_WARNINGS_FLAGS})

set(NVBENGINE_HEADERS
        include/nvbengine/TestingVulkanApp.hpp
)

set(NVBENGINE_SRC
        src/TestingVulkanApp.cpp
)


add_library(NVBEngine STATIC ${NVBENGINE_SRC} ${NVBENGINE_HEADERS})

#Vulkan
find_package(Vulkan REQUIRED)

#GLFW
message("glfw")
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
add_subdirectory(external/glfw)

#SPDLOG
message("spdlog")
add_subdirectory(external/spdlog)

#GLM
message("glm")
add_subdirectory(external/glm)

target_compile_features(NVBEngine INTERFACE cxx_std_20)
target_include_directories(NVBEngine
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${Vulkan_INCLUDE_DIR}
)

target_link_libraries(
NVBEngine
        PUBLIC spdlog::spdlog
        glfw
        glm
        ${Vulkan_LIBRARIES}
)