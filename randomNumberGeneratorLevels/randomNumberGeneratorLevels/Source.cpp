//Random Number Generator Levels
//04/19/18
//Jimmy Thai

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <random>

int count = 0;
int numChoice;
int secret;

void level1()
{
	srand(time(NULL));

	secret = rand() % 100 + 1;

	do{
		std::cout << "Please enter a number between 1-100>>>" << std::endl;
		std::cin >> numChoice;

		if (numChoice > secret)
		{
			std::cout << "The number you have chosen is too high!, guess again loser" << std::endl;
			count = count + 1;
		}
		else if (numChoice < secret)
		{
			std::cout << "The number you have chosen is too low!, guess again loser" << std::endl;
		}

	} while (numChoice != secret);

	std::cout << "Congratulations! It took you " << count << " tries!" << std::endl;
}

void level2()
{
	srand(time(NULL));

	secret = rand() % 100 + 1;

	do{
		std::cout << "Please enter a number between 1-100>>>" << std::endl;
		std::cin >> numChoice;

		if (numChoice > secret)
		{
			std::cout << "The number you have chosen is too high!, guess again loser" << std::endl;
			count = count + 1;
		}
		else if (numChoice < secret)
		{
			std::cout << "The number you have chosen is too low!, guess again loser" << std::endl;
		}

	} while (numChoice != secret);

	std::cout << "Congratulations! It took you " << count << " tries!" << std::endl;
}

void level3()
{
	srand(time(NULL));

	secret = rand() % 1000 + 1;

	do{
		std::cout << "Please enter a number between 1-1000>>>" << std::endl;
		std::cin >> numChoice;

		if (numChoice > secret)
		{
			std::cout << "The number you have chosen is too high!, guess again loser" << std::endl;
			count = count + 1;
		}
		else if (numChoice < secret)
		{
			std::cout << "The number you have chosen is too low!, guess again loser" << std::endl;
		}

	} while (numChoice != secret);

	std::cout << "Congratulations! It took you " << count << " tries!" << std::endl;
}

int main()
{
	int levelSelector;

	std::cout << "Please select a level. [1] = Easy, [2] = Medium, [3] = Hard>>> " << std::endl;
	std::cin >> levelSelector;

	switch (levelSelector)
	{
	case 1:
		level1();
		break;
	case 2:
		level2();
		break;
	case 3:
		level3();
		break;
	default:
		break;
	}

	system("pause");
	return 0;
}