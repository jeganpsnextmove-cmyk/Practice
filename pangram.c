#include<stdio.h>
#include<ctype.h>
int isPangram(char * str)
{
    int seen[26]={0};
    int count=0;
    while(*str)
    {
        if(isalpha(*str))
        {
           char ch=tolower(*str);
           int index=ch -'a';
        
        if (seen[index] == 0)
        {
            seen[index]=1;
            count++;
        }
    }
        str++;
    }
return count == 26;
}
int main()
{
char str[100]= "Sixty zippers were quickly picked from the woven jute bag";
if(isPangram(str))
{
    printf("The string is a pangram.\n");
}
else
{
    printf("The string is not a pangram.\n");
    
}
}
