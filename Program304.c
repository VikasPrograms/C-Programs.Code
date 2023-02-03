// Accept number from usert and count number of bits which are ON in that perticula number.

/*
    Input = 11          Output = 3 (1011)
    Input = 10          Output = 2 (1010)
    Input = 78          Output = 4 (1111)
*/


#include<stdio.h>

int CountOnBits(unsigned int No)
{
    int iCnt = 0;
    int Digit = 0;

    while(No != 0)
    {
        Digit = No % 2;
        if(Digit == 1)
        {
            iCnt++;
        }
        No = No / 2;
    }
    return iCnt;
}

int main()
{
    unsigned int Value = 0;
    int Ret = 0;

    printf("Enter Number : \n");
    scanf("%d",&Value);

    Ret = CountOnBits(Value);

    printf("Number of bits which are ON are : %d\n",Ret);

    return 0;
}