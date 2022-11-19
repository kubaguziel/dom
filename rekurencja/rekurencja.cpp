#include <iostream>
#include <iomanip>

long int fib( int n)
{
    if (n == 1 || n == 2) return 1;
    else return fib(n - 1) + fib(n - 2);
}

long int silnia(int n)
{
    if (n == 0) return 1;
    else return n * silnia(n - 1);
}

long int potega(int p, int w)
{
    if (w == 0) return 1;
    else return p* potega(p, w - 1);
}

int main()
{
    std::cout << fib(5)<<std::endl;
    std::cout << silnia(3)<<std::endl;
    std::cout << potega(2, 4) << std::endl;




}
