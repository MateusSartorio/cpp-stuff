#include <iostream>
#include <vector>

void hello_world() {
    std::cout << "hello world!" << std::endl;
}

typedef void(*hello_world_function)();

void for_each(const std::vector<int>& values, void(*func)(int)) {
    for(int i : values)
        func(i);
}


int main(int argc, char** argv) {
    /*
    hello_world_function f = hello_world;

    f();
    */

    std::vector<int> values = { 1, 2, 3, 4, 5, 6 };
    for_each(values, [](int value) { std::cout << value << std:: endl; });

	return 0;
}
