#include<stdio.h>
#include<stdlib.h>
int * countbits(int n,int * size)
{
    *size=n+1;
    int * res=(int *)malloc(sizeof(int)*(n+1));
    res[0]=0;
    for(int i=1;i<=7;i++)
    {
        res[i]=res[i>>1]+(i&1);
    }
    return res;
}
int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    int size;
    int * res=countbits(n,&size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",res[i]);
    }
    return 0;
}