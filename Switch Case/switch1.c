#include <stdio.h>

int main()
{
    int age;
    printf("Enter the age:");
    scanf("%d", &age);

    switch (age)
    {
    case 3:
        /* code */
        printf("The age is 3");
        break;
    case 6:
        printf("The age is 6");
        break;

    default:
        printf("The age is invalid");
        break;
    }

    return 0;
}