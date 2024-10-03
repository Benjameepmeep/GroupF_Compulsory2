#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Philip.h"
using namespace std;

int StartGame() {
    srand(static_cast<unsigned int>(time(0)));
    int turn = rand()%2; //1 = playerturn, 0 = enemyturn
    cout << turn << endl;
    return 0;
}