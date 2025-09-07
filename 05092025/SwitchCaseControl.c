#include <stdio.h>

int main()
{
    int age;
    printf("Entre your age\n");
    scanf("%d", &age);

    switch (age)
    {
        case 3:
            printf("You are 3 years old\n");
            break;

            case 13:
            printf("You are 13 years old\n");
            break;

            case 23:
            printf("You are 23 years old\n");
            break;

        default:
            printf("Your age is not special\n");
            break;
    }
    return 0;
}