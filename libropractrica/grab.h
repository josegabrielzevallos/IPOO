#include <vector>
#include <map>

using namespace std;

class Graph{
	
public:
    Graph(const vector<int> &starts, const vector<int> &ends);
    unsigned numOutgoing(const int nodeID) const;
    const vector<int> &adjacent(const int nodeID) const;
private:
    map<int, vector<int> > outgoingEdges;
	
};
