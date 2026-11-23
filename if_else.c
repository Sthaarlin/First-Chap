#include <stdio.h>

int main()
{
    int age;
    printf("Enter the age:");
    scanf("%d", &age);

    if (age >18) {
        printf("You can vote!\n");
    }
    else
    {
        printf("You can't vote!\n");
    }
    printf("You have enter %d as age\n", age);

    return 0;
}