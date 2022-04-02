#include <stdio.h>

int main()
{
    int number = 3;

    if(number == 0)
    {
        printf("number is 0\n");
    }
    else
    {
        printf("number is not 0\n");
        printf("number is %d\n", number);
    }

    if(number > 10)
    {
        printf("number is %d > 10\n", number);
    }
    else if(number < 10)
    {
        printf("number is %d < 10\n", number);
    }


    return 0;
}
