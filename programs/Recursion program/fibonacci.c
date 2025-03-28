// finding the fibonacci series of n  number given using recursion

#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    int num, result, i;

    printf("Enter the number\n");
    scanf("%d", &num);

    printf("The fibonacci series is :");
    for (int i = 0; i < num; i++)
    {
        printf("%d", fibonacci(i));
    }
    return 0;
}