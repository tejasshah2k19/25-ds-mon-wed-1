#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

char stack[SIZE];
int top = -1; // -1 EMPTY

void push(char num)
{
    if (top == SIZE - 1)
    {
        printf("\nStack Overflow");
    }
    else
    {
        top++;
        stack[top] = num;
    }
}

int pop()
{
    return stack[top--];
}

void display()
{
}

int main()
{

    char str[SIZE];
    int i;
    char c;
    printf("\nEnter the string");
    scanf("%s", &str); // ({})
    int flag = 1;      // good
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '{' || str[i] == '(' || str[i] == '[')
        {
            push(str[i]);
        }
        else
        {
            c = pop(); //{
            // i => }
            if (str[i] == '}' && c == '{')
            {
            }
            else if (str[i] == ']' && c == '[')
            {
            }
            else if (str[i] == ')' && c == '(')
            {
            }
            else
            {
                flag = -1;
                break;
            }
        }
    }

    if (flag == -1 || top != -1)
    {
        printf("\nInValid");
    }
    else
    {
        printf("\nValid");
    }
    return 0;
}