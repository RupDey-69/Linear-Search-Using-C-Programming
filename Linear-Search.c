#include <stdio.h>
int main()
{

    int n, search, i;
    printf("Enter The Size Of Array:");
    scanf("%d", &n);

    int arr[n];

    // Input

    for (i = 0; i < n; i++)
    {
        printf("Enter The Element [%d]:", i);
        scanf("%d", &arr[i]);
    }

    // Print Part..

    printf("\nThe Element Search:");
    scanf("%d", &search);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            printf("%d Search Element At That Location = %d",search,i);
            return 0;
        }
    }
// but Not Found...

printf("%d Array Element Not Found:%d",search);
    return 0;
}