#include <iostream>
#include <thread>

#define print(x) std::cout << x << std::endl;

static bool finished = false;

void do_work() {
    while(!finished) {
        print("working...");
    }
}

int main(int argc, char** argv) {
    std::thread worker(do_work);

    std::cin.get();
    finished = true;
    
    worker.join();

	return 0;
}
