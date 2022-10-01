#include "../h/player.h"

player::player(int x, int y, int speed) {
    this->x = x;
    this->y = y;
    this->speed = speed;
}

std::string player::to_string() {
    return "player, x: " + std::to_string(this->x) + ", y: " + std::to_string(this->y) + ", speed: " + std::to_string(this->speed);
}

void player::move(int dx, int dy) {
    this->x += dx;
    this->y += dy;
}

std::ostream& operator<<(std::ostream& os, player& p) {
    return os << p.to_string();
}