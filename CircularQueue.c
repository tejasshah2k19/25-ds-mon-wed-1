#include <stdio.h>
#include <stdlib.h>
#define S 5

int cq[S];

int f = -1, r = -1;

void enQueue(int num) // 10 20  30 40 50 600X
{
    // full
    if (r == S - 1 && f == 0)
    {
        printf("\nQueue is Full");
    }
    else if (r == f - 1)
    {
        printf("\nQueue is Full");
    }
    else if (r == S - 1 && f != 0)
    {
        r = 0;
        cq[r] = num;
    }
    else
    {
        r++;
        cq[r] = num;
        if (f == -1)
        {
            f = 0;
        }
    }
}

void deQueue()
{
    printf(" %d", cq[f]);
    f++;
}

void display()
{
    int i;
    if (r < f)
    {
        // cq
        for (i = f; i < S; i++)
        {
            printf(" %d", cq[i]);
        }

        for (i = 0; i <= r; i++)
        {
            printf(" %d", cq[i]);
        }
    }
    else
    {
        for (i = f; i <= r; i++)
        {
            printf(" %d", cq[i]);
        }
    }
}

int main()
{
    int choice;
    int num;

    while (1)
    {
        printf("\n0 For Exit\n1 For Insert\n2 For Remove\n3 For Display\nEnter your choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter number");
            scanf("%d", &num);
            enQueue(num);
            break;
        case 2:
            deQueue();
            break;
        case 3:
            display();
            break;
        default:
            break;
        }
    }
    return 0;
}