//Switch Statements
//04/19/18
//Jimmy Thai

#include <iostream>
#include <string>

int main()
{
	int bookScanID = 0;
	std::string bookOwner;

	std::cout << "Book ID Number please enter here>>> " << std::endl;
	std::cin >> bookScanID;

	switch (bookScanID)
	{
	case 277364:
		bookOwner = "Mr. Brosius";
			break;
	case 277343:
		bookOwner = "Aaron";
			break;
	case 277362:
		bookOwner = "Brady";
			break;
	case 277346:
		bookOwner = "Shawn";
			break;
	case 277357:
		bookOwner = "Kane";
			break;
	case 326062:
		bookOwner = "Jimmy";
			break;
		default:
			bookOwner = "Invalid";
			break; 
	}
	if (bookOwner == "Invalid")
	{
		std::cout << "Invalid";
	}
	else
		std::cout << bookOwner << std::endl;

	system("pause");
	return 0;
}