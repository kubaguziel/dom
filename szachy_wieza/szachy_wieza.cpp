// szachy_wieza.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int main()
{
	unsigned int x1,y1,x2,y2;
	std::cin >> x1 >> y1;
	if (x1 >= 1 && x1 <= 8 && y1 >= 1 && y1 <= 8)
	{
		std::cin >> x2 >> y2;
		if (x2 >= 1 && x2 <= 8 && y2 >= 1 && y2 <= 8)
		{
			if ((x1 != x2 && y1 != y2)|| (x2 == x1 && y2 == y1))
			{
				std::cout << "NIE";
			}
			else std::cout << "TAK";
		}
	}


}
