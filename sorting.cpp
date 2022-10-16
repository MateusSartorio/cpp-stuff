#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main(int argc, char** argv) {
    std::vector<int> values = {3, 5, 1, 4, 2};
    std::sort(values.begin(), values.end(), [](int a, int b) { return a < b; });

    for(auto& value : values)
        std::cout << value << std::endl;

	return 0;
}
