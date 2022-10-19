#pragma once

#include <iostream>

template<typename T>
class vector {
    private:
        T* data = nullptr;
        size_t size = 0;
        size_t capacity = 2;

        void realloc(size_t new_capacity) {
            T* new_block = new T[new_capacity];

            if(new_capacity < size)
                this->size = new_capacity;

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

        void push_back(const T& value) {
            if(this->size >= this->capacity)
                realloc((3/2)*this->size);

            this->data[this->size++] = value;
        }

        size_t get_size() const {
            return this->size;
        }

        size_t get_size() {
            return this->size;
        }

        T& operator[](size_t index) const {
            return this->data[index];
        }

        T& operator[](size_t index) {
            return this->data[index];
        }
};