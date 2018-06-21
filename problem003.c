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
#define TARGET 600851475143
    long long i;
    long long result = 0;
    for (i = 0; i < (long long)sqrt(TARGET); i++)
    {
        if (isPrime(i))
        {
            if (TARGET % i == 0)
            {
                result = i;
            }
        }
    }
    printf("Result: %lld\n", result);
    return 0;
}