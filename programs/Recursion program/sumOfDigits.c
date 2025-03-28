//find the sum of digits using recursion

#include<stdio.h>

 int sumDigit(int num){
if(num == 0){
    return 0;
}else{
    return num % 10 + sumDigit(num /10);
}
 }
 int main(){
    int n;
printf("Enter the digits \n");
scanf("%d", &n);
printf("The sum of %d is %d", n, sumDigit(n));
return 0; 
 }