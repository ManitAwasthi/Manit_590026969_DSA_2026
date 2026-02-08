#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n, i;
    struct Student *s;

    printf("Enter number of students: ");
    scanf("%d", &n);

    s = (struct Student*) malloc(n * sizeof(struct Student));

    for(i=0;i<n;i++){
        printf("\nStudent %d\n", i+1);
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }

    printf("\nDetails:\n");
    for(i=0;i<n;i++)
        printf("%d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);

    free(s);
}

OUTPUT:
Enter number of students: 2

Student 1
487
SALMAN
99

Student 2
488
SHAHRUKH
98

Details:
487 SALMAN 99.00
488 SHAHRUKH 98.00


=== Code Execution Successful ===
