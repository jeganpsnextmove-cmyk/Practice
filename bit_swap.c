#include<stdio.h>
int main()
{
    unsigned int a;
    scanf("%x",&a);
    printf("%x",a);
    unsigned int even= (a << 1) & 0xAAAA;
    unsigned int odd= (a >> 1) & 0x5555;
    unsigned int ans= even | odd;
    printf("\n%x",ans);
}