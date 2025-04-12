//prime numbers upto n terms
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num)
{
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)  
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Prime numbers up to %d are:\n", num);

    for (int i = 2; i <= num; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    
    return 0;
}
