
#include <iostream>
#include <vector>
#include <array>
#include <memory>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
#include "./h/log.h"
#include "./h/player.h"
#include "./h/vector_3d.h"
*/

using namespace std;

void function() {
    static int i = 0;

    cout << i++ << endl;
}

int main(int argc, char** argv) {
    for(int i = 0; i < 5; i++)
        function();

    return 0;
}
#include <iostream>

int main(int argc, char** argv) {
	
	return 0;
}
