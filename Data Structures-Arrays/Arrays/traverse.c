#include <stdio.h>
void input(int n);
void display(int n);
void main()
{
    int n;
    printf("\n Enter the number of elements:");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    input(n);
    printf("\n The elements of array are:");
    display(n);
}

void input(int n)
{
    int i, arr[100];
    i = 0;
    while (i < n)
    {
        scanf("%d", &arr[i]);
        i++;
    }
}

void display(int n)
{
    int i, arr[100];
    i = 0;
    while (i < n)
    {
        printf("%d", arr[i]);
        i++;
    }
}
