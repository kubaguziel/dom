#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    unsigned long long n,dzielnik;
    std::cin >> n;
     for (int i = n; i > 0; i--)
        {
            if ((n % i) == 0)
            {
                dzielnik = n / i;
                std::cout << dzielnik << std::endl;
            }

        }   
}