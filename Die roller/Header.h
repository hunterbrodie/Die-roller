#include <iostream>
#include <string>
#include <sstream>
#include <time.h>

void diceroller(int amount, int die)
{
	srand(time(NULL));
	for (int x = 0; x < amount; x++)
	{
		std::cout << (rand() % die) + 1 << "\n";
	}
}