#include <iostream>
#include <string>
#include <vector>
#include <array>

#define print(x) std::cout << x << std::endl;

template<int N>
void print_array(std::array<int, N>& a) {
    for(int i = 0; i < a.size(); i++)
        print(a[i]);
}

int main(int argc, char** argv) {
    int a = 5;
    auto b = 10;

    std::vector<std::string> strings;
    strings.push_back("apple");
    strings.push_back("orange");
    
    /*
    for(std::vector<std::string>::iterator it = strings.begin(); it != strings.end(); it++)
        std::cout << *it << std::endl;

    for(auto it = strings.begin(); it != strings.end(); it++)
        std::cout << *it << std::endl;
    */
    
    std::array<int, 3> d;
    d[0] = 1;
    d[1] = 2;
    d[2] = 5;
    print_array<3>(d);
    
	return 0;
}
