#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <initializer_list>
#include <utility> // std::pair
#include <algorithm> // std::find
namespace GraphAbs {

class Graph {

    public:
        Graph();
        
        /*
        template<typename ...Pairs>
            Graph(Pairs... edges){
                std::vector<std::pair<int, int>> args { edges... };
                for (auto& edge: args){
                    _adjList[edge.first].emplace_back(edge.second);
                }
            }
        */

        Graph(std::initializer_list<std::pair<int,int>>);

        // Removes a vertex from the graph
        // Returns the total number of edges removed due to this operation
        int removeVertex(int);

        // Prints the contents of the adjacency list
        void printList();
    private:
        std::unordered_map<int, std::vector<int>> _adjList;
        std::unordered_set<int> _vertices;

}; //class


} //namespace

#endif
