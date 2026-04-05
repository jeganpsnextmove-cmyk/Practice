#include<stdio.h>
int fibonacci(int a,int b,int fibb)
{  

    int c;
    c=a+b;
    
    a=b;
    b=c;
    if(c<=fibb)
    {
        printf("%d ",c);
        fibonacci(a,b,fibb);
    }

}
int main()
{
    int a,b,fibb;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a another number: ");
    scanf("%d",&b);
    printf("Fibonacci series: ");
    scanf("%d",&fibb);
    fibonacci(a,b,fibb);
        return 0;
}