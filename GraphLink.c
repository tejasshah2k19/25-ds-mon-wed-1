#include <stdio.h>
#include <stdlib.h>

struct edges
{

    int src;
    int dest;
};
struct edges *e;
int totalEdges;
void dfs(int s) //3 6 9 7 
{

    printf(" %d", s);//3 6 9  7 
    for (int i = 0; i < totalEdges;i++){
        if(e[i].src == s){//3 
            //visited e[i].dest present ? 
              
            dfs(e[i].dest);//6 9 
        }
    }
}

int main()
{

    int i;
    int s, d;

    printf("\nEnter Total Edges");
    scanf("%d", &totalEdges); // *2

    e = calloc(totalEdges * 2, sizeof(struct edges));

    for (i = 0; i < totalEdges * 2; i++)
    {
        printf("\nEnter Src And Dest");
        scanf("%d%d", &s, &d); // 50 100
        e[i].src = s;
        e[i].dest = d;
        i++;
        e[i].src = d;
        e[i].dest = s;
    }

    printf("\nEnter source node => ");
    scanf("%d", &s);

    for (i = 0; i < totalEdges * 2; i++)
    {
        if (e[i].src == s)
        {
            printf(" %d", e[i].dest);
        }
    }

    dfs(2);

    return 0;
}