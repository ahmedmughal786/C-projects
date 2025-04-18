#include <stdio.h>

// Declare all integars.
// Set value of Fibonacci_1 = 0
// Set value of Fibonacci_2 = 1
int main()
{
    int N, fib_1 = 0, fib_2 = 1;

    // Get value of N from user

    printf("Enter N: ");
    if (scanf("%d", &N) != 1)
    {
        printf("Invalid Input \n");
        return (0);
    }

    if (N < 0)
    {
        printf("Invalid Input\n");
        return 0;
    }

    if (N == 0)
    {
        printf(" %d is: %d\n", N, fib_1);
        return 0;
    }
    else if (N == 1)
    {
        printf(" %d is: %d, %d\n", N, fib_1, fib_2);
        return 0;
    }

    printf(" %d is: %d, %d", N, fib_1, fib_2);

    // Declare integars for iteration.

    int next, i;
    // For loop for iterations.
    for (i = 2; i <= N; i++)
    {
        next = fib_1 + fib_2;
        printf(", %d", next);
        fib_1 = fib_2;
        fib_2 = next;
    }

    printf("\n");

    return 0;
}
