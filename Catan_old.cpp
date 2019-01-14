#include "Catan.h"

// return the tile count
int* Catan::getRemainingTiles(void)
{
	return tiles;
}


// generate random sequence of tiles for board 
void Catan::genBoard(void)
{
	int nextTile;

	// set seed for rand
	srand(time(0));


	int i = 0;
	while(i < 19)
	{

		// get random number for next tile
		nextTile = rand()%6;


		// check that there are remaining tiles of that type
		// assigned to board and update variables
		if(tiles[nextTile] != 0)
		{
			boardTile[i] = nextTile;
			tiles[nextTile]--;
			i++;

			// store position of the desert
			if(nextTile == Desert)
			{
				desertPos = i;
			}
		}
	}
}

// generate random sequence of numbers for board 
void Catan::genNumbers(void)
{

	int nextNum;

	// set seed for rand
	srand(time(0));

	int i = 0;
	while(i < 18)
	{
		nextNum = rand()%11;

		if(nums[nextNum] != 0)
		{
			boardNum[i] = nextNum+2;
			nums[nextNum]--;
			i++;
		}
	}
}

// initializes the board corner/road arrays
//
// - the corners are visualized as if the hexagons are rectangles
// - i.e. low three and upper three corners for each hexagon are 
// in the same 'y plane'
void Catan::initBoard(void)
{
	int i, j;

	for(i = 0; i < CORNER_Y; i++)
	{
		for(j = 0; j < CORNER_X; j++)
		{
			// bottom and top rows
			if(i == 0 || i == CORNER_Y-1)
			{
				if(j < 2 || j > CORNER_X-3)
				{
					hexCorner[j][i] = -1;
				}
				else
				{
					hexCorner[j][i] = Corner_Empty;
				}
			}
			// one from bottom and top rows
			else if(i == 1 || i == CORNER_Y-2)
			{
				if(j < 1 || j > CORNER_X-2)
				{
					hexCorner[j][i] = -1;
				}
				else
				{
					hexCorner[j][i] = Corner_Empty;
				}
			}
			// middle rows
			else
			{
				hexCorner[j][i] = Corner_Empty;
			}
		}
	}

	for(i = 0; i < CORNER_Y; i++)
	{
		for(j = 0; j < CORNER_X; j++)
		{
			cout << hexCorner[j][i];
		}
		cout << "\n";
	}
}

// print board
void Catan::printBoard(void)
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

// print board
void Catan::printNums(void)
{
	int i;

	cout << "  ";
	for(i = 0; i < 3; i++)
	{
		cout << boardNum[i];
		cout << " ";
	}
	cout << "\n ";

	for(; i < 7; i++)
	{
		cout << boardNum[i];	
		cout << " ";
	}
	cout << "\n";

	for(; i < 12; i++)
	{
		cout << boardNum[i];
		cout << " ";
	}
	cout << "\n ";

	for(; i < 16; i++)
	{
		cout << boardNum[i];
		cout << " ";
	}
	cout << "\n  ";

	for(; i < 19; i++)
	{
		cout << boardNum[i];
		cout << " ";
	}
	cout << "\n";
}






