// product of two nums using recursion technique
#include <stdio.h>
int product(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }
    return a + product(a, b-1);
}
int main()
{
    int num1, num2, result;

    printf("Enter the first number\n");
    scanf("%d", &num1);

    printf("Enter the second number\n");
    scanf("%d", &num2);

    result = product(num1, num2);

    printf("The product of %d and %d is: %d", num1, num2, result);
    return 0;
}