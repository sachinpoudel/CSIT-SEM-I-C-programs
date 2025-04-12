#include<stdio.h>
int fibo(int n){
    if(n<=1){
        return n;
    }else{
        return fibo (n-1) + fibo (n-2);
    }
}
int isPrime(int num){
    if(num<2){
        return 0;
    }else{
        for(int i =2; i*i<=num; i++){
            if(num % i == 0){
                return 0;
            }else{
                return 1;
            }
        }
    }
}
int main(){
    int n , term;

    printf("Enter the value of n\n");
    scanf("%d", &n);
    
     term = fibo(n);

     if(isPrime(term)){
        printf("The nth term of fibonacci series is prime \n", n, term);
     }else{
        printf("The nth termof fibonacci series is not prime\n", n,term);
     }
return 0;
}