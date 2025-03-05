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

void insertionSort()
{
    int i, j, tmp;

     for(i=1;i<SIZE;i++){
            tmp = a[i]; 
            for(j=i-1;j>=0 && tmp < a[j];j--){
                a[j+1] = a[j];
            }
            a[j+1] = tmp; 
     }

  
}

int main()
{
    printf("\nArray Before Sort: ");
    display();
    insertionSort();
    printf("\nArray After Sort: ");
    display();

    return 0;
}