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

        class iterator {
            public:
                iterator(T* ptr)
                    : ptr(ptr) {}

                T& operator*() const {
                    return *(this->ptr);
                }

                T* operator->() {
                    return this->ptr;
                }

                iterator& operator++() {
                    this->ptr++;
                    return *this;
                }

                iterator& operator++(int) {
                    iterator& temp = *this;
                    ++(*this);
                    return temp;
                }

                bool operator==(const iterator& other) const {
                    return this->ptr == other.ptr;
                }

                bool operator!=(const iterator& other) const {
                    return !(*this == other);
                }

            private:
                T* ptr;
        };

        iterator begin() {
            return iterator(this->data);
        }

        iterator end() {
            return iterator(this->data + s);
        }
};
