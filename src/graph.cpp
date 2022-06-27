#include "graph.hpp"
#include <iostream>

GraphAbs::Graph::Graph(){

    std::cout << "Graph constructor called! " << std::endl;

}


GraphAbs::Graph::Graph(std::initializer_list<std::pair<int,int>> edges){
    for (auto edge: edges){
        // Update the adjacency list
        _adjList[edge.first].emplace_back(edge.second);

        // Add both vertices to the vertices set (duplicates not allowed)
        _vertices.emplace(edge.first);
        _vertices.emplace(edge.second);
    }
}

int GraphAbs::Graph::removeVertex(int vertex){

    // TODO: consider the case where the graph is directed
    //       and the vertex does not have any out-edges (only in-edges)
    //       in this case, will need to go over all other vertices to find
    //       out which ones had out-edges to this vertex, and remove these 
    //       edges

    // If the vertex does not exist in the graph, just return 0
    if (_adjList.find(vertex) == _adjList.end()){
        return 0;
    }

    int edgesRemoved = 0;

    // First remove entries in the neighbors adjList that point to the current vertex (if any)
    for (int neighbor: _adjList[vertex]){
        if (_adjList.find(neighbor) != _adjList.end()){
            auto target = std::find(_adjList[neighbor].begin(), _adjList[neighbor].end(), vertex);
            if (target != _adjList[neighbor].end()){
                _adjList[neighbor].erase(target);
                ++edgesRemoved;
            }
            // cleanup if vertex was the last neighbor of neighbor
            if (_adjList[neighbor].empty()){
                _adjList.erase(neighbor);
            }

        }
    }

    edgesRemoved += _adjList[vertex].size();
    _adjList.erase(vertex);

    return edgesRemoved;
}


int GraphAbs::Graph::getNumVertices() const {
    return _vertices.size();
}

void GraphAbs::Graph::printList(){
    std::cout << "Adjacency List of the Graph:" << std::endl;
    std::cout << "===========================" << std::endl;
    for (auto& entry: _adjList){
        std::cout << entry.first << " : ";
        for (auto& neighbor: entry.second){
            std::cout << neighbor << " ";
        } 
        std::cout << std::endl;
    } 
}
