/* Basic graph theory library */


#ifndef GRAPH_H
#define GRAPH_H


#include <iostream>
#include <vector> 

#include <stdio.h>
#include <stdlib.h>

#include "stdc++.h"

using namespace std;



struct node_t
{
	int val;
	int state;
	vector<node_t> neighbors;
};


class Graph
{
	private:
		int nodeCount;
		vector<node_t> nodeVec;
		vector<tuple<int, int>> edgeVec;

	public:

		// creates graph with n nodes and no edges
		void init(int n);

		// checks if node1 and node2 are neighbors
		bool isNeighbor(int node1, int node2);

		// checks if node exists in graph
		bool isNode(int node);

		// adds n nodes to graph
		void addNodes(int n);

		// adds edge between node1 and node 2
		void addEdge(int node1, int node2);

		// adds created a sequence of edges from start to end
		void addEdgesLinear(int start, int end);

		// prints node set and edge set
		void printGraph(void);

};










#endif