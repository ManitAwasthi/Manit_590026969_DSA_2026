#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int countNodes(struct node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

int main() {
    struct node *head = NULL, *temp, *newnode;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if(head == NULL)
            head = temp = newnode;
        else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    printf("Number of nodes = %d\n", countNodes(head));
    return 0;
}

Enter number of nodes: 3
Enter data: 10
Enter data: 20
Enter data: 30
Number of nodes = 3
