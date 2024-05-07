#include <stdio.h>
void main()
{
    int i, j;
    char str1[200], str2[200], arr[200];
    printf("Enter the string ending with $: ");
    scanf("%[^$]%*s", str1);
    printf("Enter second string ending with $: ");
    scanf("%[^$]%*s", str2);
    for (i = 0; str1[i] != '\0'; i++)
        ;
    for (j = 0; str1[j] != '\0'; j++)
    {
        str1[i] = str2[j];
        i++;
    }
    printf("The concacatnated string is : %s", str1);
}