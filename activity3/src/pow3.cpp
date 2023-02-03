#include <iostream>
#include <cmath>

long long power(int x, unsigned n)
{
    // base condition
    if (n == 0)
    {
        return 1LL;
    }

    if (n & 1)
    { // if `n` is odd
        return x * power(x, n / 2) * power(x, n / 2);
    }

    // otherwise, `n` is even
    return power(x, n / 2) * power(x, n / 2);
}

int main()
{
    int x = -2;
    unsigned n = 10;

    std::cout << "pow(" << x << ", " << n << ") = " << power(x, n) << std::endl;

    return 0;
}
