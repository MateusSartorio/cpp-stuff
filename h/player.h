#pragma once

#include <iostream>
#include <string>

class player {
    private:
        int x, y;
        int speed;
    
    public:
        player(int x, int y, int speed);
        std::string to_string();
        void move(int dx, int dy);
};