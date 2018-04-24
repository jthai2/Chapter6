//Higher Lower
//4/20/18
//Jimmy Thai

#include <iostream>
#include <stdio.h>
#include <stdlib.h>    /* srand, rand*/
#include <time.h>      /* time */
#include <random>

int main()
{
	int count = 0;
	int numChoice;
	int secret;
	/* initialize random seed: */
	srand(time(NULL));
	/* generate secret number between 1 and 30: */
	secret = rand() % 30 + 1;

	do{
		std::cout << "Please guess the number between 1-30" << std::endl;
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

	std::cout << "Congratulations! You have chosen the number." << std::endl;

	system("pause");
	return 0;
}