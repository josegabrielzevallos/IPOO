#include "graph.h"
#include <stdexcept>

Graph::Graph(const vector<int> &starts, const vector<int> &ends){
	
    if (starts.size() != ends.size())
        throw invalid_argument("The entered lists are of different length");
		
    for (unsigned i = 0; i < starts.size(); i++){
        int startEdge = starts[i];
        int endEdge = ends[i];

        outgoingEdges[startEdge].push_back(endEdge);
        outgoingEdges[endEdge];              //Creates a new Pair in the map with key endEdge, and a default constructor vector
		
    }
	
}

unsigned Graph::numOutgoing(const int nodeID) const{
	
    //return outgoingEdges.at(nodeID).size();   //at() has a const form, we cant use [] because it doesnt have a const form
    return adjacent(nodeID).size();
	
}

const vector<int> &Graph::adjacent(const int nodeID) const{
	
    map<int, vector<int> >::const_iterator i = outgoingEdges.find(nodeID); //Return a const_iterator
    if(i == outgoingEdges.end())
        throw invalid_argument("Invalid start node");
    return i -> second;
	
}
