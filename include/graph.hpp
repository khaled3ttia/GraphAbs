#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <vector>
#include <unordered_map>
#include <utility> // std::pair

namespace GraphAbs {

class Graph {

    public:
        Graph();
        
        template<typename ...Pairs>
            Graph(Pairs... edges){
                std::vector<std::pair<int, int>> args { edges... };
                for (auto& edge: args){
                    _adjList[edge.first].emplace_back(edge.second);
                }
            }
            
        // Prints the contents of the adjacency list
        void printList();
    private:
        std::unordered_map<int, std::vector<int>> _adjList;

}; //class


} //namespace

#endif
