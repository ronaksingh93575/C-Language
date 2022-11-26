#include <stdio.h>
#include <conio.h>
int main()
{
    int a[100], temp, size, i, j, choice;
    do
    {
        printf("\n\n------Menu------\n\n1. Insertion\n2. Sorting\n3. Display\n4. Exit\nEnter your choice:- ");
        scanf("%d", &choice);
        switch (choice)
        {

        case 1:
            printf("\nEnter the size of Array :- ");
            scanf("%d", &size);
            for (i = 0; i <= size - 1; i++)
            {
                printf("Enter the element :-");
                scanf("%d", &a[i]);
            }
            break;
        case 2:
            printf("\n------Sorting------\n");
            for (i = 0; i <= size - 1; i++)
            {
                for (j = i; j <= size - 1; j++)
                {
                    if (a[i] > a[j])
                    {
                        temp = a[j];
                        a[j] = a[i];
                        a[i] = temp;
                    }
                }
            }
            printf("Array Sorting ''Succesfull''");
            break;
        case 3:
            printf("\n------Display------\n");
            printf("Here is the New Sorted Array\n");
            for (i = 0; i <= size - 1; i++)
            {
                printf("%d\t", a[i]);
            }
            break;
        case 4:
            printf("");
            break;
        default:
            printf("\n''Sorry'' wrong choice\n");
        }
    } while (choice < 4);
    printf("--------Succefully Exit--------");


    return 0;
}