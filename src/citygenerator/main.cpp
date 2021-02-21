#include "spdlog/spdlog.h"
#include "spdlog/sinks/basic_file_sink.h"
#include "NVBEngine/TestHeader.hpp"

int main() {
    spdlog::info("Sample Info output.");
    spdlog::warn("Sample Warn output.");
    spdlog::error("Sample Error output.");
    spdlog::info(fmt::to_string(nvbe::test_function(23)));
    auto filelog = spdlog::basic_logger_mt("sample-logger", "sample-log.txt");

    filelog.get()->info("Sample Info output.");
    filelog.get()->warn("Sample Warn output.");
    filelog.get()->error("Sample Error output.");

    return 0;
}