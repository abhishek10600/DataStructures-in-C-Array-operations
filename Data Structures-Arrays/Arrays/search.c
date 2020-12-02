#include <stdio.h>
void input(int n);
void search(int n, int key);
void main()
{
    int n, key;
    printf("\n Enter the size of array:");
    scanf("%d", &n);
    printf("\n Enter the elements of array:");
    input(n);
    printf("\n Enter the element you want to search: ");
    scanf("%d", &key);
    search(n, key);
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
void search(int n, int key)
{
    int i, found = 0, location = 0, arr[100];
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            location = i - 1;
        }
    }
    if (found == 1)
    {
        printf("\n Element is present at location %d", location);
    }
    else
    {
        printf("\n Element is not found.");
    }
}