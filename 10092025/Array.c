#include <stdio.h>

int main()
{
    int size;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Declare the array with a maximum size
    int arr[100];

    // Input elements into the array
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the array elements
    printf("\nThe elements in the array are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
