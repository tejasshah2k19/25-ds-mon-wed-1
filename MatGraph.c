#include <stdio.h>

//extern -> 0 
int graph[4][4];

int main()
{

    int i, j;
    int search;
    int s, d, c;
    int totalEdges;

    printf("\nHow many Edges You have?");
    scanf("%d", &totalEdges);

    for (i = 1; i <= totalEdges; i++)
    {
        printf("\nEnter Source - Destination - cost : ");
        scanf("%d%d%d", &s, &d, &c);
        graph[s][d] = c;
        graph[d][s] = c;
    }

    printf("\nEnter node that you want check?"); // 3
    scanf("%d", &search);                        // 3

    for (j = 0; j < 4; j++)
    {
        if (graph[search][j] != 0)
        { // 30 31 32 33
            printf(" %d", j);
        }
    }

    return 0;
}

// int main()
// {

//     int graph[4][4];

//     int i, j;
//     int search;

//     for (i = 0; i < 4; i++)
//     {
//         // 0
//         for (j = 0; j < 4; j++)
//         {
//             printf("%d is connected %d", i, j); // 0 0  0 1 0 2 0 3
//             scanf("%d", &graph[i][j]);
//         }
//     }

//     printf("\nEnter node that you want check?"); // 3
//     scanf("%d", &search);//3

//         for (j = 0; j < 4; j++)
//         {
//             if(graph[search][j] == 1){//30 31 32 33
//                 printf(" %d",j);
//             }
//         }

//     return 0;
// }