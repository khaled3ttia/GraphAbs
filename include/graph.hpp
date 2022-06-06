#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <vector>
#include <unordered_map>

namespace GraphAbs {

class Graph {

    public:
        Graph();

    private:
        std::unordered_map<int, std::vector<int>> _adjList;

}; //class


} //namespace

#endif
