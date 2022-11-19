#include <iostream>
#include <iomanip>

long int fib(long int n)
{
    if (n == 1 || n == 2) return 1;
    else return fib(n - 1) + fib(n - 2);
}

int main()
{
    std::cout << fib(5);
}
