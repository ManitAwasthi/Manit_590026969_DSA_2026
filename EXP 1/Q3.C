#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr, max, min;

    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = min = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    printf("Largest = %d\nSmallest = %d", max, min);

    free(arr);
}

OUTPUT:
Enter size: 5
6
7
8
9
10
Largest = 10
Smallest = 6
