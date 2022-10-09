#include "../h/vector_3d.h"

vector_3d::vector_3d(int x, int y, int z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

vector_3d::~vector_3d() {
    return;
}

vector_3d vector_3d::operator+(const vector_3d &v) {
    return vector_3d(this->x + v.x, this->y + v.y, this->z + v.z);
}

int vector_3d::operator*(const vector_3d &v) {
    return this->x * v.x + this->y * v.y + this->z * v.z;
}

std::string vector_3d::to_string() {
    return "<" + std::to_string(this->x) + ", " + std::to_string(this->y) + ", " + std::to_string(this->z) + ">";
}

void vector_3d::print_vector_3d(vector_3d& v) {
    std::cout << v << std::endl;
}

std::ostream& operator<<(std::ostream& os, vector_3d& v) {
    return os << v.to_string();
}