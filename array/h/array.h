#pragma once

#include <iostream>

template<typename T, size_t s>
class array {
    private:
        T data[s];

    public:
        array() {

        }

        size_t size() const {
            return s;
        }

        T& operator[](size_t index) {
            if(!(index < 5)) {
                std::cout << "Array out of bounds exception" << std::endl;
                exit(1);
            }

            return this->data[index];
        }

        const T& operator[](size_t index) const {
            return this->data[index];
        }
};