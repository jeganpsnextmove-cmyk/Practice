#include<stdio.h>
int main()
{
    char a[]={'a','b','c','e','f','\0'};
    int n=5;
    int diff;
    diff=(a[n-1]-a[0])/n;
    for(int i=0;i<n;i++)
    {
        int expected=a[0]+i*diff; /*n=a1(n-1)d*/
        if(a[i]!=expected)
        {
            printf("Missing character is %c",expected);
            break;
        }
    }

    return 0;
}
