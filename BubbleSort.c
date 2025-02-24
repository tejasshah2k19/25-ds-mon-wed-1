#include <stdio.h>
#define SIZE 6

// int a[] = {34, 56, 78, 98, 76, 5};

int a[] = {1, 2, 3, 4, 5, 6};

void display()
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf(" %d", a[i]);
    }
}

void bubbleSort()
{
    int j, tmp, i, swap = 1;
    for (i = 0; i < SIZE - 1 && swap == 1; i++)
    {
        swap = 0;
        for (j = 0; j < SIZE - 1  ; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap = 1;
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
        printf("\nPass %d:", i + 1);
        display();
    }
}
int main()
{

    printf("\nArray Bfore Sort : ");
    display();

    bubbleSort();

    printf("\nArray After Sort : ");
    display();
    return 0;
}