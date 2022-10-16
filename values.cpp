#include <iostream>

#define print(x) std::cout << x << std::endl

int& get_value() {
    static int value = 10;
    return value;
}

int main(int argc, char** argv) {
    int i = 10;

    get_value() = 2;

    print(get_value());

	return 0;
}
