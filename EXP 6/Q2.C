#include <stdio.h>

#define MAX 100
int heap[MAX];
int size = 0;

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Insert (Heapify Up)
void insert(int val) {
    heap[size] = val;
    int i = size;
    size++;

    while (i > 0 && heap[(i - 1) / 2] < heap[i]) {
        swap(&heap[i], &heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

// Delete root (Heapify Down)
void deleteRoot() {
    heap[0] = heap[size - 1];
    size--;

    int i = 0;
    while (2 * i + 1 < size) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < size && heap[left] > heap[largest])
            largest = left;

        if (right < size && heap[right] > heap[largest])
            largest = right;

        if (largest != i) {
            swap(&heap[i], &heap[largest]);
            i = largest;
        } else break;
    }
}

void display() {
    for (int i = 0; i < size; i++)
        printf("%d ", heap[i]);
}

int main() {
    printf("Name: Manit Awasthi\n");

    insert(10);
    insert(30);
    insert(20);
    insert(40);

    printf("Heap: ");
    display();

    deleteRoot();
    printf("\nAfter deletion: ");
    display();

    return 0;
}






Name: Manit Awasthi
Heap: 40 30 20 10 
After deletion: 30 10 20 

=== Code Execution Successful ===
