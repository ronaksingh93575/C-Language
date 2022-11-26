#include <stdio.h>
#include <conio.h>
int main()
{
    int array[100], position, i, n, choice;
    do
    {
        printf("\n--------Menu--------\nEnter 1 for Insertion\nEnter 2 for Deletion\nEnter 3 for Display\nEnter 4 for Exit  :- ");
    	scanf("%d", &choice);
    	switch (choice)
  	{
        case 1:
            printf("Enter size of array\n");
            scanf("%d", &n);
            for (i = 0; i <= n - 1; i++)
            {
                printf("Enter your element :- ");
                scanf("%d", &array[i]);
            }
            break;
        case 2:
            printf("\n--------Deletion--------\n\nEnter the Loction you want to delete :- ");
            scanf("%d", &position);
            if (position >= n + 1)
            {
                printf("Deletion not possible.\n");
            }
            else
            {
                for (i = position - 1; i <= n - 1; i++)
                    array[i] = array[i + 1];
            }
            break;
        case 3:
            printf("\n--------Display--------\n\n Your Array :-\n");
            for (i = 0; i <= n - 1; i++)
            {
                printf("%d\t", array[i]);
            }
            break;
        case 4:
            printf("");
            break;
        default:
            printf("''Sorry'' wrong choice\n");
            break;
      }
    } while (choice < 4);
    printf("--------Succefully Exit--------");
    return 0;
}
