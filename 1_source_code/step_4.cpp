#include <stdio.h>

int main()
{
    int number1 = 7;
    int number2 = 3;

    double addtion = number1 + number2;
    double subtraction = number1 - number2;
    double multiplication = number1 * number2;
    double division = number1 / number2;
    double remainder = number1 % number2;

    printf("number1 : %d, %d\n", number1,number2);

    printf("addtion : %d + %d = %.3f\n", number1, number2, addtion);
    printf("subtraction : %d - %d = %.3f\n", number1, number2, subtraction);
    printf("multiplication : %d * %d = %.3f\n", number1, number2, multiplication);
    printf("division : %d / %d = %.3f\n", number1, number2, division);
    printf("remainder : %d mod %d = %.3f\n", number1, number2, remainder);

    return 0;
}
