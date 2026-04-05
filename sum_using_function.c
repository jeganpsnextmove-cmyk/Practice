#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter another number: ");
    scanf("%d",&b);
    sum(a,b);
    printf("Sum of %d and %d is %d",a,b,sum(a,b)    );
    return 0;
}