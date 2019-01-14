#include "Catan.h"



void Catan::initBoard(void)
{
	locations.init(NUM_LOCATIONS);

	// add linear edges first (horizontal edges)
	locations.addEdgesLinear(0,6);
	locations.addEdgesLinear(7,15);
	locations.addEdgesLinear(16,26);
	locations.addEdgesLinear(27,37);
	locations.addEdgesLinear(38,46);
	locations.addEdgesLinear(47,53);


	// add vertical edges
	
	// number of nodes in each row
	const int numCols[NUM_ROWS] = NUM_COLS;

	// need to add this to each node for the vertical edges
	const int vertEdgeOffset[NUM_ROWS-1] = {8, 10, 11, 10 , 8};

	int i,j,k;
	k = 0;

	// using NUM_ROWS-1 because we are adding edges from
	// upper row to bottom row and only need to iterate NUM_ROWS-1
	for(i = 0; i < NUM_ROWS-1; i++)
	{
		for(j = 0; j < numCols[i]; j++)
		{

			// add edge from k to k+offset
			locations.addEdge(k,k+vertEdgeOffset[i]);

			// increment by 2 (hexagons from board abstracted to rectangles)
			k += 2;
		}
		// increment by 1 for next row
		k++;
	}

	return;
}


void Catan::printBoard(void)
{
	locations.printGraph();
}










