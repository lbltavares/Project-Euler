#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int x1 = 1, x2 = 1, x3 = 1;
    long int result = 0;
    while (x3 <= 4000000)
    {
        if (x3 % 2 == 0)
            result += x3;
        x1 = x2;
        x2 = x3;
        x3 = x1 + x2;
    }
    printf("%ld\n", result);

    return 0;
}