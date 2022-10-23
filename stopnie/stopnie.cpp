
#include <iostream>
#include <iomanip>

int main()
{
	double f;
	double c;
	
	std::cin >> f;
	if (f >= -459.00 && f <= 10000000.00)
	{
		c = (f-32.00)*(5.00/9.00);
		std::cout << std::fixed;
		std::cout << std::setprecision(2) << c;

	}
	
}
