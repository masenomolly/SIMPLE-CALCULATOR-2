#include <stdio.h>
#include <stdlib.h>
/*
--> Project: SIMPLE CALCULATOR
--> Author  : Maurine Masemo Molly
--> Date   : 23rd january 1977
--> Compile : GNU GCC
--> Language : C 99
--> License: MTT

*/
int maseno, Maurine;

int main()
{
    printf(" We are going to  write a   program to do  calculations \n");
    printf( " please input the first integer \n  ");

    scanf( "%d", &maseno);
    printf(" the  first integer is : %d \n ", maseno );
    printf("please input the second integer\n");
    scanf("%d", &Maurine);
    printf(" the  second  integer is : %d \n ", Maurine );
    printf(" the sum of the two integer is : %d \n", Maurine + maseno);
    printf(" the difference  of the two integer is : %d\n", Maurine - maseno);
    printf(" the product of the two integer is : %d \n", Maurine * maseno);
    printf(" the quotient of the two integer is : %d\n", Maurine / maseno);
    printf(" the modulus of the two integer is : %d", Maurine % maseno);



    return 0;
}
