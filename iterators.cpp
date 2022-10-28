#include <iostream>
#include <vector>
#include <unordered_map>

#define print(x) std::cout << x << std::endl

using namespace std;

int main(int argc, char** argv) {
    /*
    vector<int> values = {1, 2, 3, 4, 5};
    
    for(vector<int>::iterator it = values.begin(); it != values.end(); it++)
        print(*it);
    */

    unordered_map<string, int> map;
    map["Cherno"] = 5;
    map["C++"] = 2;
    
    /*
    for(unordered_map<string, int>::iterator it = map.begin(); it != map.end(); it++) 
        print(it->first);
    */
    for(auto& [key, value] : map) {
        print(key);
        print(value);
    }

	return 0;
}
