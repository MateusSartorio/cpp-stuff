#pragma once

#include <iostream>
#include <string>

struct vector {
    private:
        int x, y, z;

    public:
        vector(int x = 0, int y = 0, int z = 0);
        ~vector();

        vector operator+(vector const& v);
        vector operator^(vector const& v);

        std::string to_string();

        static void print_vector(vector& v);
};

std::ostream& operator<<(std::ostream& os, vector& v);



