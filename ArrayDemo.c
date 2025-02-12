#include <stdio.h>

int a[5];

void scanArray()
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("\nenter value");
        scanf("%d", &a[i]);
    }
}

void printArray()
{

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("\n%d", a[i]);
    }
}
int main()
{
    scanArray();
    printArray();

    return 0;
}