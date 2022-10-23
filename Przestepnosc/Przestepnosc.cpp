#include <iostream>

int main()
{
    int rok;
    std::cout << "Podaj rok: ";
    std::cin >> rok;
    if (rok > 1 && rok < 8000)
    {
        if (rok % 4 == 0)
        {
            if (rok % 100 == 0 && rok % 400 != 0)
            {
                std::cout << "NIE";
            }
            else std::cout << "TAK";
        }
        else std::cout << "NIE";
    }
    else std::cout << "blad";
}
