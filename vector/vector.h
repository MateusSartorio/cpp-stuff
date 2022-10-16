#pragma once

#include <iostream>

template<typename T>
class vector {
    private:
        T* data = nullptr
        size_t size = 0;
        size_t capacity = 2;

        void realloc(size_t new_capacity) {
            T* new_block = new T[new_capacity];

            size_t size = this->size;
            

            for(size_t i = 0; i < this->size; i++)
                new_block[i] = this->data[i];

            delete[] this->data;
            this->data = new_block;
            this->capacity = new_capacity;
        }

    public:
        vector() {
            realloc(this->capacity);
        }
};