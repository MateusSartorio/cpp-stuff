#include <iostream>
#include <chrono>

class timer {
    private:
        std::chrono::time_point<std::chrono::high_resolution_clock> start_time_point;

    public:
        timer() {
            this->start_time_point = std::chrono::high_resolution_clock::now();
        }
        ~timer() {
            std::chrono::time_point<std::chrono::high_resolution_clock> end_time_point = std::chrono::high_resolution_clock::now();
            auto start = std::chrono::time_point_cast<std::chrono::microseconds>(this->start_time_point).time_since_epoch().count();
            auto end = std::chrono::time_point_cast<std::chrono::microseconds>(end_time_point).time_since_epoch().count();
            long long time = end - start;
            double ms = time*0.001;
            std::cout << "the duration was: " << ms << " ms" << std::endl;
        }
};

int main(int argc, char** argv) {
    timer t;

    /*
    int value = 0;
    for(int i = 0; i < 10000000; i++)
        value += 2;

    std::cout << value << std::endl;
    */

	return 0;
}
