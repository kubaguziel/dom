#include <iostream>

int main()
{
    long int n,dzielnik;
    std::cin >> n;
    if (n>0&&n<=1000000000000)
    {
        for (int i = n; i > 0; i--)
        {
            if ((n % i) == 0)
            {
                dzielnik = n / i;
                std::cout << dzielnik << std::endl;
            }

        }
    }
    
}
