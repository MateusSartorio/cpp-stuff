#include <iostream>

#include "./h/array.h"

int main(int argc, char** argv) {
    array<int, 5> data;

    for(int i = 0; i < data.size(); i++)
        data[i] = 2*i;
    
    // for(array<int, 5>::iterator it = data.begin(); it != data.end(); it++)
    //     std::cout << *it << std::endl;

    for(int& i : data)
        std::cout << i << std::endl;

    return 0;
}
