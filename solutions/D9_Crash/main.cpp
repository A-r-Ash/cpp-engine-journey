#include <iostream>

int depth = 0;

int turnB(int n);

int turnA(int n)
{
    ++depth;
    std::cout << "A(" << n << ") depth=" << depth << '\n';
    if (n <= 0)
        return 0;
    return turnB(n - 1);
}

int turnB(int n)
{
    ++depth;
    std::cout << "B(" << n << ") depth=" << depth << '\n';
    if (n <= 0)
        return 0;
    return turnA(n - 1);
}

int main()
{
    std::cout << "Start\n";
    turnA(5);
    std::cout << "Done\n";
    return 0;
}