#include <stdio.h>

int main()
{
    //Create a variable x
    int x = 0;

    //Prompt user
    printf("Enter your age\n");

    //Read keyboard response - look for an integer
    int found = scanf_s("%d", &x);

    //Display how many items were matched
    printf("Matched %d items\n", found);

    //Display what was typed in
    printf("x = %d\n", x);

    int y = 0;

    printf("Enter a number\n");

    int found2 = scanf_s("%d", &y);

    printf("y = %d\n", y);

    int z = (x + y) / 2;

    printf("%d\n", z);
}



