#ifndef CATAN_H
#define CATAN_H

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Graph.h"


using namespace std;

#define NUM_TILES 19
#define NUM_LOCATIONS 54

#define NUM_ROWS 6
#define NUM_COLS {7, 9, 11, 11, 9, 7}

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

		Graph locations;



	public:

		void initBoard(void);

		void printBoard(void);




};




#endif

