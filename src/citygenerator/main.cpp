#include "nvbengine/TestingVulkanApp.hpp"
#include <spdlog/spdlog.h>
int main()
{
    nvbe::TestingVulkanApp app;

    try
    {
        app.run();
    }
    catch(const std::exception& e)
    {
        fmt::print(e.what());
    }

    return 0;
}