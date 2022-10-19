#include <iostream>
#include "vector.h"

int main(int argc, char** argv) {
    vector<std::string> vec;
    vec.push_back("ola");

    std::cout << vec[0] << std::endl;

    return 0;
}