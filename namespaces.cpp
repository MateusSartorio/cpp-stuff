#include <iostream>

namespace apple {
    void print(const std::string& text) {
        std::cout << text << std::endl;
    }
}

namespace orange {
    void print(const std::string& text) {
        std::string temp = std::string(text);
        
        char temp2 = 0;
        for(int i = 0; i < temp.length()/2; i++) {
            temp2 = temp[i];
            temp[i] = temp[temp.length() - i - 1];
            temp[temp.length() - i - 1] = temp2;
        }

        std::cout << temp << std::endl;
    }
}

int main(int argc, char** argv) {

    apple::print("cool bro");

    orange::print("cool bro");


	return 0;
}
