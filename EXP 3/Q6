#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Standard Stack Functions
void push(int value) {
    stack[++top] = value;
}

int pop() {
    return stack[top--];
}

int evaluatePostfix(char* exp) {
    for (int i = 0; exp[i] != '\0'; i++) {
        // 1. If the character is a digit, convert char to int and push
        if (isdigit(exp[i])) {
            push(exp[i] - '0'); 
        } 
        // 2. If it's an operator, pop two elements and calculate
        else {
            int val2 = pop(); // The top element is the second operand
            int val1 = pop(); // The element below it is the first operand

            switch (exp[i]) {
                case '+': push(val1 + val2); break;
                case '-': push(val1 - val2); break;
                case '*': push(val1 * val2); break;
                case '/': push(val1 / val2); break;
            }
        }
    }
    // The final result is the only element left in the stack
    return pop();
}

int main() {
    char exp[] = "23*54*+9-";
    
    printf("Postfix Expression: %s\n", exp);
    int result = evaluatePostfix(exp);
    printf("Result: %d\n", result);

    return 0;
}
