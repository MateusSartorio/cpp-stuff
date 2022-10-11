#include <iostream>
#include <functional>
#include <algorithm>
#include <ostream>
#include <vector>

void for_each(const std::vector<int>& values, const std::function<void(int)>& func) {
    for(int value : values)
        func(value);
}

int main(int argc, char** argv) {
    std::vector<int> values = { 1, 5, 4, 2, 3 };
    auto it = std::find_if(values.begin(), values.end(), [](int value) { return value > 3; });
    
    std::cout << *it << std::endl;

    int a = 5;

    auto lambda = [=](int value) mutable { a = 10; std::cout << "Value " << a << std::endl; };
    for_each(values, lambda);

	return 0;
}
