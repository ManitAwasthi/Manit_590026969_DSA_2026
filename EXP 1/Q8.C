#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data d;

    d.i = 10;
    printf("Integer: %d\n", d.i);

    d.f = 5.5;
    printf("Float: %.2f\n", d.f);

    d.c = 'A';
    printf("Character: %c\n", d.c);

    printf("\nSame memory shared by all members.");
}

OUTPUT:
Integer: 10
Float: 5.50
Character: A

Same memory shared by all members.

=== Code Execution Successful ===
