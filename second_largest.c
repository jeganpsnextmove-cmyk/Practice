#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n+1];
    for (int i =0; i<n; i++)
    {
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("The values in the array are: \n");
    for (int i =0; i<n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
        
    }   
    printf("-------------------------------\n");

    int temp=0;

    for (int i=0;i<n;i++)

    {
        for (int j=i+1; j<n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    for(int i=0; i<n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    printf("The second largest values in the array after sorting are: %d \n", a[n-2]);
     return 0;

    }