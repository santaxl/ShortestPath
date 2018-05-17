/*
 * FILE NAME: FindShortestPath.c
 *
 * AUTHOR: Dominik Mankowski
 *
 * DATE: 3.05.2016
 *
 * DESCRIPTION:
 *
 * This file contains definition of structure, that
 * create priority queue.
 */


#ifndef SHORTEST_PATH_FINDSHORTESTPATH_H
#define SHORTEST_PATH_FINDSHORTESTPATH_H

#include <stdio.h>

#include "ErrorCodes.h"
#include "ProgramInterface.h"
#include "GraphRepresentation.h"

typedef struct PQNode
{
    unsigned int city_number;
    double key;
}PQNode_t;

/* Declarations */

void addCity(shortest_path *, char *);
programError_t checkIfIsInGraph(const Graph_t *, const char *);
programError_t checkIfNameIsCorrect(const char *);
programError_t checkIfNamesAreTheSame(const char *, const char *);
void checkMemory(void *);
void decreaseKeys(double *, PQNode_t **, size_t *);
void DijkstrasAlgorithm(PQNode_t **, size_t, unsigned int, const Graph_t *, double *, int *);
void extractMin(PQNode_t **, size_t *);
void getCitysName(manage_cities, char *);
void findShortestPath(const Graph_t *, const char *, const char *);
void findShortestPathMenu(Graph_t *);
void heapify(PQNode_t **, size_t, unsigned int);
void heapifyRoot(PQNode_t **, size_t, unsigned int);
void printErrorSystem(systemError_t);
void printErrorUsersActions(programError_t);
void removeLastPQ(PQNode_t **, size_t *);
void setPath(shortest_path *, unsigned int, const int *, char **);
void showThePath(shortest_path path, const char *, const char *, unsigned int, double *);
void swapPQNodes(PQNode_t **, unsigned int, unsigned int);
void updateDistanceArray(unsigned int, double *, const Graph_t *, int *);
void updateOrdinalNumbers(Graph_t *);


#endif //SHORTEST_PATH_FINDSHORTESTPATH_H
