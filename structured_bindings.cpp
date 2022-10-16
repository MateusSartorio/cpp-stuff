#include <iostream>
#include <string>
#include <tuple>

std::tuple<std::string, int> create_person() {
    return { "Cherno", 24 };
}

int main(int argc, char** argv) {
    auto[name, age] = create_person();
    
    std::cout << name << std::endl;

	return 0;
}
