// this program shows the details of emp1 and emp2 entered by user in tabular format
#include <stdio.h>

struct employee {
    char emp_name[50];
    int emp_id;
    float emp_salary;
};

int main() {
    struct employee emp1, emp2;
    struct employee *ptr1 = &emp1;
    struct employee *ptr2 = &emp2;

    // Input for employee1
    printf("Enter the details of emp1\n");

    printf("Enter the Name: ");
    scanf(" %[^\n]", ptr1->emp_name);  // Allows spaces in input

    printf("Enter the ID: ");
    scanf("%d", &ptr1->emp_id);

    printf("Enter the Salary: ");
    scanf("%f", &ptr1->emp_salary);

    // Input for employee2
    printf("\nEnter the details of emp2\n");

    printf("Enter the Name: ");
    scanf(" %[^\n]", ptr2->emp_name);

    printf("Enter the ID: ");
    scanf("%d", &ptr2->emp_id);

    printf("Enter the Salary: ");
    scanf("%f", &ptr2->emp_salary);

    // Displaying details
    printf("\n%-20s %-10s %-10s\n", "Name", "ID", "Salary");
    printf("------------------------------------------\n");
    printf("%-20s %-10d %-10.2f\n", ptr1->emp_name, ptr1->emp_id, ptr1->emp_salary);
    printf("%-20s %-10d %-10.2f\n", ptr2->emp_name, ptr2->emp_id, ptr2->emp_salary);

    return 0;
}
