#include "Catan.h"



void Catan::initBoard(void)
{
	Catan::createLocationGraph();
	Catan::createTileVector();
	return;
}

void Catan::createLocationGraph(void)
{
	board.init(NUM_LOCATIONS);

	// add linear edges first (horizontal edges)
	board.addEdgesLinear(0,6);
	board.addEdgesLinear(7,15);
	board.addEdgesLinear(16,26);
	board.addEdgesLinear(27,37);
	board.addEdgesLinear(38,46);
	board.addEdgesLinear(47,53);


	// add vertical edges
	
	// number of nodes in each row
	const int numVertEdges[NUM_ROWS-1] = NUM_VERTEDGES;

	// need to add this to each node for the vertical edges
	const int vertEdgeOffset[NUM_ROWS-1] = {8, 10, 11, 10 , 8};

	int i,j,k;
	k = 0;

	// using NUM_ROWS-1 because we are adding edges from
	// upper row to bottom row and only need to iterate NUM_ROWS-1
	for(i = 0; i < NUM_ROWS-1; i++)
	{
		for(j = 0; j < numVertEdges[i]; j++)
		{

			// add edge from k to k+offset
			board.addEdge(k,k+vertEdgeOffset[i]);

			// increment by 2 (hexagons from board abstracted to rectangles)
			k += 2;
		}

		// if we are on first three rows, we only want to increment by 1
		// so we derement by 1 (we already added 2 in inner for loops)
		if(i < 2)
		{
			k--;		
		}
		// for the last change of row, we need to add one
		// this has to do with the geometry of the catan board
		else if(i == 3)
		{
			k++;
		}
		else
		{
			// i == 4 and we dont need to do anything
		}
	}
	return;
}


void Catan::createTileVector(void)
{
	int* tileTypes = Catan::genBoard();
	int* tileNums = Catan::genNumbers();

	int numCount = 0;
	for(int i = 0; i < NUM_TILES; i++)
	{
		tiles.push_back(tile_t());
		tiles[i].tileNum = i;
		tiles[i].tileType = tileTypes[i];

		// assign tile number (if desert we have no number)
		if(tiles[i].tileType == Desert)
		{
			tiles[i].diceVal = -1;
		}
		else
		{
			tiles[i].diceVal = tileNums[numCount];
			numCount++;
		}
		
		//locations[LOC_PER_TILE];
	}
	
	return;
}

// generate random sequence of tile types for board 
int* Catan::genBoard(void)
{
	int nextTile;
	int tileCount[NUM_TILETYPES] = TILE_COUNT;

	int* tileTypes = new int[NUM_TILES];


	// set seed for rand
	srand(time(0));


	int i = 0;
	while(i < NUM_TILES)
	{

		// get random number for next tile type
		nextTile = rand()%NUM_TILETYPES;

		// check that there are remaining tiles of that type
		// assigned to board and update variables
		if(tileCount[nextTile] != 0)
		{
			tileTypes[i] = nextTile;
			tileCount[nextTile]--;
			i++;

			// store position of the desert
			if(nextTile == Desert)
			{
				desertPos = i;
			}
		}
	}
	return tileTypes;
}

// generate random sequence of numbers for board 

int* Catan::genNumbers(void)
{

	int nextNum;
	int nums[NUM_TILENUMS] = NUMS_COUNT;

	int* tileNums = new int[NUM_TILES-1];

	// set seed for rand
	srand(time(0));

	int i = 0;
	while(i < NUM_TILES-1)
	{
		nextNum = rand()%11;

		if(nums[nextNum] != 0)
		{
			tileNums[i] = nextNum+2;
			nums[nextNum]--;
			i++;
		}
	}
	return tileNums;
}


void Catan::printBoard(void)
{
	board.printGraph();
}

// print board
void Catan::printTiles(int* boardTile)
{
	int i;

	cout << "  ";
	for(i = 0; i < 3; i++)
	{
		cout << boardTile[i];
		cout << " ";
	}
	cout << "\n ";

	for(; i < 7; i++)
	{
		cout << boardTile[i];	
		cout << " ";
	}
	cout << "\n";

	for(; i < 12; i++)
	{
		cout << boardTile[i];
		cout << " ";
	}
	cout << "\n ";

	for(; i < 16; i++)
	{
		cout << boardTile[i];
		cout << " ";
	}
	cout << "\n  ";

	for(; i < 19; i++)
	{
		cout << boardTile[i];
		cout << " ";
	}
	cout << "\n";
}

vector<tile_t> Catan::getTiles(void)
{
	return tiles;
}









