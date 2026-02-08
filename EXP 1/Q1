#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    if(arr == NULL) {
        printf("Memory allocation failed");
        return 0;
    }

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);   // Free memory
    return 0;
}


OUTPUT:

Enter number of elements: 5
Enter elements:
2
3
8
6
9
Array elements are:
2 3 8 6 9 
