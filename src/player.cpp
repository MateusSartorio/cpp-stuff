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

int main(int argc, char** argv) {
    player player(1, 2, 3);

    std::cout << player.to_string() << std::endl;
}
