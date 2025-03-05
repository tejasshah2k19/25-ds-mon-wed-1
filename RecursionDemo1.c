#include <stdio.h>

// print your name 5 times
void print()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("\nRoyal");
    }
}

void printRecursion(int count)
{ // 1 2 3 4

    printf("\nRoyal"); // 1 2 3 4
    count++;           // 2 3 4 5
    if (count != 5)
    {
        printRecursion(count);
    }
}

void printNumber(int count)
{
    if (count == 0)
        return;
    printf("%d ", count);
    printNumber(--count);
}

void printNumberv2(int start,int end){

    if(start == end+1){
        return; 
    }
    printf("%d ",start); //10 11 12 13 14 15 
    printNumberv2(++start,end);
}

int main()
{

    // printRecursion(0);
    // printNumber(10); // 10 9 8 7 6 5 4 3 2 1


    printNumberv2(10,15); //10 11 12 13 14 15 

    return 0;
}
