#include <iostream>
#include <string>
#include <stdlib.h>
#include <string.h>

#define print(x) std::cout << x << std::endl

class string {
    private:
        char* data;
        uint32_t size;

    public:
        string() = default;

        string(const char* str) {
            print("created");
            this->size = strlen(str);
            this->data = new char[this->size];
            memcpy(this->data, str, this->size);
        }

        string(const string& other) {
            print("copied");
            this->size = other.size;
            this->data = new char[other.size];
            memcpy(this->data, other.data, other.size);
        }

        string(string&& other) {

        }

        ~string() {
            delete[] this->data;
        }
};

class entity {
    private:
        string name;

    public:
        entity(const string& name)
            : name(name)
        {
            
        }
};

int main(int argc, char** argv) {
    	

	return 0;
}
