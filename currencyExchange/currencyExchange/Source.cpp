//Currency Exchange
//04/25/18
//Jimmy THai

#include <iostream>
#include <string>
std::string currencyConvert;

double canadianDollar = .9813, Euro = .757, indianRupee = 52.53, japaneseYen = 80.92, mexicanPeso = 13.1544, southAfricanRand = 7.7522, britishPound = .6178;
double currency;

int main()
{
	std::cout << "How much money do you want to convert?>>>" << std::endl;
	std::cin >> currency;

	CurrencyConversion:

	std::cout << "What currency do you want to convert? [CanadianDollar, Euro, Rupee, Yen, Peso, Rand, or Pound]" << std::endl;
	std::cin >> currencyConvert;

	if (currencyConvert == "CanadianDollar")
		std::cout << "Your currency converted is: " << currency * canadianDollar << " canadian dollars." << std::endl;
	else if (currencyConvert == "Euro")
		std::cout << "Your currency converted is: " << currency * Euro << " Euros." << std::endl;
	else if (currencyConvert == "Rupee")
		std::cout << "Your currency converted is: " << currency * indianRupee << " Rupees." << std::endl;
	else if (currencyConvert == "Yen")
		std::cout << "Your currency converted is: " << currency * japaneseYen << " Yen." << std::endl;
	else if (currencyConvert == "Peso")
		std::cout << "Your currency converted is: " << currency * mexicanPeso << " Pesos." << std::endl;
	else if (currencyConvert == "Rand")
		std::cout << "Your currency converted is: " << currency * southAfricanRand << " Rands." << std::endl;
	else if (currencyConvert == "Pound")
		std::cout << "Your currency converted is: " << currency * britishPound << " Pounds." << std::endl;
	else
		goto CurrencyConversion;

	system("pause");
	return 0;
}