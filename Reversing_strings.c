#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
    char name[200];
    char new_name[200];
    int n;
    n=0;
    printf("Enter the elements of the array: ");
    fgets(name, sizeof(name), stdin);
    int length=strlen(name);
   
    if(name[length-1]=='\n')
    {
        name[length-1]='\0';
        length--;
    }
     int end=length-1;
    for(int i=length -1; i>=0; i--)
    {
        if(name[i]==' '|| i==0)
            {
            int start=i==0?0:i+1;
            
               for(int j=start;j<=end;j++)
               {
               new_name[n++]=name[j];
               }
            new_name[n++]=' ';
            end= i - 1;
            }
    }
    if(n>0)
    {
        new_name[n-1]='\0';
    }

     // Null-terminate the reversed string
    printf("The reversed string is: %s\n", new_name);
    
    return 0;
}