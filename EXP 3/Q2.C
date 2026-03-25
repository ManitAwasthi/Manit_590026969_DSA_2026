#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push();
void pop();
void display();

int main() {
    int choice;
    while (1) {
        printf("\n--- Linked List Stack ---");
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid choice!");
        }
    }
    return 0;
}

void push() {
    int val;
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Stack Overflow (Heap is full!)\n");
        return;
    }

    printf("Enter value to push: ");
    scanf("%d", &val);

    newNode->data = val;      
    newNode->next = top;      
    top = newNode;            
    printf("Pushed %d successfully.\n", val);
}

void pop() {
    struct Node *temp;

    if (top == NULL) {
        printf("Stack Underflow! Nothing to pop.\n");
    } else {
        temp = top;          
        printf("Popped element: %d\n", top->data);
        top = top->next;      
        free(temp);           
    }
}

void display() {
    struct Node *temp = top;

    if (top == NULL) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements (Top to Bottom):\n");
        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}




--- Linked List Stack ---
1. Push
2. Pop
3. Display
4. Exit
Enter choice: 1
Enter value to push: 2
Pushed 2 successfully.

--- Linked List Stack ---
1. Push
2. Pop
3. Display
4. Exit
Enter choice: 2
Popped element: 2

--- Linked List Stack ---
1. Push
2. Pop
3. Display
4. Exit
Enter choice: 3
Stack is empty.

--- Linked List Stack ---
1. Push
2. Pop
3. Display
4. Exit
Enter choice: 4


=== Code Execution Successful ===
