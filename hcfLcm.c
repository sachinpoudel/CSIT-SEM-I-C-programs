// here we will calcualte gcd and lcm using function
#include<stdio.h>
 int gcd(int a, int b){
    while(b!=0){
        int temp = b; 
        b = a%b;
        a=temp;
    }
    return a;
    
 }
 int lcm(int a, int b){
    return (a*b) / gcd(a,b);
}
 int main(){
    int num1,num2;

    printf("Enter the first and second number\n");
        scanf("%d%d",&num1,&num2);

printf("The gcd of %d and %d is %d\n", num1,num2,gcd(num1,num2));
printf("The lcm of %d and %d is %d\n", num1,num2,lcm(num1,num2));
return 0;
    
 }