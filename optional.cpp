#include <fstream>
#include <iostream>
#include <fstream>
#include <optional>

using namespace std;

std::optional<string> read_file_as_string(const string& filepath) {
    ifstream stream(filepath);

    if(stream) {
        stream.close();
        return "cool";
    }

    return {};
}

int main(int argc, char** argv) {
	auto data = read_file_as_string("text.txt");
    if(data.has_value())
        cout << "has value" << endl;

	return 0;
}
