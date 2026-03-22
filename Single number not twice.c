#include<stdio.h>
int main()
{
    int arr[6];
    int num;
    int res=0;
    printf("Enter the number of elements in the array:");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++)
    {
res=res^arr[i];

    }
    printf("Single number is %d",res);
}