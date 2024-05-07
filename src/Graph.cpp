#include "Graph.h"

Graph::Graph() {
}

void Graph::addEdge(Vertex* v0, Vertex* v1) {
    Edge* edge = new Edge(v0, v1);
    edges.push_back(edge);

    addVertex(v0);
    addVertex(v1);
}

void Graph::addVertex(Vertex* vertex) {
    if (vertices.find(vertex->label) == vertices.end()) {
        vertices[vertex->label] = vertex;
    }
}

Vertex* Graph::getVertex(std::string label) {
    return vertices[label];
}

std::vector<std::string> Graph::shortestPath(std::string start, std::string end) {
    std::unordered_map<std::string, bool> visited;
    std::unordered_map<std::string, std::string> parent;
    std::queue<Vertex*> q;
    std::vector<std::string> path;

    Vertex* startVertex = vertices[start];
    Vertex* endVertex = vertices[end];

    visited[startVertex->label] = true;
    q.push(startVertex);

    while (!q.empty()) {
        Vertex* current = q.front();
        q.pop();

        for (auto edge : edges) {
            if (edge->getV0() == current) {
                Vertex* neighbour = edge->getV1();
                if (!visited[neighbour->label]) {
                    visited[neighbour->label] = true;
                    parent[neighbour->label] = current->label;
                    q.push(neighbour);
                }
            } else if (edge->getV1() == current) {
                Vertex* neighbour = edge->getV0();
                if (!visited[neighbour->label]) {
                    visited[neighbour->label] = true;
                    parent[neighbour->label] = current->label;
                    q.push(neighbour);
                }
            }
        }
    }

    if (!visited[endVertex->label]) {
        path.push_back("NO ROUTE");
        return path;
    }

    std::string current = end;
    while (current != start) {
        path.push_back(current);
        current = parent[current];
    }
    path.push_back(start);
    std::reverse(path.begin(), path.end());

    return path;
}

void Graph::addStop(std::string stop) {
    Vertex* vertex = new Vertex(stop);
    vertex->label = stop;
    addVertex(vertex);
}

void Graph::addConnection(std::string first, std::string second) {
    addEdge(getVertex(first), getVertex(second));
}


