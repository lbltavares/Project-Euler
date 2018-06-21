#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(int x);

int isPalindrome(int x)
{
    char str[20];
    itoa(x, str, 10);
    int i, len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] != str[len - i - 1])
            return 0;
    }
    return 1;
}

int main()
{
    int i, j, result = 0;
    ;
    for (i = 100; i <= 999; i++)
    {
        for (j = 100; j <= 999; j++)
        {
            if (isPalindrome(j * i))
            {
                if (i * j > result)
                {
                    result = i * j;
                }
            }
        }
    }
    printf("Result: %d\n", result);
    return 0;
}