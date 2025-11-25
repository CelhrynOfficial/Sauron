#pragma once
#include <string>

namespace Common {

    class Logger {
    public:
        static void Log(const std::string& message);
    };

}