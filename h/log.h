#pragma once

#include <iostream>

class log {
    private:
        int log_level;

        void warn(const char* message);
        void error(const char* message);
        void info(const char* message);
    
    public:
        log(int level = 0);
        void set_level(int level);

        void print(const char* message);
};

