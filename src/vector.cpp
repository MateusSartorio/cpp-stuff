#include "../h/vector.h"

vector::vector(int x, int y, int z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

vector::~vector() {
    return;
}

vector vector::operator+(const vector &v) {
    return vector(this->x + v.x, this->y + v.y, this->z + v.z);
}

vector vector::operator^(const vector &v) {
    return vector(this->x * v.x, this->y * v.y, this->z * v.z);
}

std::string vector::to_string() {
    return "<" + std::to_string(this->x) + ", " + std::to_string(this->y) + ", " + std::to_string(this->z) + ">";
}
