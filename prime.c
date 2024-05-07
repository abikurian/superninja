#include <stdio.h>
void main()
{
    int count = 0, i, n;
    printf("Enter the number to check: ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 1)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }
}