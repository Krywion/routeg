//
// Created by Maks Krywionek on 06/05/2024.
//

#ifndef GRAF_EDGE_H
#define GRAF_EDGE_H

#include "Vertex.h"

class Edge {
protected:
    Vertex *v0;
    Vertex *v1;
public:

    Edge(Vertex *v0, Vertex *v1);

    Vertex *getV0() const;

    Vertex *getV1() const;

    Vertex *getNeighbour(Vertex *v) const;
};


#endif //GRAF_EDGE_H
