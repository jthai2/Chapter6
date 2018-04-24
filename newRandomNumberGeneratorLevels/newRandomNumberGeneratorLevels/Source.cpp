//Random Number Generator With Levels
//04/24/18
//Jimmy Thai

#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>

int level1(int count)
{
	char userPlayAgain;
	int userGuess, amountAttempted;
playAgain:
	for (int n = 5; n > 0; n--)
	{
		srand(time(0));
		int randomNumber = rand() % 10 + 1;
	guessAgain:
		amountAttempted++;
		std::cout << "Amount attempted: " << amountAttempted << std::endl;
		std::cout << "Guess what the random number is [1-10]" << std::endl;
		std::cin >> userGuess;
		if (userGuess > randomNumber)
		{
			std::cout << "You guessed higher. " << std::endl;
			goto guessAgain;
		}
		else if (userGuess < randomNumber)
		{
			std::cout << "You guessed lower. " << std::endl;
			goto guessAgain;
		}
		else
			std::cout << "You guessed the number! Congratulations! Game Over. \n \n";
		std::cout << "You have " << n - 1 << " games left." << std::endl;
	}
	std::cout << "Would you like to play again? 'Y' or 'N' " << std::endl;
	std::cin >> userPlayAgain;
	amountAttempted = 0;
	if (tolower(userPlayAgain) == 'y')
		goto playAgain;
	system("pause");
	return 0;
}
int level2(int count)
{
	char userPlayAgain;
	int userGuess, amountAttempted;
playAgain:
	for (int n = 5; n > 0; n--)
	{
		srand(time(0));
		int randomNumber = rand() % 100 + 1;
	guessAgain:
		amountAttempted++;
		std::cout << "Amount attempted: " << amountAttempted << std::endl;
		std::cout << "Guess what the random number is [1-100]" << std::endl;
		std::cin >> userGuess;
		if (userGuess > randomNumber)
		{
			std::cout << "You guessed higher. " << std::endl;
			goto guessAgain;
		}
		else if (userGuess < randomNumber)
		{
			std::cout << "You guessed lower. " << std::endl;
			goto guessAgain;
		}
		else
			std::cout << "You guessed the number! Congratulations! Game Over. \n \n";
		std::cout << "You have " << n - 1 << " games left." << std::endl;
	}
	std::cout << "Would you like to play again? 'Y' or 'N' " << std::endl;
	std::cin >> userPlayAgain;
	amountAttempted = 0;
	if (tolower(userPlayAgain) == 'y')
		goto playAgain;
	system("pause");
	return 0;
}
int level3(int count)
{
	char userPlayAgain;
	int userGuess, amountAttempted;
playAgain:
	for (int n = 5; n > 0; n--)
	{
		srand(time(0));
		int randomNumber = rand() % 1000 + 1;
	guessAgain:
		amountAttempted++;
		std::cout << "Amount attempted: " << amountAttempted << std::endl;
		std::cout << "Guess what the random number is [1-1000]" << std::endl;
		std::cin >> userGuess;
		if (userGuess > randomNumber)
		{
			std::cout << "You guessed higher. " << std::endl;
			goto guessAgain;
		}
		else if (userGuess < randomNumber)
		{
			std::cout << "You guessed lower. " << std::endl;
			goto guessAgain;
		}
		else
			std::cout << "You guessed the number! Congratulations! Game Over. \n \n";
		std::cout << "You have " << n - 1 << " games left." << std::endl;
	}
	std::cout << "Would you like to play again? 'Y' or 'N' " << std::endl;
	std::cin >> userPlayAgain;
	amountAttempted = 0;
	if (tolower(userPlayAgain) == 'y')
		goto playAgain;
	system("pause");
	return 0;
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