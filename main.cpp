
#include <iostream>
#include <stdio.h>
#include <vector>
#include <array>

#include "./h/log.h"
#include "./h/player.h"
#include "./h/vector.h"

using namespace std;

class animal {
    public:
        virtual void print() = 0;
};

// void animal::print() {
//     cout << "Hello" << endl;
// }

class cow : public animal {
    public:
        void print() override;
};

void cow::print() { 
    cout << "This is a cow" << endl;
}

enum Example : unsigned char { A, B, C };

class printable {
    public:
        virtual string get_class_name() = 0;
};

class entity : public printable {
    public:
        string get_class_name() override;
};

string entity::get_class_name() { 
    return "entity";
}

void print(printable *p) { 
    cout << p->get_class_name() << endl;
}

struct generic_class {
    private:
        int x, y;

    public:
        void print() const;
};

void generic_class::print() const {
    cout << "cool bro" << endl;
}


class cool_class {
    private:
        string name;
        mutable int count = 0;

    public:
        const string& get_name() const;
};


const string& cool_class::get_name() const {
    this->count++;
    return this->name;
}






int main(int argc, char **argv) {
    //cow *a = new cow;
    // a->print();

    // std::vector<animal*> v;
    // v.push_back(a);
    // v[0]->print();

    //printable *p = new entity();
    //print(p);

    //int* example = new int[5];
    
    //cout << example[-1] << endl;

    //delete[] example;
    
    //std::array<int, 5> cool_array;
    //cool_array[1] = 5;
    //cout << cool_array[1] << endl;
    
    //const char* str = "Cool";
    //str[0] = 'a';

    //const wchar_t* name = L"Cherno";
    //cout << name << endl;

    //const int* const a = new int(5);
    //a = new int(3);
    //*a = 3;
    //cout << *a << endl;

    //int x = 8;
    //auto f = []() {
    //    cout << "cool lambda" << endl;
    //};

    //f();

    

    return 0;
}
