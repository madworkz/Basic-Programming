#include <stdio.h>
/*
Print multiplication table of a number entered by the user in preety form

Example:

Input
Enter the number want multiplication of:
6

Output:
Table of 6 is:
6 x 1 = 6
6 x 2 = 12
6 x 3 = 18
6 x 4 = 24
6 x 5 = 30
6 x 6 = 36
6 x 7 = 42
6 x 8 = 48
6 x 9 = 54
6 x 10 = 60

*/
int main()
{
    int number;

    // Ask user for input
    printf("Enter the number you want the multiplication of:\n");
    scanf("%d", &number);

    // Print the table
    printf("Table of %d is:\n", number);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    /* code */
    return 0;
}
