#include <stdio.h>

int main() {
    int a = 5;
    int b = -3;
    int c = 0;

    // Unary Plus
    int positive_a = +a;
    printf("Unary Plus: +a = %d\n", positive_a);  // Result is 5

    // Unary Minus
    int negative_a = -a;
    printf("Unary Minus: -a = %d\n", negative_a);  // Result is -5

    // Increment
    int incremented_a = ++a;  // Pre-increment
    printf("Pre-increment: ++a = %d\n", incremented_a);  // Result is 6

    a = 5;  // Reset value of a
    int post_incremented_a = a++;
    printf("Post-increment: a++ = %d (a after increment: %d)\n", post_incremented_a, a);  // Result is 5, a becomes 6

    // Decrement
    int decremented_b = --b;  // Pre-decrement
    printf("Pre-decrement: --b = %d\n", decremented_b);  // Result is -4

    b = -3;  // Reset value of b
    int post_decremented_b = b--;
    printf("Post-decrement: b-- = %d (b after decrement: %d)\n", post_decremented_b, b);  // Result is -3, b becomes -4

    // Logical NOT
    int not_c = !c;
    printf("Logical NOT: !c = %d\n", not_c);  // Result is 1 (true)

    // Bitwise NOT
    int not_a = ~a;
    printf("Bitwise NOT: ~a = %d\n", not_a);  // Result is -7 (two's complement representation)

    return 0;
}