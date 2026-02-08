#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n, i, j;
    struct Student *s, temp;

    printf("Enter number of students: ");
    scanf("%d",&n);

    s = malloc(n*sizeof(struct Student));

    for(i=0;i<n;i++)
        scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].marks);

    // Bubble sort
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(s[j].marks > s[j+1].marks){
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }

    printf("\nSorted by Marks:\n");
    for(i=0;i<n;i++)
        printf("%d %s %.2f\n",
               s[i].roll,s[i].name,s[i].marks);

    free(s);
}

OUTPUT:
Enter number of students: 2
97
86
80
97
5
82

Sorted by Marks:
97 86 80.00
97 5 82.00


=== Code Execution Successful ===
