#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n, i, maxIndex = 0;
    struct Employee *e;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    e = (struct Employee*) malloc(n * sizeof(struct Employee));

    if(e == NULL) {
        printf("Memory allocation failed");
        return 0;
    }

    // Input
    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i+1);
        printf("Enter ID Name Salary: ");
        scanf("%d %s %f", &e[i].id, e[i].name, &e[i].salary);

        if(e[i].salary > e[maxIndex].salary)
            maxIndex = i;
    }

    // Output
    printf("\nEmployee with Highest Salary:\n");
    printf("ID: %d\nName: %s\nSalary: %.2f",
           e[maxIndex].id,
           e[maxIndex].name,
           e[maxIndex].salary);

    free(e);
    return 0;
}

OUTPUT:
Enter number of employees: 2

Employee 1
Enter ID Name Salary: 123
A
320000000

Employee 2
Enter ID Name Salary: 124
B
3000000001

Employee with Highest Salary:
ID: 124
Name: B
Salary: 3000000000.00

=== Code Execution Successful ===
