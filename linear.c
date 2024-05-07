#include <stdio.h>
void main()
{
    int a[20], i, n, search, temp = 0;
    printf("Enter the size of Array: ");
    scanf("%d", &n);
    printf("Enter the elements ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the value to be searched ");
    scanf("%d", &search);
    for (i = 0; i < n; i++)
    {
        if (search == a[i])
        {
            temp = 1;
            break;
        }
    }
    if (temp == 1)
    {
        printf("The enetered value is found ");
    }
    else
    {
        printf("The entered value is not present in array");
    }
}