#include <stdio.h>
void input(int n);
void display(int n);
void deletion(int n, int location);
void display2(int n);
void main()
{
    int n, location;
    printf("\n Enter the size of the array: ");
    scanf("%d", &n);
    printf("\n Enter the elements of array: ");
    input(n);
    printf("\n Your array is: ");
    display(n);
    printf("\n Enter the position of the element you want to delete: ");
    scanf("%d", &location);
    n--;
    deletion(n, location);
    printf("\n Your updated array is: ");
    display2(n);
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

void deletion(int n, int location)
{
    int i, arr[100];
    if (location >= n + 1)
    {
        printf("\n Deletion is not possible");
    }
    else
    {
        for (i = location - 1; i < n; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
}

void display2(int n)
{
    int i, arr[100];
    i = 0;
    while (i < n)
    {
        printf("%d", arr[i]);
        i++;
    }
}