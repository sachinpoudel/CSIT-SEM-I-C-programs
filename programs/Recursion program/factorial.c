// here we will find the factiorial of n num using recursion technique

#include<stdio.h>

int factorial(int n){
    if(n==0){
        return 1;
    }else{
        return n * factorial (n-1);
    }
   
}
int main(){
    int num,result;
    printf("Enter the number\n");
    scanf("%d", &num);

    result = factorial(num);

    printf("The factorial value of %d is %d\n",num ,result);
    return 0;
}
