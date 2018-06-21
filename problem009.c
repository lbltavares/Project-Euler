#include <stdio.h>
#include <stdlib.h>

int isTriplet(int a, int b, int c);

int isTriplet(int a, int b, int c)
{
    if (a < b && b < c && a * a + b * b == c * c)
        return 1;
    return 0;
}

int main()
{
    // A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
    // a2 + b2 = c2
    // For example, 3² + 4² = 9 + 16 = 25 = 52.
    // There exists exactly one Pythagorean triplet for which a + b + c = 1000.
    // Find the product abc.
    int a, b, c;
    for (c = 1; c < 1000; c++)
    {
        for (b = 0; b < c; b++)
        {
            for (a = 0; a < b; a++)
            {
                if (isTriplet(a, b, c) && a + b + c == 1000)
                {
                    long long product = a * b * c;
                    printf("%d * %d * %d = %lld\n", a, b, c, product);
                    return 0;
                }
            }
        }
    }
    return 0;
}