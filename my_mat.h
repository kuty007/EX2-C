//
// Created by Asaf Yekutiel on 01/12/2021.
//

#ifndef MY_MAT_H
#define MY_MAT_H
const int VR;

int min(int a, int b);

void Create_graph(int graph[VR][VR]);

void short_path_algorithm(int graph[VR][VR]);

int exsitPath(int graph[VR][VR], int a, int b);

int shortPath(int graph[VR][VR], int a, int b);


#endif MY_MAT_H
