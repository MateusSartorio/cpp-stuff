#include "../h/log.h"

log::log(int level) {
    this->set_level(level);
}

void log::print(const char* message) {
    switch (this->log_level)
    {
    case 0:
        this->info(message);
        break;
    case 2:
        this->warn(message);
        break;
    case 3:
        this->error(message);
        break;    
    default:
        std::cout << "Please enter a valid log level!" << std::endl;
        break;
    }
}

void log::set_level(int level) {
    this->log_level = level;
}

void log::warn(const char* message) {
    std::cout << "[WARNING]: " << message << std::endl;
}

void log::error(const char* message) {
    std::cout << "[ERROR]: " << message << std::endl;
}

void log::info(const char* message) {
    std::cout << "[INFO]: " << message << std::endl;
}