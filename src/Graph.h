//
// Created by Maks Krywionek on 26/04/2024.
//

#ifndef GRAF_GRAPH_H
#define GRAF_GRAPH_H


// Graph.h

#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <list>
#include "Vertex.h"
#include "Edge.h"


class Graph {
private:
    std::unordered_map<std::string, Vertex*> vertices;
    std::vector<Edge*> edges;

    void addEdge(Vertex *v0, Vertex *v1);

    void addVertex(Vertex* vertex);

    Vertex* getVertex(std::string label);

public:
    Graph();

    void addStop(std::string stop);

    void addConnection(std::string first, std::string second);

    std::vector<std::string> shortestPath(std::string start, std::string end);
};


#endif //GRAF_GRAPH_H
