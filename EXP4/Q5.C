#include <stdio.h>
#define MAX 100

int q1[MAX], q2[MAX];
int front1 = -1, rear1 = -1;
int front2 = -1, rear2 = -1;

int isEmpty()
{
    return (front1 == -1);
}

void enqueue1(int value)
{
    if (rear1 == MAX - 1)
        return;
    if (front1 == -1)
        front1 = 0;
    q1[++rear1] = value;
}

void enqueue2(int value)
{
    if (rear2 == MAX - 1)
        return;
    if (front2 == -1)
        front2 = 0;
    q2[++rear2] = value;
}

int dequeue1()
{
    int val = q1[front1];
    if (front1 == rear1)
        front1 = rear1 = -1;
    else
        front1++;
    return val;
}

int dequeue2()
{
    int val = q2[front2];
    if (front2 == rear2)
        front2 = rear2 = -1;
    else
        front2++;
    return val;
}

void push(int value)
{
    enqueue2(value);

    while (!isEmpty())
    {
        enqueue2(dequeue1());
    }

    while (front2 != -1)
    {
        enqueue1(dequeue2());
    }
}

void pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow\n");
        return;
    }

    printf("Popped element: %d\n", dequeue1());
}

void peek()
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Top element: %d\n", q1[front1]);
}

void display()
{
    int i;
    if (isEmpty())
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements: ");
    for (i = front1; i <= rear1; i++)
    {
        printf("%d ", q1[i]);
    }
    printf("\n");
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("\n1.Push\n2.Pop\n3.Peek\n4.isEmpty\n5.Display\n6.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                if (isEmpty())
                    printf("Stack is empty\n");
                else
                    printf("Stack is not empty\n");
                break;

            case 5:
                display();
                break;

            case 6:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
