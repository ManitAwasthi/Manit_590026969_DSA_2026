#include <stdio.h>
#include <string.h>

#define MAX 100

char queue[MAX];
int front = 0, rear = -1;

void enqueue(char ch)
{
    if (rear < MAX - 1)
    {
        queue[++rear] = ch;
    }
}

char dequeue()
{
    if (front <= rear)
    {
        return queue[front++];
    }
    return '\0';
}

int main()
{
    char str[MAX];
    char stack[MAX];
    int top = -1;
    int i, length;
    int isPalindrome = 1;

    printf("Enter a string: ");
    gets(str);

    length = strlen(str);

    for (i = 0; i < length; i++)
    {
        stack[++top] = str[i];   
        enqueue(str[i]);         
	}
    for (i = 0; i < length; i++)
    {
        if (stack[top--] != dequeue())
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a Palindrome.\n");
    else
        printf("The string is NOT a Palindrome.\n");

    return 0;
}
