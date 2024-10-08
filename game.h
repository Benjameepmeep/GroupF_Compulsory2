#pragma once
#include <iostream>
#include <string>

// From game.h (Håvard)
void requestRestart();
int main();

// From Player.h (Benjamin + Wilhelm)
int Wilhelm();
void start();
void receivePlayerInput();

// From Philip.h (Philip)
int RNG(int range = 100, int start = 0);
int startGame();