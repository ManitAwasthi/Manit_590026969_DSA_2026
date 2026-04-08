include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int value)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = value;
    newnode->next = NULL;

    if (rear == NULL)
    {
        front=rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue()
{
    if (front == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        struct node *temp;
        temp = front;

        printf("Deleted: %d\n", front->data);

        front = front->next;
        free(temp);

        if (front == NULL)
        {
            rear = NULL;
        }
    }
}

void display()
{
    if (front == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        struct node *temp;
        temp = front;

        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void peek()
{
    if (front == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Front element: %d\n", front->data);
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    peek();

    return 0;
}
