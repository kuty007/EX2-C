#include <stdio.h>
# include "my_mat.h"
#define VR 10
int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

void short_path_algorithm(int graph[VR][VR]) {
    for (int k = 0; k < VR; k++) {
        for (int i = 0; i < VR; i++) {
            for (int j = 0; j < VR; j++) {
                if (i != j) {
                    if (graph[i][k] != 0 && graph[k][j] != 0 && graph[i][j] == 0) {
                        graph[i][j] = graph[i][k] + graph[k][j];
                    }
                    if (graph[i][k] != 0 && graph[k][j] != 0 && graph[i][j] != 0) {
                        graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
                    }
                }
            }
        }
    }
}

void Create_graph(int graph[VR][VR]) {
    int num;
    for (int i = 0; i < VR; i++) {
        for (int j = 0; j < VR; j++) {
            scanf("%d", &num);
            graph[i][j] = num;
        }
    }
    short_path_algorithm(graph);
}

int exsitPath(int graph[VR][VR], int a, int b) {
    if (graph[a][b] == 0) {
        return 0;
    } else {
        return 1;
    }
}

int shortPath(int graph[VR][VR], int a, int b) {
    if (exsitPath == 0) {
        return 0;
    } else {
        return graph[a][b];
    }
}




