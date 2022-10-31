
#include <iostream>

int main()
{
    int n,biale,czarne;
    std::cin>>n;
    if (n >= 1 && n <= 1000)
    {
        if (n % 2 == 0)
        {
            biale = (n * n) / 2;
            czarne = (n * n) / 2;
        }
        else
        {
            czarne = ((n * n) + 1) / 2;
            biale = (n * n) - czarne;
        }
        std::cout << biale << std::endl;
        std::cout << czarne << std::endl;
    }
}
