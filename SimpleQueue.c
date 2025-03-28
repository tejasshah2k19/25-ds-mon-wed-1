#include <stdio.h>
#define S 5

int q[S];
int f = -1;
int r = -1;

void insert(int num)
{
    if(r == S-1){
        printf("\nQ is Full");
    }else{
        //insertion 
    }
}
void removeData()
{
    if (f == -1)
    {
        printf("\nQ is empty");
    }
    else if (f == r)
    {
        // last element in the queue
        f = -1;
        r = -1;
    }
    else
    { 
        f++;
    }
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
        printf("\n0 For Exit\n1 For Insert\n2 For Remove\n3 For Display\nEnter your choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert(num);
            break;
        case 2:
            removeData();
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