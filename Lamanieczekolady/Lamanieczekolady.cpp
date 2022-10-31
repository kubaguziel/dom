// Lamanieczekolady.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

int main()
{
    unsigned int n, m,k;
    std::cin >> n;
    std::cin >> m;
    if (n>=1&&n<=1000000&&m>=1&&m<=1000000)
    {
        std::cin >> k;
        if(k>=1&&k<=1000000)
        {
            if ((k % n == 0 || k % m == 0)&&(m*n)>k)
            {
                std::cout << "TAK";
            }
            else std::cout << "NIE";
        }
        
    }
}
