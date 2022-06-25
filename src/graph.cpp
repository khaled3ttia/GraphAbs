#include "graph.hpp"
#include <iostream>

GraphAbs::Graph::Graph(){

    std::cout << "Graph constructor called! " << std::endl;

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
