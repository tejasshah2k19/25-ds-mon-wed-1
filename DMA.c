#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[20];
    int rollNum;
};

int main()
{

    int *a; //
    int i;
    // a = malloc(sizeof(int)); //4 2

    // printf("Enter number");
    // scanf("%d",&a);
    // printf(" a = %d",a);
    // free(a);

    // printf("A removed");

    // a = calloc(5,sizeof(int));
    // for(i=0;i<5;i++){
    //     printf("\nEnter nuMber");
    //     scanf("%d",&a[i]);
    // }

    // for(i=0;i<5;i++){
    //     printf("\n%d",a[i]);
    // }

    // free(a);
    struct student s;
    struct student *p;

    p = (struct student *)malloc(sizeof(struct student));
    printf("\nEnter name and num");
    scanf("%s%d", &s.name, &s.rollNum);

    printf("\nEnter name and num");
    scanf("%s%d", &p->name, &p->rollNum);

    printf("\nname = %s num = %d", s.name, s.rollNum);
    printf("\nname = %s num = %d", p->name, p->rollNum);

    return 0;
}