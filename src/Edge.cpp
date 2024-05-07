//
// Created by Maks Krywionek on 06/05/2024.
//

#include "Edge.h"

Edge::Edge(Vertex *v0, Vertex *v1) : v0(v0), v1(v1) {}

Vertex *Edge::getV0() const {
    return v0;
}

Vertex *Edge::getV1() const {
    return v1;
}

Vertex *Edge::getNeighbour(Vertex *v) const {
    if (v->label == v0->label) {
        return v1;
    } else if (v->label == v1->label) {
        return v0;
    } else {
        return nullptr;
    }
}