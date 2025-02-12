#include <stdio.h>
#include<stdlib.h>
#define SIZE 5

int a[SIZE]; // global

void insert(int data, int position)
{
    int i;
    if (a[position - 1] == 0)
    {
        a[position - 1] = data;
    }
    else
    {
        for (i = SIZE - 1; i >= position; i--)
        {
            a[i] = a[i - 1];
        }

        a[i] = data;
    }
}

void display()
{
    // print entire array
    int i;
    printf("\nElements in the Array : ");
    for (i = 0; i < SIZE; i++)
    {
        printf(" %d", a[i]);
    }
}

void removeItem(int position){
    //task
}

int main()
{

    int choice;
    int data, position;

    while (1)
    {
        printf("\n0 For Exit\n1 For Insert\n2 For Display\nEnter choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter data and position");
            scanf("%d%d", &data, &position);
            insert(data, position);
            break;
        case 2:
            display();
            break;
        case 3:
            printf("\nEnter position");
            scanf("%d",&position);
            removeItem(position);
        case 0:
            exit(0);

        default:
            break;
        }
    }

    return 0;
}