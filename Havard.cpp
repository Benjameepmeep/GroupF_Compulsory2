
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "GroupF_Compulsory2.h"

int getGold(){
	srand(static_cast<unsigned int>(time(0))); //Makes a seed using the current time
	unsigned short int goldGathered = rand() % 15 + 10; //random number from 10 to 25
	return goldGathered;
}