#include <stdio.h>
#define SIZE 7

int a[] = {10, 25, 41, 5, 65, 83, 21};

void display()
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf(" %d", a[i]);
    }
}

void selectionSort()
{
    int i, j, min, tmp;

    for (i = 0; i < SIZE-1; i++)
    {
        min = i;
        for (j = i + 1; j < SIZE; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        tmp = a[i];
        a[i] = a[min];
        a[min] = tmp;
    }

  
}

int main()
{
    printf("\nArray Before Sort: ");
    display();
    selectionSort();
    printf("\nArray After Sort: ");
    display();

    return 0;
}