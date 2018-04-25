//Rock Paper Scissors
//04/25/18
//Jimmy Thai

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <time.h>

int main()
{
	int win = 0, tie = 0, lose = 0;
	char ch;

	do{
		int choice;

		std::cout << "Press 1 for Rock, 2 for Paper, 3 for Scissors:" << std::endl;
		std::cin >> choice;
		int bot = rand() % 3 + 1;
		std::cout << "The computer chose: " << bot << std::endl;
		if (choice == 1 && bot == 1){
			std::cout << "Rock hits rock, it's a tie!" << std::endl;
			tie++;
		}
		else if (choice == 1 && bot == 2){
			std::cout << "Rock is crushed by Paper, computer wins!." << std::endl;
			lose++;
		}
		else if (choice == 1 && bot == 3){
			std::cout << "Rock hits Scissors, you win!" << std::endl;
			win++;
		}
		else if (choice == 2 && bot == 1){
			std::cout << "Paper wraps rock, you win!" << std::endl;
			win++;
		}
		else if (choice == 2 && bot == 2){
			std::cout << "Paper crumples Paper, it's a tie!" << std::endl;
			tie++;
		}
		else if (choice == 2 && bot == 3){
			std::cout << "Paper cutted by Scissors, computer wins!" << std::endl;
			lose++;
		}
		else if (choice == 3 && bot == 1){
			std::cout << "Scissors gets hit by Rock, computer wins!" << std::endl;
			lose++;
		}
		else if (choice == 3 && bot == 2){
			std::cout << "Scissors cut Paper, you win!" << std::endl;
			win++;
		}
		else if (choice == 3 && bot == 3){
			std::cout << "Scissors cuts Scissors, it's a tie!" << std::endl;
			tie++;
		}
		else{
			std::cout << "You didn't select anything..." << std::endl;
		}
		std::cout << "Wins: " << win << std::endl;
		std::cout << "Ties:" << tie << std::endl;
		std::cout << "Losses:" << lose << std::endl;
		std::cout << "do you want to play again? [Y] or [N]" << std::endl;
		std::cin >> ch;
	} while (ch == 'Y' || ch == 'y');

	system("pause");
	return 0;
}