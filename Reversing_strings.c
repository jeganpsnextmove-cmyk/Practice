#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    getchar();
    char * name=malloc(n * sizeof(char));
    char * new_name=malloc(n * sizeof(char));
    printf("Enter the elements of the array: ");
    fgets(name, n, stdin);
    int length=strlen(name);
    for(int i=length -1; i>=0; i--)
    {
        new_name[length -1 -i]=name[i];
    }
    new_name[length]='\0';  // Null terminate the reversed string
    printf("The reversed array is: %s", new_name);
}