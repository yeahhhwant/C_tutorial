#include <stdio.h>

void PrintNumber(int a,int b)
{
    printf("number : %d, %d\n", a,b);
}


double Addtion(int a, int b)
{
    return a+b;
}

double Subtraction(int a, int b)
{
    return a-b;
}

double Multiplication(double a, double b)
{
    return a*b;
}

double Division(int a, int b)
{
    return a/b;
}


double Remainder(int a, int b)
{
    return a%b;
}


int main()
{
    int number1 = 7;
    int number2 = 3;

    double addtion = Addtion(number1, number2);
    double subtraction = Subtraction(number1, number2);
    double multiplication = Multiplication(number1, number2);
    double division = Division(number1, number2);
    double remainder = Remainder(number1, number2);


    PrintNumber(number1, number2);

    printf("addtion : %d + %d = %.3f\n", number1, number2, addtion);
    printf("subtraction : %d - %d = %.3f\n", number1, number2, subtraction);
    printf("multiplication : %d * %d = %.3f\n", number1, number2, multiplication);
    printf("division : %d / %d = %.3f\n", number1, number2, division);
    printf("remainder : %d mod %d = %.3f\n", number1, number2, remainder);


    return 0;
}
