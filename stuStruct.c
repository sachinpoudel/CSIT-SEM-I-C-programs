// create a structure student having data members name,roll and percentage .
//complete the program to display the name of students having percentage >= 60.

#include<stdio.h>
 
struct student
{
    char name[50];
    int roll;
    float percentage;
};
int main(){
    int n ,i;
    printf("Enter the number of students\n");
    scanf("%d", &n);

    struct student students[n];

    //input students details

    for(int i=0; i<n; i++){
        printf("Enter the name of student \n");
        scanf("%s", students[i].name);

        printf("Enter the roll of student \n");
        scanf("%d", &students[i].roll);
        
        printf("Enter the percentage  of student \n");
        scanf("%f", &students[i].percentage);
    }
    //displaying results
   // printf("Displaying name  if percentage >=60\n");

for ( i = 0; i < n; i++)
{
 
    if(students[i].percentage >= 60){
        printf("%s", students[i].name);
    }else{
        printf("The criteria doesnot matched");
        break;
    }
}
return 0;
}
