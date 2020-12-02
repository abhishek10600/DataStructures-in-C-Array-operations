#include <stdio.h>
void input(int n);
void insertion(int n, int key, int location);
void display(int n);
void display2(int n);
void main()
{
    int n, key, location;
    printf("\n Enter the size of array: ");
    scanf("%d", &n);
    printf("\n Enter the elements of array: ");
    input(n);
    printf("\n Your array is: ");
    display(n);
    printf("\n Enter the element you want to insert in your array: ");
    scanf("%d", &key);
    printf("\n Enter the location where you want to enter the element: ");
    scanf("%d", &location);
    n++;
    insertion(n, key, location);
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
        printf("%d ", arr[i]);
        i++;
    }
}

void insertion(int n, int key, int location)
{
    int i, arr[100];
    if (arr[n] == -1)
    {
        printf("\n Array is full!No insertion is possible");
    }
    else
    {
        for (i = n - 1; i >= location; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[location - 1] = key;
    }
}
void display2(int n)
{
    int i, arr[100];
    i = 0;
    while (i < n)
    {
        printf("%d ", arr[i]);
        i++;
    }
}