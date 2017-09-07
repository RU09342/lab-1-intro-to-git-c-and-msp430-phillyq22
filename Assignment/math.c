#include <stdio.h>
#include "math.h"

int math(int num1, int num2, char Operator)//Math function that takes in two integer values and an operator
{
    int result = 0;//result to be returned
    switch(Operator)//switches on the operator
    {
        case '+'://if addition
            result = num1 + num2;//Addition
            break;
        case '-'://if subtraction
            result = num1 - num2;//Subtraction
            break;
        case '*'://if multiplication
            result = num1 * num2;//multiplication
            break;
        case '/'://if division
            result = num1 / num2;//Division
            break;
        case '%'://if modulus
            result = num1 % num2;//Modulus
            break;
        default://For any operator other than the 5 listed above, do nothing.
            break;
    }
     return result;//returns result depending on the operator that was entered.
}