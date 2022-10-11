#include <iostream>
#include <string>

using namespace std;

template<typename T>
void print(T value) {
    cout << value << endl;
}

template<typename T, int N>
class array {
    private:
        T size[N];
    public:
        int get_size() {
            return N;
        }
};

int main(int argc, char** argv) {
    /*
    print<int>(1);
    print<string>("ola");
    */

    array<string, 10> a;
    cout << a.get_size() << endl;
    
    return 0;
}
