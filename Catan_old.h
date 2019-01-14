#ifndef CATAN_H
#define CATAN_H

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

#define NUM_TILES 19

#define CORNER_X 11
#define CORNER_Y 6

#define SIDE_X 16
#define SIDE_Y 11

#define NUM_WOOD 4
#define NUM_BRICK 3
#define NUM_SHEEP 4
#define NUM_WHEAT 4
#define NUM_ORE 3
#define NUM_DESERT 1

#define TILE_COUNT {NUM_WOOD, NUM_BRICK, NUM_SHEEP, NUM_WHEAT, NUM_ORE, NUM_DESERT}
#define NUMS_COUNT {1,2,2,2,2,0,2,2,2,2,1}


// enum values match tiles array positions
enum Resource
{
	Wood,
	Brick,
	Sheep,
	Wheat,
	Ore,
	Desert
};

// each hex corner is one of the three
enum HexCorner
{
	Corner_Empty,
	Corner_Settlement,
	Corner_City
};

// each hex side is empty or has a road
enum HexSide
{
	Side_Empty,
	Side_Road
};

class Catan
{
	private:

		// values for making the board
		int tiles[6] = TILE_COUNT;
		int nums[11] = NUMS_COUNT;

		// storing the board
		int boardTile[NUM_TILES];
		int boardNum[NUM_TILES];

		int hexCorner[CORNER_X][CORNER_Y];
		int hexSide[SIDE_X][SIDE_Y];

		// specific desert position
		int desertPos;

		//
		int settlements;
		int roads;


	public:

		int* getRemainingTiles(void);

		void genBoard(void);

		void genNumbers(void);

		void initBoard(void);

		void printBoard(void);

		void printNums(void);

};




#endif

