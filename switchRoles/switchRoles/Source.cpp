//Switch Roles
//04/25/18
//Jimmy Thai

#include<string>
#include<random>
#include<iostream>
#include<time.h>

int main()
{
	int numMax, amountAttempted, numMin, compGuess;
	char userInput;

	std::cout << "What is your max range for your number?>>>" << std::endl;
	std::cin >> numMax;
	std::cout << "What is your min range for your number?>>>" << std::endl;
	std::cin >> numMin;

	guessAgain:

	srand(time(0));
	compGuess = rand() % numMax + numMin;

	std::cout << "Is " << compGuess << " your number? Press ['Y' or 'N'] >>>" << std::endl;
	std::cin >> userInput;

	amountAttempted++;

	if (!(toupper(userInput) == 'Y'))
		goto guessAgain;
	else
		std::cout << "The computer has guessed the number!" << std::endl;
		std::cout << "It took " << amountAttempted << " tries for the computer to guess the answer!" << std::endl;

	system("pause");
	return 0;
}