#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[20];
    int rollNum;
    struct student *next; // self referential structure
} *head = NULL, *last = NULL;

void addStudent()
{
    struct student *tmp;
    if (head == NULL)
    {
        head = malloc(sizeof(struct student));
        printf("\nEnter name and roll num");
        scanf("%s%d", &head->name, &head->rollNum);
        head->next = NULL;
        last = head;
    }
    else
    {
        tmp = malloc(sizeof(struct student));
        printf("\nEnter name and roll num");
        scanf("%s%d", &tmp->name, &tmp->rollNum);
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}

void display()
{
    struct student *p;
    for (p = head; p!=NULL;p=p->next){
        printf(" %s",p->name);
    }
}
int main()
{

    addStudent();
    addStudent();
    addStudent();
    addStudent();

    display(); //
}