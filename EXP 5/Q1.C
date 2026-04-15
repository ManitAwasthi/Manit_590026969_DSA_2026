#include <stdio.h>

#define MAX 100
int tree[MAX];

void insert(int index, int value) {
    if (index >= MAX) {
        printf("Index out of range\n");
        return;
    }
    tree[index] = value;
}

void display() {
    printf("\nTree elements:\n");
    for (int i = 1; i < MAX; i++) {
        if (tree[i] != 0)
            printf("Index %d: %d\n", i, tree[i]);
    }
}

void relations(int index) {
    if (tree[index] == 0) {
        printf("Node not found\n");
        return;
    }

    printf("\nNode: %d\n", tree[index]);

    if (index / 2 > 0 && tree[index / 2] != 0)
        printf("Parent: %d\n", tree[index / 2]);
    else
        printf("No parent\n");

    if (tree[2 * index] != 0)
        printf("Left child: %d\n", tree[2 * index]);
    else
        printf("No left child\n");

    if (tree[2 * index + 1] != 0)
        printf("Right child: %d\n", tree[2 * index + 1]);
    else
        printf("No right child\n");
}

int main() {
    printf("Name: Manit Awasthi\n");

    insert(1, 10);
    insert(2, 20);
    insert(3, 30);
    insert(4, 40);

    display();
    relations(2);

    return 0;
}





Name: Manit Awasthi

Tree elements:
Index 1: 10
Index 2: 20
Index 3: 30
Index 4: 40

Node: 20
Parent: 10
Left child: 40
No right child


=== Code Execution Successful ===
