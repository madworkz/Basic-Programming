#include <stdio.h>

int main() {
    int a = 10, b = 3;
    int result;

    // Arithmetic Operators
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b); // Addition
    printf("a - b = %d\n", a - b); // Subtraction
    printf("a * b = %d\n", a * b); // Multiplication
    printf("a / b = %d\n", a / b); // Division (integer division)
    printf("a %% b = %d\n", a % b); // Modulus (remainder)

    // Increment and Decrement Operators
    printf("\nIncrement and Decrement Operators:\n");
    printf("a++ = %d\n", a++); // Post-increment
    printf("Now a = %d\n", a);
    printf("++b = %d\n", ++b); // Pre-increment
    printf("Now b = %d\n", b);

    // Assignment Operators
    printf("\nAssignment Operators:\n");
    result = a;
    printf("result = a -> result = %d\n", result);
    result += b;
    printf("result += b -> result = %d\n", result);
    result -= b;
    printf("result -= b -> result = %d\n", result);
    result *= b;
    printf("result *= b -> result = %d\n", result);
    result /= b;
    printf("result /= b -> result = %d\n", result);

    // Relational Operators
    printf("\nRelational Operators:\n");
    printf("a == b: %d\n", a == b); // Equal to
    printf("a != b: %d\n", a != b); // Not equal to
    printf("a > b: %d\n", a > b);   // Greater than
    printf("a < b: %d\n", a < b);   // Less than
    printf("a >= b: %d\n", a >= b); // Greater than or equal to
    printf("a <= b: %d\n", a <= b); // Less than or equal to

    // Logical Operators
    printf("\nLogical Operators:\n");
    printf("(a > 5) && (b < 10): %d\n", (a > 5) && (b < 10)); // Logical AND
    printf("(a < 5) || (b < 10): %d\n", (a < 5) || (b < 10)); // Logical OR
    printf("!(a == b): %d\n", !(a == b)); // Logical NOT

    // Bitwise Operators
    printf("\nBitwise Operators:\n");
    printf("a & b = %d\n", a & b); // Bitwise AND
    printf("a | b = %d\n", a | b); // Bitwise OR
    printf("a ^ b = %d\n", a ^ b); // Bitwise XOR
    printf("~a = %d\n", ~a);       // Bitwise NOT
    printf("a << 1 = %d\n", a << 1); // Left shift
    printf("a >> 1 = %d\n", a >> 1); // Right shift

    // Conditional (Ternary) Operator
    printf("\nConditional (Ternary) Operator:\n");
    result = (a > b) ? a : b;
    printf("result = (a > b) ? a : b -> result = %d\n", result);

    return 0;
}