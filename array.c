#include <stdio.h>
int main()
{
    //comment;
    /*multiple line comment*/
    //this is a programme for storing some numbers in a array;
    int array[10];
    array[0] = 1;
    array[1] = 5;
    int i;
    for (i = 2; i <= 9; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d", array[i]);
    }
    return 0;
}