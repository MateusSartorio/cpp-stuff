#include <iostream>

int main(int argc, char** argv) {
    int a = 50;
    double b = *((double*) (void*) &a);
    int c = *((int*) (void*) &b);
    std::cout << c << std::endl;

	return 0;
}
