#include <iostream>
#include <string>

class entity {
    public:
        virtual void print_name() {}
};

class player: public entity {
};

class enemy: public entity {
};

int main(int argc, char** argv) {
    entity* actually_player = new player;
    entity* actually_enemy = new enemy;
    
    player* p1 = dynamic_cast<player*>(actually_player);
    std::cout << p1 << std::endl;

    player* p2 = dynamic_cast<player*>(actually_enemy);
    std::cout << p2 << std::endl;


	return 0;
}
