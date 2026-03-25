#include<stdio.h>
int main()
{
    int bit_1,bit_2;
    int XOR_result;
    int count=0;
    printf("Enter the first bit: ");
    scanf("%d",&bit_1);
    printf("Enter the second bit: ");
    scanf("%d",&bit_2);
    XOR_result=bit_1^bit_2;
    while(XOR_result > 0)
    {
        if(XOR_result & 1)
        {
            count++;
        }
        XOR_result=XOR_result>>1;
    }
    printf("The number of different bits is %d",count);
}