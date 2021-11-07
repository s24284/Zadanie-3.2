// Zadanie 3.2.cpp 
//

#include <iostream>

int main()
{
	char znak;

	do
	{
		
		std::cout << "Podaj swoj znak. Jezeli podasz ten, ktory chce, dam tobie spokoj: \n";
	    std::cin >> znak; //użytkownik podaje znak
	

		if (znak != 't') //reaguje, gdy poda się znak inny od t
		{
			std::cout << "To nie to, sprobuj jeszcze raz!\n";

		}

	}

	while (znak != 't');
	
		
		std::cout << "Brawo, to moj znak. Milego dnia! \n";
	

	return 0;
}

