#include <stdio.h>

int main()
{
    printf("Maddy\n");
    int i, age;
    for (i = 0; i<10; i++)
    {
        printf("Enter your age: ");
        scanf("%d", &age);
        if (age < 18)
        {
            printf("You are not eligible to vote.\n");
            continue; // Skip the rest of the loop and go to the next iteration
        }
        if (age > 100)
        {
            printf("Invalid age entered. Exiting the loop.\n");
            break; // Exit the loop entirely
        }
        printf("You are eligible to vote.\n");
    }
    
    return 0;
}