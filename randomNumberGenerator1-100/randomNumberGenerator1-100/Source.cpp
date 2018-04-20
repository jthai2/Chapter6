#include<random>
#include<time.h>
#include<iostream>
int main()
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