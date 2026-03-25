#include<stdio.h>
int count_flip_bits(int bit_1,int bit_2)
{
    int XOR_result;
    int count=0;
     XOR_result=bit_1^bit_2;
    while(XOR_result > 0)
    {
        if(XOR_result & 1)
        {
            count++;
        }
        XOR_result=XOR_result>>1;
    }
    return count;
}
void showing_bit_1(int bit_1,int temp_bit_1,int show_bit_1[10])
{
    int i=0;
 while(temp_bit_1 >0)
    {
        show_bit_1[i]=temp_bit_1 & 1; 
        temp_bit_1=temp_bit_1>>1;
        i++;
    }
    for(i=9;i>=0;i--)
    {   
        printf("%d",show_bit_1[i]);
    }
}
void showing_bit_2(int bit_2,int temp_bit_2,int show_bit_2[10])
{
     int i=0;
 while(temp_bit_2 >0)
    {
        show_bit_2[i]=temp_bit_2 & 1; 
        temp_bit_2=temp_bit_2>>1;
        i++;
    }
    for(i=9;i>=0;i--)
    {   
        printf("%d",show_bit_2[i]);
    }
}

int main()
{
    int bit_1=0,bit_2=0,XOR_result=0,count=0,temp_bit_1=0,temp_bit_2=0, res=0,i=0;
    int show_bit_1[10]={0};
    int show_bit_2[10]={0};
    printf("Enter the first bit: ");
    scanf("%d",&bit_1);
    temp_bit_1=bit_1;
    printf("The first bit %d is:", bit_1);
    showing_bit_1(bit_1,temp_bit_1,show_bit_1);
    printf("\nEnter the second bit: ");
    scanf("%d",&bit_2);
    temp_bit_2=bit_2;
    printf("The Second bit %d is:", bit_2);
    showing_bit_2(bit_2,temp_bit_2,show_bit_2);
    res=count_flip_bits(bit_1,bit_2);
    printf("\nThe count of flip bits is %d",res);
}