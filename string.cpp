#include <iostream>
#include <string>

using namespace std;

static uint32_t alloc_count = 0;

void* operator new (size_t size) {
    alloc_count++;
    return malloc(size);
}

int main(int argc, char** argv) {
    //string_view first_name("cool", 4);
    
    string s = "aaaaaaaaaaaaaaaa";

    cout << alloc_count << endl;

	return 0;
}
