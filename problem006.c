#include <stdio.h>
#include <stdlib.h>

long long sumOfSquares(int x);
long long squareOfSum(int x);

long long sumOfSquares(int x)
{
    long long result = 0;
    int i;
    for (i = 0; i <= x; i++)
    {
        result += i * i;
    }
    return result;
}

long long squareOfSum(int x)
{
    long long result = 0;
    int i;
    for (i = 0; i <= x; i++)
    {
        result += i;
    }
    return result * result;
}

int main()
{
    printf("Result: %lld\n", squareOfSum(100) - sumOfSquares(100));
    return 0;
}