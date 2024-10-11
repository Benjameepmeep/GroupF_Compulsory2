#pragma once
#include <iostream>
#include <string>
bool requestRestart();

// From Player.h (Wilhelm & Benjamin)
void GameLoop();
void start();
void receivePlayerInput();

// From Philip.h (Philip)
int RNG(int range = 100, int start = 0);
int startGame();

//Gold system (Håvard)
int goldGainAmount();
void getGold();
void loseGold();