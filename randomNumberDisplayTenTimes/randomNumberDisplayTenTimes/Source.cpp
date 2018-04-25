//Random Number Display 10 Times
//04/25/18
//Jimmy Thai

#include <iostream>
#include <random>
#include <time.h>

int main()
{
	int randomNumber;

	for (int n = 0; n < 10; n++)
	{
		srand(time(NULL));
		randomNumber = rand() % 20 + 1;

		std::cout << randomNumber << std::endl;
	}

	system("pause");
	return 0;
}