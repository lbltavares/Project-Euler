#include <stdio.h>
#include <stdlib.h>

int testNumber(long long x);

int testNumber(long long x)
{
    int i;
    for (i = 1; i <= 20; i++)
    {
        if (x % i != 0)
            return 0;
    }
    return 1;
}

int main()
{
    long long i;
    for (i = 1;; i++)
    {
        if (testNumber(i))
            break;
    }
    printf("Result: %d\n", i);
    return 0;
}