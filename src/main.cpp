#include <iostream>
#include <sstream>
#include "Graph.h"

using namespace std;

int main() {
    int n;
    cin >> n;

    Graph g;

    for (int i = 0; i < n; ++i) {
        string stop;
        cin >> stop;
        g.addStop(stop);
    }

    int m;
    cin >> m;


    for (int i = 0; i < m; ++i) {
        string line;
        cin >> line;


        string stops;
        getline(cin, stops);
        stops.erase(0, 1);

        istringstream iss(stops);

        string f, token;
        while (iss >> token) {
            if (f.empty()) {
                f = token;
                continue;
            }
            g.addConnection(f, token);
            f = token;
        }
    }


    string start, end;
    cin >> start >> end;

    vector<string> path = g.shortestPath(start, end);

    for (const auto& stop : path) {
        cout << stop << " ";
    }
    cout << endl;

    return 0;
}
