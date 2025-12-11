#include <stdio.h> // include standard input/output library

int main()
{
    int n;

    printf("Enter a number (1-9): ");
    scanf("%d", &n); // read input number

    if (n == 1)
    {
        printf("one\n");
    }
    else if (n == 2)
    {
        printf("two\n");
    }
    else if (n == 3)
    {
        printf("three\n");
    }
    else if (n == 4)
    {
        printf("four\n");
    }
    else if (n == 5)
    {
        printf("five\n");
    }
    else if (n == 6)
    {
        printf("six\n");
    }
    else if (n == 7)
    {
        printf("seven\n");
    }
    else if (n == 8)
    {
        printf("eight\n");
    }
    else if (n == 9)
    {
        printf("nine\n");
    }
    else
    {
        printf("Greater than 9\n"); // for numbers greater than 9
    }

    return 0;
}