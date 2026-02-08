#include <stdio.h>

struct S {
    int i;
    float f;
    char c;
};

union U {
    int i;
    float f;
    char c;
};

int main() {
    printf("Structure size = %lu", sizeof(struct S));
    printf("\nUnion size = %lu", sizeof(union U));
}

OUTPUT:
Structure size = 12
Union size = 4

=== Code Execution Successful ===
