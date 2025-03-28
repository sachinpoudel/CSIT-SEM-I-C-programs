#include<stdio.h>
#include<math.h>

int isPrime(int num){
    if(num<2){
        return 0;
    }else{
        for(int i=2; i*i<=num; i++){
            if(num % i == 0){
                return 0;
            }else{
                return 1;
            }
        }
    }
}
int main(){
    FILE  *inputFile, *outputFile;
int num;
inputFile = fopen("Num.txt", "r");
if(inputFile == NULL){
    printf("Error opening file num.txt\n");
    return 1;
}
outputFile = fopen("Prime.txt","w");
if(outputFile == NULL){
    printf("Error opening file Prime.txt\n");
    return 1;
}
// read integer from num.txt , check for prime

while(fscanf(inputFile, "%d", &num) != EOF){
    if(isPrime(num)){
        fprintf(outputFile, "%d",num);
    }
}
//close all file
fclose(inputFile);
fclose(outputFile);
return 0;
}