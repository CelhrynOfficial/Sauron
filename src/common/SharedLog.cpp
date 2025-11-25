#include "SharedLog.hpp"
#include <iostream>

namespace Common {
    void Logger::Log(const std::string& message){
        std::cout << "[Common Library] " << message << std::endl;
    }
}