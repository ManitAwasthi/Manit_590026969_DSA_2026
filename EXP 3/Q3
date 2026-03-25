#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *stack;
int top = -1;

void push(char c);
char pop();

int main() {
    char str[100];
    int length;

    printf("Enter a string to reverse: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    length = strlen(str);

    stack = (char *)malloc(length * sizeof(char));

    if (stack == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < length; i++) {
        push(str[i]);
    }

    for (int i = 0; i < length; i++) {
        str[i] = pop();
    }

    printf("Reversed string: %s\n", str);

    free(stack);
    return 0;
}

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}





Enter a string to reverse: upes
Reversed string: sepu


=== Code Execution Successful ===
