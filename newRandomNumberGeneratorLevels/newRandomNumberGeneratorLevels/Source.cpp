//Random Number Generator With Levels
//04/24/18
//Jimmy Thai

#include<random>
#include<time.h>
#include<iostream>
#include<string>

int main()
{
	char userPlayAgain;
	int userGuess, amountAttempted, difficulty;
	std::string userPassword;

playAgain:

	std::cout << "Do you know the password?" << std::endl;
	std::cin >> userPassword;
	if (userPassword == "Jimmy")
	{
		std::cout << "Super secret easy level" << std::endl;
		for (int n = 5; n > 0; n--)
		{
			srand(time(0));
			int randomNumber = rand() % 4 + 1;
		guessAgainSecret:
			amountAttempted++;
			std::cout << "Attempt number: " << amountAttempted << "." << std::endl;
			std::cout << "Guess what the random number is [1-4]" << std::endl;
			std::cin >> userGuess;
			if (userGuess > randomNumber)
			{
				std::cout << "You guessed higher than the random number." << std::endl;
				goto guessAgainSecret;
			}
			else if (userGuess < randomNumber)
			{
				std::cout << "You guessed lower than the random number. " << std::endl;
				goto guessAgainSecret;
			}
			else
				std::cout << "You guessed the number! Game Over." << std::endl;
			std::cout << "You have " << n - 1 << " games remaining." << std::endl;
		}
		if (amountAttempted < 10)
		{
			srand(time(0));
			int randomNumber = rand() % 3 + 1;
		guessAgainSecretSpecial:
			amountAttempted++;
			std::cout << "Attempt number: " << amountAttempted << "." << std::endl;
			std::cout << "Guess what the random number is [1-3]" << std::endl;
			std::cin >> userGuess;
			if (userGuess > randomNumber)
			{
				std::cout << "You guessed higher than the random number." << std::endl;
				goto guessAgainSecretSpecial;
			}
			else if (userGuess < randomNumber)
			{
				std::cout << "You guessed lower than the random number. " << std::endl;
				goto guessAgainSecretSpecial;
			}
			else
				std::cout << "You guessed the number! Game Over." << std::endl;
		}
	}
	amountAttempted = 0;
	std::cout << "What difficulty would you like to do? [1 = easy, 2 = medium, 3 = hard]" << std::endl;
	std::cin >> difficulty;
	switch (difficulty)
	{
	case 1:
		for (int n = 5; n > 0; n--)
		{
			srand(time(0));
			int randomNumber = rand() % 10 + 1;
		guessAgain:
			amountAttempted++;
			std::cout << "Attempt number: " << amountAttempted << "." << std::endl;
			std::cout << "Guess what the random number is [1-10]" << std::endl;
			std::cin >> userGuess;
			if (userGuess > randomNumber)
			{
				std::cout << "You guessed higher than the random number." << std::endl;
				goto guessAgain;
			}
			else if (userGuess < randomNumber)
			{
				std::cout << "You guessed lower than the random number. " << std::endl;
				goto guessAgain;
			}
			else
				std::cout << "You guessed the number! Game Over." << std::endl;
			std::cout << "You have " << n - 1 << " games remaining." << std::endl;
		}
	case 2:
		for (int n = 5; n > 0; n--)
		{

			srand(time(0));
			int randomNumber = rand() % 100 + 1;
		guessAgain2:
			amountAttempted++;
			std::cout << "Attempt number: " << amountAttempted << "." << std::endl;
			std::cout << "Guess what the random number is [1-100]" << std::endl;
			std::cin >> userGuess;
			if (userGuess > randomNumber)
			{
				std::cout << "You guessed higher than the random number." << std::endl;
				goto guessAgain2;
			}
			else if (userGuess < randomNumber)
			{
				std::cout << "You guessed lower than the random number. " << std::endl;
				goto guessAgain2;
			}
			else
				std::cout << "You guessed the number! Game Over." << std::endl;
			std::cout << "You have " << n - 1 << " games remaining." << std::endl;
		}
	case 3:
		for (int n = 5; n > 0; n--)
		{

			srand(time(0));
			int randomNumber = rand() % 1000 + 1;
		guessAgain3:
			amountAttempted++;
			std::cout << "Attempt number: " << amountAttempted << "." << std::endl;
			std::cout << "Guess what the random number is [1-1000]" << std::endl;
			std::cin >> userGuess;
			if (userGuess > randomNumber)
			{
				std::cout << "You guessed higher than the random number." << std::endl;
				goto guessAgain3;
			}
			else if (userGuess < randomNumber)
			{
				std::cout << "You guessed lower than the random number. " << std::endl;
				goto guessAgain3;
			}
			else
				std::cout << "You guessed the number! Game Over." << std::endl;
			std::cout << "You have " << n - 1 << " games remaining." << std::endl;
		}
	}
	if (amountAttempted < 20)
	{
		std::cout << "Bonus round!" << std::endl;
		{
			srand(time(0));
			int randomNumber = rand() % 3 + 1;
		guessAgainSpecial:
			amountAttempted++;
			std::cout << "Attempt number: " << amountAttempted << "." << std::endl;
			std::cout << "Guess what the random number is [1-3]" << std::endl;
			std::cin >> userGuess;
			if (userGuess > randomNumber)
			{
				std::cout << "You guessed higher than the random number." << std::endl;
				goto guessAgainSpecial;
			}
			else if (userGuess < randomNumber)
			{
				std::cout << "You guessed lower than the random number. " << std::endl;
				goto guessAgainSpecial;
			}
			else
				std::cout << "You guessed the number! Game Over." << std::endl;
		}
	}
	std::cout << "Would you like to play again? 'Y' or 'N' " << std::endl;
	std::cin >> userPlayAgain;

	amountAttempted = 0;

	if (tolower(userPlayAgain) == 'y')
		goto playAgain;

	system("pause");
	return 0;
}