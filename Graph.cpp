

#include "Graph.h"

// initializes graph with n nodes and no edges
void Graph::init(int n)
{
	int i;

	// create nodes for graph and store in nodeVec
	for(i = 0; i<n; i++)
	{
		nodeVec.push_back(node_t());
		nodeVec[i].val = i;
	}
}

// checks if node1 and node2 are neighbors
bool Graph::isNeighbor(int node1, int node2)
{
	int n1_neighbor = nodeVec[node1].neighbors.size();
	int n2_neighbor = nodeVec[node2].neighbors.size();
	int i;

	bool ret = false;

	if(n1_neighbor < n2_neighbor)
	{
		for(i = 0; i < n1_neighbor; i++)
		{
			if(nodeVec[node1].neighbors[i].val == node2)
			{
				ret = true;
			}
		}
	}
	else
	{
		for(i = 0; i < n2_neighbor; i++)
		{
			if(nodeVec[node2].neighbors[i].val == node1)
			{
				ret = true;
			}
		}
	}

	return ret;
}

// checks if the node is in the graph
bool Graph::isNode(int node)
{
	int numNodes = nodeVec.size();

	if(node < numNodes)
	{
		return true;
	}
	return false;
}

// adds n nodes to the existing graph
void Graph::addNodes(int n)
{	
	int numNodes = nodeVec.size();
	int i = numNodes;

	for(; i < (numNodes+n); i++)
	{
		nodeVec.push_back(node_t());
		nodeVec[i].val = i;
	}
}

// adds an edge between node1 and node2 in existing graph
void Graph::addEdge(int node1, int node2)
{	
	// edge is already in graph
	if(Graph::isNeighbor(node1, node2)){
		//cout << "edge already exists\n";
		return;
	}

	// nodes do no exist in graph
	if(!Graph::isNode(node1) || !Graph::isNode(node2))
	{
		//cout << "node doesn't exist\n";
		return;
	}

	// add edge to edgeVec
	edgeVec.push_back(make_tuple(node1,node2));

	// add each node to the others neighbor list
	nodeVec[node1].neighbors.push_back(nodeVec[node2]);
	nodeVec[node2].neighbors.push_back(nodeVec[node1]);

	return;
}

// addes edges between each pair of nodes from start to end
void Graph::addEdgesLinear(int start, int end)
{
	int i;
	int numEdgesToAdd = end-start;

	// nodes do no exist in graph
	if(!Graph::isNode(start) || !Graph::isNode(end))
	{
		//cout << "node doesn't exist\n";
		return;
	}

	for(i = 0; i < numEdgesToAdd; i++)
	{
		Graph::addEdge(start+i, start+i+1);
	}
}

// prints a list of nodes and list of edges in existing graph
void Graph::printGraph(void)
{
	int i;
	int n = nodeVec.size();
	int m = edgeVec.size();


	cout << "Printing Nodes:\n";
	for(i = 0; i < n; i++)
	{
		cout << nodeVec[i].val << "\n";
	}
	
	cout << "Printing Edges:\n";
	for(i = 0; i < m; i++)
	{
		cout << get<0>(edgeVec[i]) << " ";
		cout << get<1>(edgeVec[i]) << "\n";
		
	}
}



