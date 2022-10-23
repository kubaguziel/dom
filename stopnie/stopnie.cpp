
#include <iostream>

int main()
{
	long int f;
	float c=0.00;
	
	std::cin >> f;
	if (f >= -459 && f <= 1000000000)
	{
		c = (f-32)*(5/9);
		std::cout.precision(3);
		std::cout << c;
	}
	
}
