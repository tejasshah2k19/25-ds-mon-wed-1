#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int stack[SIZE];
int top = -1; // -1 EMPTY

void push(int num)
{
}

void pop()
{
}

void display()
{
}

int main()
{

    int choice;
    int num;

    while (1)
    {
        printf("\n1 For PUSH\n2 For POP\n3 For Display\n0 For Exit\nEnter choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEntern number");
            scanf("%d", &num);
            push(num);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 0:
            exit(0);

        default:
            printf("\nInvalid Choice PTA");
            break;
        }
    }

    return 0;
}