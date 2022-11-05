
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)
volu++
unsigned char function_a(unsigned char num, unsigned char move)
{
    num = num << move;
    
    return num;
}

unsigned char function_b(unsigned char num)
{
    char mask = 1;
    unsigned char res = num & mask >> (num - 1);
    return res;
}

unsigned char function_c(unsigned char num)
{
    unsigned char mask = 0b10000000;
    unsigned char num1 = num;

    for (int i = 0; i < 8; i++)
    {
        unsigned char res = num1 & mask;

        if (res != 0)
            {
            res = 1;
            }
        else
            {
            res = 0;
            }

       // printf("%d", res);
        mask = mask >> 1;
    }

}

unsigned char exponent2(unsigned char num)
{
    unsigned char numnew = 1;
    for (int i = 0; i < num-1; i++)
    {
        numnew = numnew * 2;
    }
    unsigned char a = numnew; 
    return a;
    
}


//****************************************************************************************
unsigned char volu = 0;
unsigned char function_d(unsigned char num)
{
    unsigned char turnOn = 1;

    if (volu == 1)
    {
        unsigned char location = exponent2(num);
        turnOn = function_c(location);
        printf("%d\n", turnOn);
    }
    else
    {
        unsigned char turnOff = turnOn^turnOn;
        printf("%d\n", turnOff);
    }


}


int main()
{

    printf("%d\n", function_a(5, 4));
     printf("%d\n", function_b(1));
     printf("%d\n", function_c(5));
     unsigned char sa = exponent2(7);
     printf("%d", function_c(sa));
     printf("%d", function_d(5));
   
    return 0;
}














