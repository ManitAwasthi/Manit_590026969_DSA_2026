#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c, i, j;

    printf("Enter rows & cols: ");
    scanf("%d %d", &r, &c);

    int **A = malloc(r * sizeof(int*));
    int **B = malloc(r * sizeof(int*));
    int **C = malloc(r * sizeof(int*));

    for(i = 0; i < r; i++) {
        A[i] = malloc(c * sizeof(int));
        B[i] = malloc(c * sizeof(int));
        C[i] = malloc(c * sizeof(int));
    }

    printf("Enter Matrix A:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&A[i][j]);

    printf("Enter Matrix B:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&B[i][j]);

    printf("\nAddition:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            C[i][j]=A[i][j]+B[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtraction:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            C[i][j]=A[i][j]-B[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

    // Free memory
    for(i=0;i<r;i++){
        free(A[i]); free(B[i]); free(C[i]);
    }
    free(A); free(B); free(C);
}

OUTPUT:
Enter rows & cols: 3
3
Enter Matrix A:
1
2
3
4
5
6
7
8
9
Enter Matrix B:
9
8
7
6
5
4
3
2
1

Addition:
10 10 10 
10 10 10 
10 10 10 

Subtraction:
-8 -6 -4 
-2 0 2 
4 6 8 

