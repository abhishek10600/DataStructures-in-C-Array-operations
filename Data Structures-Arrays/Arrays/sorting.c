#include <stdio.h>
void input(int n);
void sort(int n);
void display(int n);

void main()
{
    int n;
    printf("\n Enter the number of elements:");
    scanf("%d", &n);
    printf("\n Enter the elements of array:");
    input(n);
    sort(n);
    printf("\n The sorted array is: ");
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

void sort(int n)
{
    int i, arr[100], a, j;
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (arr[i] > arr[j])
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
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
