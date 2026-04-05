#include<stdio.h>
int factorial(int n)

{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    factorial(a);
    printf("Factorial of %d is %d",a,factorial(a));
    return 0;
}