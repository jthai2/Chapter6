//Random Number Generator With Levels
//04/24/18
//Jimmy Thai

#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>

int numChoice;
int secret;

int r;

int level1(int count)
{
	do
	{
		srand(time(NULL));

		secret = rand() % 10 + 1;

		std::cout << "Please pick a number between 1-10>>>" << std::endl;
		std::cin >> numChoice;

		if (numChoice > secret)
		{
			std::cout << "The number you have chose is too high!, guess again>>>" << std::endl;
			count = count + 1;
		}
		else if (numChoice < secret)
		{
			std::cout << "The number you have chosen is too low!, guess again>>>" << std::endl;
			count = count + 1;
		}
	} while (numChoice != secret || count == 10);
	r = count;
	return r;
}
int level2(int count)
{
	do
	{
		srand(time(NULL));

		secret = rand() % 100 + 1;

		std::cout << "Please pick a number between 1-100>>>" << std::endl;
		std::cin >> numChoice;

		if (numChoice > secret)
		{
			std::cout << "The number you have chose is too high!, guess again>>>" << std::endl;
			count = count + 1;
		}
		else if (numChoice < secret)
		{
			std::cout << "The number you have chosen is too low!, guess again>>>" << std::endl;
			count = count + 1;
		}
	} while (numChoice != secret || count == 100);
	r = count;
	return r;
}
int level3(int count)
{
	do
	{
		srand(time(NULL));

		secret = rand() % 1000 + 1;

		std::cout << "Please pick a number between 1-1000>>>" << std::endl;
		std::cin >> numChoice;

		if (numChoice > secret)
		{
			std::cout << "The number you have chose is too high!, guess again>>>" << std::endl;
			count = count + 1;
		}
		else if (numChoice < secret)
		{
			std::cout << "The number you have chosen is too low!, guess again>>>" << std::endl;
			count = count + 1;
		}
	} while (numChoice != secret || count == 1000);
	r = count;
	return r;
}


int main()
{
	int level1Count = 1, level2Count = 1, level3Count = 1, level1CountTotal;

	int levelChoice;

	for (int i = 0; 1 < 5; ++i)
	{
		std::cout << "Choose your level>>>" << std::endl;
		std::cin >> levelChoice;
		switch (levelChoice)
		{
		case 1:
			level1(level1Count);
			break;
		case 2:
			level2(level2Count);
		case 3:
			level3(level3Count);
		default:
			break;
		}
		level1CountTotal = level1Count + level2Count + level3Count;
	}
}