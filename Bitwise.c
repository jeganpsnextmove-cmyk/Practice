#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number to identify: ");
    scanf("%d",&a);
    if(a>>(sizeof(int)*8-1)==0)
    {
        printf("The number is positive");
    }
    else
    {
        printf("The number is negative");
    }

}