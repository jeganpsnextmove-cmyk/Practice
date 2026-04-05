#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    getchar();
    char *arr=malloc(n*sizeof(char));
    printf("Enter the elements of the array: ");
    fgets(arr, n, stdin); // Read the string input
    arr[strcspn(arr, "\n")] = '\0'; // Remove the newline character if present
    printf("The elements of the array are: %s", arr);
    int m;
    printf("\nEnter the size of the token array: ");
    scanf("%d", &m);
    getchar();
    char * token=malloc(m*sizeof(char));
    printf("Enter the elements of the token array: ");
    fgets(token,m,stdin); // Read the string input
    token[strcspn(token, "\n")] = '\0'; // Remove the newline character if present
    printf("The elements of the token array are: %s", token);
    int size_of_array = strlen(arr);
    int size_of_token = strlen(token);
    int count = 0;
    for(int i=0;i<=size_of_array-size_of_token;i++)
    {
        int j;
        for(j=0;j<size_of_token;j++)
        {
            if(arr[i+j]!=token[j])
            {
                break;
            }
        }
        if(j==size_of_token)
        {
            count++;
        }
    }
printf("\n The number of times the token appears in the array is: %d", count);
free(arr);
free(token);
arr = NULL;
token = NULL;
return 0;
}