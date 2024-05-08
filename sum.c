#include <stdio.h>
void main() {
    int arr[100], n, sum = 0;
    float average;

    printf("Enter the number of elements you want to find the average of: ");
    scanf("%d", &n);
printf(" enter elements ");


    for (int i = 0; i < n; i++) {
        
        scanf("%d", &arr[i]);
        sum += arr[i];
    }


    average = (float)sum / n;
    
    printf("The sum of the elements is: %d\n", sum);
    printf("The average of the elements is: %.2f", average);

    
}