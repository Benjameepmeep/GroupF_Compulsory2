#pragma once
#include <iostream>
#include <string>

bool requestRestart();
int main();

// From Player.h (Wilhelm & Benjamin)
int Wilhelm();
void start();
void receivePlayerInput();

// From Philip.h (Philip)
int RNG(int range = 100, int start = 0);
int startGame();