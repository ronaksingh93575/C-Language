#include <stdio.h>
#include <conio.h>
int main()
{
    int size;
    int arr[100];
    int search;
    printf("Enter size of array :- ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Insert Element :- ");
        scanf("%d", &arr[i]);
    }

    printf("Enter value want to be seacrh :- ");
    scanf("%d", &search);

    for (int i = 0; i < size; i++)
    {
        if (search == arr[i])
        {
            printf("Value found at laoction %d\n", i);
            break;
        }
        else
            printf("!!!! Value not found\n");
    }
    return 0;
}
