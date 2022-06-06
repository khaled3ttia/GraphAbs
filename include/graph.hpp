#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <vector>
#include <unordered_map>


class Graph {

    public:
        Graph();

    private:
        std::unordered_map<int, std::vector<int>> _adjList;

};


#endif
