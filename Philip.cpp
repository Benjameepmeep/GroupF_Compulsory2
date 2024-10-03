#include <iostream>
#include <cstdlib>
#include "Philip.h"
using namespace std;

int StartGame() {
    for (int i = 0; i < 10; i++)
    {
        cout << rand()%2 << endl;
    }
    int turn = rand() % 2; //1 = playerturn, 0 = enemyturn
    cout << turn << endl;
    return 0;
}