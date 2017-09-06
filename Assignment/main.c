#include <stdio.h>
#include "math.h"

int main()
{
    printf("This is the sum of 2 and 2: %d \n", math(2,2,'+'));
    printf("This is the difference of 5 and 2: %d \n", math(5,2,'-'));
    printf("This is the product of 2 and 2: %d \n", math(2,2,'*'));
    printf("This is the quotient of 2 and 2: %d \n", math(2,2,'/'));
    printf("This is the modulus of 2 and 2: %d \n", math(2,2,'%'));

    return 0;
}

