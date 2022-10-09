#include <iostream>

#include <tuple>
#include <utility>
#include <functional>

int main(int argc, char** argv) {
    std::tuple<int, int> t = std::make_pair(1, 2);

    std::cout << std::get<0>(t) << std::endl;

	return 0;
}
