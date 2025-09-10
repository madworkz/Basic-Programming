#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int num;
    printf("Enter the number you want the factorial of: ");
    scanf("%d", &num); // Corrected 'scan' to 'scanf'
    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}
