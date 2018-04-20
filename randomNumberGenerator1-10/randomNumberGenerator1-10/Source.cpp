//Random Number Generator 1-10
//04/10/18
//Jimmy Thai

#include<random>
#include<time.h>
#include<iostream>

int main()
{
	srand(time(0));
	int randomNumber = rand() % 10 + 1;
	std::cout << "Your random number is " << randomNumber << std::endl;

	system("pause");
	return 0;
}