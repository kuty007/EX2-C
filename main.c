#include <stdio.h>
#include "my_mat.h"

#define VR 10
int graph[VR][VR];
int a, b;

int main(void) {
    int run = 1;
    while (run) {
        char action;
        scanf("%c", &action);
        switch (action) {
            case 'A':
                for (int i = 0; i < 10; i++) {
                    for (int j = 0; j < 10; j++) {
                        graph[i][j] = 0;
                    }
                }
                Create_graph(graph);
                break;

            case 'B':
                scanf("%d%d", &a, &b);
                if (exsitPath(graph, a, b) == 0) {
                    printf("False\n");
                } else {
                    printf("True\n");
                }
                break;
            case 'C':
                scanf("%d%d", &a, &b);
                if (shortPath(graph, a, b) == 0) {
                    printf("%d\n", -1);
                } else {
                    printf("%d\n", shortPath(graph, a, b));
                }
                break;
            case 'D':
                run = 0;
                break;
        }
    }
}

