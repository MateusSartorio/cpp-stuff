#pragma once

#include <iostream>

template<typename vector>
class vector_iterator {
    public:
        using value_type = typename vector::value_type;
        using pointer_type = value_type*;
        using reference_type = value_type&;

        vector_iterator(pointer_type ptr)
            : ptr(ptr) {}

        vector_iterator& operator++() {
            this->ptr++;
            return *this;
        }

        vector_iterator operator++(int) {
            vector_iterator it = *this;
            ++(*this);
            return it;
        }

        vector_iterator& operator--() {
            this->ptr--;
            return *this;
        }

        vector_iterator& operator--(int) {
            vector_iterator it = *this;
            --(*this);
            return it;
        }

        reference_type operator[](int index) {
            return this->data + index;
        }

        pointer_type operator->() {
            return this->ptr;
        }

        reference_type operator*() {
            return *(this->ptr);
        }

        bool operator==(const vector_iterator& other) const {
            return this->ptr == other.ptr;
        }

        bool operator!=(const vector_iterator& other) const {
            return !(*this == other);
        }

    private:
        pointer_type ptr;
};

template<typename T>
class vector {
    public:
        using value_type = T;
        using iterator = vector_iterator<vector<T>>;

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
                realloc(2*this->size);

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

        iterator begin() {
            return iterator(this->data);
        }

        iterator end() {
            return iterator(this->data + this->size);
        }
};
