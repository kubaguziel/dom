#include <iostream>

float oceny[5];
float suma=0, srednia;

int main()
{

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Podaj ocene: ";
		std::cin >> oceny[i];
		suma += oceny[i];
	}
	srednia = suma / 5;
	std::cout << "Srednia wynosi: " << srednia;
}
