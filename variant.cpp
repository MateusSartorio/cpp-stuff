#include <iostream>
#include <variant>

using namespace std;

int main(int argc, char** argv) {
	variant<string, int> data;
    data = "Cherno";

    cout << get<string>(data) << endl;
    
    

	return 0;
}
