#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = value;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("Deleted: %d\n", queue[front]);
        front++;
    }
}

void display()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

void peek()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Front element: %d\n", queue[front]);
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

