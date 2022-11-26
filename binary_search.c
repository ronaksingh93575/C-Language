#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[100], size, find, first, last, mid;
    printf("Enter the size of Array (1-100) :  ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter the Element No %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nGive the Number to search the location :- ");
    scanf("%d", find);

    first = 0;
    last = size - 1;
    mid = (first + last) / 2;

    while (first <= last)
    {
        if (arr[mid] < find)
            first = mid + 1;
        else if (arr[mid] == find)
        {
            printf("%d is at %d loction\n", find, mid + 1);
            break;
        }
        else
            last = mid - 1;
        mid = (first + last) / 2;
    }
    if (first > last)
        printf("Not found! %d isn't present in the list.\n", find);
    return 0;
}