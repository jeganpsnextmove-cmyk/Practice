#include<stdio.h>
int main()
{
    int a;
    int res=0;
    scanf("%d",&a);
    while(a>0)
    {

        int bit=a&1;
        res=res<<1;
        res=res|bit;
        a=a>>1;
    }
    printf("%d",res);
}