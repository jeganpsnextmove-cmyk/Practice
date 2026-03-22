#include<stdio.h>
int main()
{
    int a,count;
    count=0;
    printf("Enter a number:");
    scanf("%d",&a);
    while(a>0)
    {
        if(a&1==1)
        {
            count++;
        }
        a>>=1;
    }
    printf("Number of 1s in the binary representation of %d is %d",a,count);
    return 0;
}