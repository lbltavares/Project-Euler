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
    // The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
    // Find the sum of all the primes below two million.
    long long i, sum = 0;
    for (i = 0; i < 2000000; i++)
    {
        sum += isPrime(i) * i;
    }
    printf("Result: %lld\n", sum);

    return 0;
}