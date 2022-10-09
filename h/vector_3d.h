#pragma once

#include <iostream>
#include <string>

struct vector_3d {
    private:
        int x, y, z;

    public:
        vector_3d(int x = 0, int y = 0, int z = 0);
        ~vector_3d();

        vector_3d operator+(vector_3d const& v);
        int operator*(vector_3d const& v);

        std::string to_string();

        static void print_vector_3d(vector_3d& v);
};

std::ostream& operator<<(std::ostream& os, vector_3d& v);