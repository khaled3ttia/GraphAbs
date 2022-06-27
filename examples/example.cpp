#include "graph.hpp"
#include <iostream>
using namespace GraphAbs; 

int main(){

    // Create a tiny graph with the following edges:
    // 10 --> 5
    // 2  --> 3
    // 10 --> 4
    // 10 --> 9
    Graph gr({std::make_pair(10, 5), std::make_pair(5,10), std::make_pair(2, 3), std::make_pair(10, 4), std::make_pair(10, 9)});


    std::cout << "Total number of vertices is : " << gr.getNumVertices() << std::endl;

    // Print the adjacency list
    gr.printList();

    // Remove a vertex
    int edgesRemoved = gr.removeVertex(10);


    std::cout << "After removing vertex 10..." << std::endl;
    std::cout << "Number of edges removed : " << edgesRemoved << std::endl;
    // Print the adjacency list again
    gr.printList();

}
