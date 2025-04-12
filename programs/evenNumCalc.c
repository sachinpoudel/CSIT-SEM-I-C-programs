#include <stdio.h>

// Function to calculate sum of even numbers up to n
int sumEven(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i += 2) // at this line if u change int i=2 to i=1 then you willget the sum of odd numbers
    {
        sum += i;
    }
    return sum;
}

int main() {
    int number;

    printf("Enter the nth term: ");
    scanf("%d", &number);

    int result = sumEven(number);

    printf("The sum of even numbers up to %d is: %d\n", number, result);
    return 0;
}
