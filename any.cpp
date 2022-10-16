#include <iostream>
#include <any>

using namespace std;

int main(int argc, char** argv) {
	any data = 2;
    data = string("cherno");
    
    cout << any_cast<string>(data) << endl;

	return 0;
}
