#include "graph.hpp"

using namespace GraphAbs; 

int main(){

    // Create a tiny graph with the following edges:
    // 10 -- 5
    // 2  -- 3
    // 10 -- 4
    // 10 -- 9
    Graph gr(std::make_pair(10, 5), std::make_pair(2, 3), std::make_pair(10, 4), std::make_pair(10, 9));


    // Print the adjacency list
    gr.printList();
}
