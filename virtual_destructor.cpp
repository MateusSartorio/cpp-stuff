#include <iostream>

class Base {
    public:
        Base() { std::cout << "base constructer\n"; }
        virtual ~Base() { std::cout << "base destructor\n"; }
};

class Derived: public Base {
    public:
        Derived() { std::cout << "derived constructor\n"; }
        virtual ~Derived() { std::cout << "derived destructor\n"; }
};

int main(int argc, char** argv) {
    Base* b = new Base;
    delete b;
    
    Base* d = new Derived;
    delete d;

	return 0;
}
