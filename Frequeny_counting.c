#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of characters: ");
    scanf("%d", &n);
    getchar(); // clear buffer

    char *str = malloc((n + 1) * sizeof(char));
    int allocated= (n) * sizeof(char);
    printf("\nAllocated memory for %d characters\n", allocated);
    if (str == NULL)
    {
        printf("Allocation failed\n");
        return 1;
    }

    printf("Enter the string: ");
    fgets(str, n + 1, stdin);

    int used = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        used++;
    }
    printf("\nUsed memory for %d characters\n", used);

    char *temp = realloc(str, used * sizeof(char));
    if (temp != NULL)
    {
        str = temp;
    }
    else
    {
        printf("Reallocation failed\n");
    }

    printf("Your entered string: ");
    for (int k = 0; k < used; k++)
    {
        printf("%c", str[k]);
    }
    printf("\n");

    int count[10] = {0};
for(int i=0;i<n;i++)
{


    for (int j = 0; str[j] != '\0'; j++)
    {
        if (i== str[j] - '0')
        {
            count[i]++;
        }
    }
}

    for (int i = 0; i < 10; i++)
    {
        printf("count of %d is %d\n", i, count[i]);
    }

    free(str);
    return 0;
}