#include <iostream>

#define print(x) std::cout << x << std::endl

void print_sum(int a, int b) {
    std::cout << a << " + " << b << " = " << (a + b) << std::endl;
}

int main(int argc, char** argv) {
	int value = 0;
    print_sum(value++, value++); 

	return 0;
}
