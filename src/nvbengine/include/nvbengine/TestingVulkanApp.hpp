#pragma once

#include <GLFW/glfw3.h>
#include <vulkan/vulkan.hpp>

namespace nvbe
{
    class TestingVulkanApp
    {
    public:
        void run();

    private:
        void initWindow();
        void initVulkan();
        void mainLoop();
        void cleanup();

        const uint32_t WIDTH = 800;
        const uint32_t HEIGHT = 600;

        GLFWwindow* window;
        VkInstance instance;
    };
} // namespace nvbe
