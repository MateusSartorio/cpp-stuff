#include <iterator>
#include <stdio.h>
#include <iostream>

#include "./h/vector.h"

int main(int argc, char** argv) {
    vector a(1, 1, 1);
    vector b(0, 1, 0);

    vector c = a ^ b;

    std::cout << c.to_string() << std::endl;

    return 0;
}
