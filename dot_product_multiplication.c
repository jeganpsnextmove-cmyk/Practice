#include<stdio.h>
void multiply(int *a, int *b,int len)
{
    int sum=0;
    for(int i=0;i<len;i++)
    {
    sum=sum+*(a+i) * *(b+i);
    }
    printf("\n%d",sum);
}

int main()
{
    int a[]={1,2,3};
    int b[]={4,5,6};
    int len=sizeof(a)/sizeof(a[0]);
    printf("the length of a is :%d",len);
    multiply(a,b,len);
}








