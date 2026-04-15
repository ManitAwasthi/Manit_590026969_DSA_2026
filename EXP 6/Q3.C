#include <stdio.h>

#define MAX 100
int pq[MAX];
int size = 0;

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Insert
void enqueue(int val) {
    pq[size] = val;
    int i = size;
    size++;

    while (i > 0 && pq[(i - 1) / 2] < pq[i]) {
        swap(&pq[i], &pq[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

// Delete highest priority
void dequeue() {
    pq[0] = pq[size - 1];
    size--;

    int i = 0;
    while (2 * i + 1 < size) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < size && pq[left] > pq[largest])
            largest = left;

        if (right < size && pq[right] > pq[largest])
            largest = right;

        if (largest != i) {
            swap(&pq[i], &pq[largest]);
            i = largest;
        } else break;
    }
}

// Peek
void peek() {
    if (size > 0)
        printf("Top Priority: %d\n", pq[0]);
}

// Display
void display() {
    for (int i = 0; i < size; i++)
        printf("%d ", pq[i]);
}

int main() {
    printf("Name: Manit Awasthi\n");

    enqueue(15);
    enqueue(25);
    enqueue(5);
    enqueue(30);

    display();

    printf("\n");
    peek();

    dequeue();
    printf("After dequeue: ");
    display();

    return 0;
}







Name: Manit Awasthi
30 25 5 15 
Top Priority: 30
After dequeue: 25 15 5 

=== Code Execution Successful ===
