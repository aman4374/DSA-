#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <utility> // for std::pair

using namespace std;

// Structure to represent an edge
struct Edge {
    int x1, y1, x2, y2;
};

// Function to add edges to the graph
void addEdge(unordered_map<int, unordered_map<int, set<pair<int, int>>>>& graph, int x1, int y1, int x2, int y2) {
    graph[x1][y1].insert({x2, y2});
    graph[x2][y2].insert({x1, y1});
}

// DFS to find cycles
bool dfs(int x, int y, int parentX, int parentY,
         unordered_map<int, unordered_map<int, set<pair<int, int>>>>& graph,
         set<pair<int, int>>& visited) {
    visited.insert({x, y});
    
    for (const auto& neighbor : graph[x][y]) {
        if (neighbor == make_pair(parentX, parentY)) continue; // Skip the edge we came from
        if (visited.count(neighbor)) return true; // Found a cycle
        if (dfs(neighbor.first, neighbor.second, x, y, graph, visited)) return true;
    }
    
    return false;
}

// Function to count closed shapes
int countClosedShapes(const vector<Edge>& edges) {
    unordered_map<int, unordered_map<int, set<pair<int, int>>>> graph;
    
    // Build the graph from edges
    for (const auto& edge : edges) {
        addEdge(graph, edge.x1, edge.y1, edge.x2, edge.y2);
    }

    set<pair<int, int>> visited;
    int closedShapesCount = 0;

    // Perform DFS for each node in the graph
    for (const auto& entry : graph) {
        for (const auto& innerEntry : entry.second) {
            for (const auto& neighbor : innerEntry.second) {
                if (!visited.count({entry.first, innerEntry.first})) {
                    // Start DFS from this node
                    if (dfs(entry.first, innerEntry.first, -1, -1, graph, visited)) {
                        closedShapesCount++;
                    }
                }
            }
        }
    }

    return closedShapesCount;
}

int main() {
    int N;
    cin >> N;

    vector<Edge> edges(N);
    
    // Read the line segments
    for (int i = 0; i < N; ++i) {
        cin >> edges[i].x1 >> edges[i].y1 >> edges[i].x2 >> edges[i].y2;
    }

    // Count and print the number of closed shapes
    cout << countClosedShapes(edges) ;

    return 0;
}