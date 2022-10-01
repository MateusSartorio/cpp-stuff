
#include <iostream>
#include <stdio.h>
#include <vector>

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

void cow::print() { cout << "This is a cow" << endl; }

enum Example : unsigned char { A, B, C };

class printable {
public:
  virtual string get_class_name() = 0;
};

class entity : public printable {
public:
  string get_class_name() override;
};

string entity::get_class_name() { return "entity"; }

void print(printable *p) { cout << p->get_class_name() << endl; }







    



int main(int argc, char **argv) {
    cow *a = new cow;
    // a->print();

    // std::vector<animal*> v;
    // v.push_back(a);
    // v[0]->print();

    printable *p = new entity();
    print(p);

    return 0;
}
