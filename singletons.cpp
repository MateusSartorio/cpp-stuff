#include <iostream>

class random {
    private:
        random() {}
        float i_float() {
            return 0.5f;
        }

    public:
        random(const random&) = delete;

        static random& get() {
            static random instance;
            return instance;
        }

        static float get_float() {
            return get().i_float();
        }

};

int main(int argc, char** argv) {
    auto& s = random::get();
    
    std::cout << s.get_float() << std::endl;

	return 0;
}
