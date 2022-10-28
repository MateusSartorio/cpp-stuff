#include <iostream>
#include "vector.h"

int main(int argc, char** argv) {
    vector<std::string> vec;
    
    vec.push_back("ola");
    vec.push_back("cool bro");
    vec.push_back("even cooler bro");

    for(vector<std::string>::iterator it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << std::endl;

    return 0;
}
