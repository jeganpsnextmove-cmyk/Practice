#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
    char name[200];
    printf("Enter the elements of the array: ");
    fgets(name, sizeof(name), stdin);
    int length=strlen(name);
    int end=length-1;
    if(name[length-1]=='\n')
    {
        name[length-1]='\0';
        length--;
    }
    for(int i=length -1; i>=0; i--)
    {
        if(name[i]==' '|| i==0)
            {
            int start=i==0?0:i+1;
            
        for(int j=start;j<=end;j++)
        {
            printf("%c", name[j]);
        }
        printf(" ");
        end=i-1;
    }
    }
    return 0;
}