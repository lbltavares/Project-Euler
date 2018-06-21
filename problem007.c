#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(long long x);

int isPrime(long long x)
{
    if ((x % 2 == 0 && x != 2) || x < 2)
        return 0;
    else if (x == 2)
        return 1;
    long long i;
    for (i = 3; i < (long long)sqrt(x) + 1; i += 2)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    // By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
    // What is the 10001st prime number?
    int i, n = 0;
    for (i = 0; i < 999999; i++)
    {
        if (isPrime(i))
        {
            n++;
            if (n == 10001)
                break;
        }
    }
    printf("Result: %d\n", i);

    return 0;
}