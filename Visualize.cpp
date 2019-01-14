
#include "Visualize.h"

void drawHexagon(SDL_Renderer* renderer, int x, int y)
{
	// left line
	SDL_RenderDrawLine(renderer, x-34.64, y-20, x-34.64, y+20);

	// right line
	SDL_RenderDrawLine(renderer, x+34.64, y-20, x+34.64, y+20);

	// top left
	SDL_RenderDrawLine(renderer, x-34.64, y-20, x, y-40);

	// top right
	SDL_RenderDrawLine(renderer, x+34.64, y-20, x, y-40);

	// bottom left
	SDL_RenderDrawLine(renderer, x-34.64, y+20, x, y+40);

	// bottom right
	SDL_RenderDrawLine(renderer, x+34.64, y+20, x, y+40);
}

void fillHexagon(SDL_Renderer* renderer, int x, int y, int resource)
{
	if(resource == Wood)
	{
		drawTrees(renderer, x, y);
	}
	else if(resource == Brick)
	{
		drawBricks(renderer, x, y);
	}
	else if(resource == Sheep)
	{
		drawSheep(renderer, x, y);
	}
	else if(resource == Wheat)
	{
		drawWheat(renderer, x, y);
	}
	else if(resource == Ore)
	{
		drawOre(renderer, x, y);
	}
	else if(resource == Desert)
	{
		drawDesert(renderer, x, y);
	}
	else
	{
		// Error, not valid resource
	}
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);

}

void drawTrees(SDL_Renderer* renderer, int x, int y)
{
	SDL_SetRenderDrawColor(renderer, 0, 210,105,30);
	{
		SDL_Rect r;
		r.x = x-19;
		r.y = y+10;
		r.w = 2;
		r.h = 6;
		SDL_RenderFillRect(renderer, &r);

		r.x = x-22;
		r.y = y+8;
		r.w = 8;
		r.h = 2;
		SDL_RenderFillRect(renderer, &r);

		r.x = x-21;
		r.y = y+6;
		r.w = 6;
		r.h = 2;
		SDL_RenderFillRect(renderer, &r);

		r.x = x-20;
		r.y = y+4;
		r.w = 4;
		r.h = 2;
		SDL_RenderFillRect(renderer, &r);

		r.x = x-19;
		r.y = y+2;
		r.w = 2;
		r.h = 2;
		SDL_RenderFillRect(renderer, &r);
	}

	{
		SDL_Rect r;
		r.x = x+19;
		r.y = y+10;
		r.w = 2;
		r.h = 6;
		SDL_RenderFillRect(renderer, &r);

		r.x = x+16;
		r.y = y+8;
		r.w = 8;
		r.h = 2;
		SDL_RenderFillRect(renderer, &r);

		r.x = x+17;
		r.y = y+6;
		r.w = 6;
		r.h = 2;
		SDL_RenderFillRect(renderer, &r);

		r.x = x+18;
		r.y = y+4;
		r.w = 4;
		r.h = 2;
		SDL_RenderFillRect(renderer, &r);

		r.x = x+19;
		r.y = y+2;
		r.w = 2;
		r.h = 2;
		SDL_RenderFillRect(renderer, &r);
	}

	{
		SDL_Rect r;
		r.x = x+10;
		r.y = y+16;
		r.w = 2;
		r.h = 6;
		SDL_RenderFillRect(renderer, &r);

		r.x = x+7;
		r.y = y+14;
		r.w = 8;
		r.h = 2;
		SDL_RenderFillRect(renderer, &r);

		r.x = x+8;
		r.y = y+12;
		r.w = 6;
		r.h = 2;
		SDL_RenderFillRect(renderer, &r);

		r.x = x+9;
		r.y = y+10;
		r.w = 4;
		r.h = 2;
		SDL_RenderFillRect(renderer, &r);

		r.x = x+10;
		r.y = y+8;
		r.w = 2;
		r.h = 2;
		SDL_RenderFillRect(renderer, &r);
	}

	return;
}

void drawBricks(SDL_Renderer* renderer, int x, int y)
{
	SDL_SetRenderDrawColor(renderer, 210,105,30,SDL_ALPHA_OPAQUE);

	SDL_Rect r;
	r.x = x-24;
	r.y = y+10;
	r.w = 10;
	r.h = 6;
	SDL_RenderFillRect(renderer, &r);
	
	r.x = x-13;
	r.y = y+10;
	SDL_RenderFillRect(renderer, &r);

	r.x = x-19;
	r.y = y+3;
	SDL_RenderFillRect(renderer, &r);

	return;
}

void drawSheep(SDL_Renderer* renderer, int x, int y)
{
	SDL_SetRenderDrawColor(renderer, 245, 245, 220, SDL_ALPHA_OPAQUE);

	SDL_Rect r;

	{
		r.x = x-24;
		r.y = y+10;
		r.w = 10;
		r.h = 4;
		SDL_RenderFillRect(renderer, &r);

		r.x = x-24;
		r.y = y+14;
		r.w = 2;
		r.h = 6;
		SDL_RenderFillRect(renderer, &r);

		r.x = x-16;
		r.y = y+14;
		r.w = 2;
		r.h = 6;
		SDL_RenderFillRect(renderer, &r);

		r.x = x-14;
		r.y = y+9;
		r.w = 4;
		r.h = 4;
		SDL_RenderFillRect(renderer, &r);
	}

	{
		r.x = x;
		r.y = y+16;
		r.w = 10;
		r.h = 4;
		SDL_RenderFillRect(renderer, &r);

		r.x = x;
		r.y = y+20;
		r.w = 2;
		r.h = 6;
		SDL_RenderFillRect(renderer, &r);

		r.x = x+8;
		r.y = y+20;
		r.w = 2;
		r.h = 6;
		SDL_RenderFillRect(renderer, &r);

		r.x = x+10;
		r.y = y+15;
		r.w = 4;
		r.h = 4;
		SDL_RenderFillRect(renderer, &r);
	}

	{
		r.x = x+4;
		r.y = y-20;
		r.w = 10;
		r.h = 4;
		SDL_RenderFillRect(renderer, &r);

		r.x = x+12;
		r.y = y-16;
		r.w = 2;
		r.h = 6;
		SDL_RenderFillRect(renderer, &r);

		r.x = x+4;
		r.y = y-16;
		r.w = 2;
		r.h = 6;
		SDL_RenderFillRect(renderer, &r);

		r.x = x;
		r.y = y-21;
		r.w = 4;
		r.h = 4;
		SDL_RenderFillRect(renderer, &r);
	}

	return;
}

void drawWheat(SDL_Renderer* renderer, int x, int y)
{

	SDL_SetRenderDrawColor(renderer, 240,230,80, SDL_ALPHA_OPAQUE);

	SDL_Rect r;

	r.x = x-24;
	r.y = y+10;
	r.w = 3;
	r.h = 10;
	SDL_RenderFillRect(renderer, &r);

	r.x = x-26;
	r.y = y+6;
	r.w = 3;
	r.h = 3;
	SDL_RenderFillRect(renderer, &r);

	r.x = x-22;
	r.y = y+6;
	SDL_RenderFillRect(renderer, &r);

	r.x = x-26;
	r.y = y+2;
	SDL_RenderFillRect(renderer, &r);

	r.x = x-22;
	r.y = y+2;
	SDL_RenderFillRect(renderer, &r);

	r.x = x-26;
	r.y = y-2;
	SDL_RenderFillRect(renderer, &r);

	r.x = x-22;
	r.y = y-2;
	SDL_RenderFillRect(renderer, &r);

	r.x = x-26;
	r.y = y-6;
	SDL_RenderFillRect(renderer, &r);

	r.x = x-22;
	r.y = y-6;
	SDL_RenderFillRect(renderer, &r);

	r.x = x-24;
	r.y = y-10;
	SDL_RenderFillRect(renderer, &r);


	return;
}

void drawOre(SDL_Renderer* renderer, int x, int y)
{
	SDL_SetRenderDrawColor(renderer, 192, 192, 192, SDL_ALPHA_OPAQUE);

	SDL_Rect r;

	r.x = x-24;
	r.y = y+10;
	r.w = 14;
	r.h = 10;
	SDL_RenderFillRect(renderer, &r);

	r.x = x-26;
	r.y = y+11;
	r.w = 2;
	r.h = 8;
	SDL_RenderFillRect(renderer, &r);

	r.x = x-10;
	r.y = y+11;
	r.w = 2;
	r.h = 8;
	SDL_RenderFillRect(renderer, &r);

	r.x = x-23;
	r.y = y+8;
	r.w = 12;
	r.h = 2;
	SDL_RenderFillRect(renderer, &r);

	r.x = x-23;
	r.y = y+20;
	r.w = 9;
	r.h = 2;
	SDL_RenderFillRect(renderer, &r);

	r.x = x-21;
	r.y = y+6;
	r.w = 5;
	r.h = 2;
	SDL_RenderFillRect(renderer, &r);

	return;
}

void drawDesert(SDL_Renderer* renderer, int x, int y)
{
	SDL_SetRenderDrawColor(renderer, 240, 230, 140, SDL_ALPHA_OPAQUE);

	SDL_Rect r;

	r.x = x-24;
	r.y = y+10;
	r.w = 20;
	r.h = 4;
	SDL_RenderFillRect(renderer, &r);

	r.x = x-10;
	r.y = y+6;
	r.w = 10;
	SDL_RenderFillRect(renderer, &r);

	r.x = x-4;
	r.y = y+2;
	r.w = 14;
	SDL_RenderFillRect(renderer, &r);

	r.x = x-19;
	r.y = y-20;
	r.w = 13;
	SDL_RenderFillRect(renderer, &r);

	r.x = x-12;
	r.y = y-16;
	r.w = 17;
	SDL_RenderFillRect(renderer, &r);

	r.x = x;
	r.y = y-12;
	r.w = 12;
	SDL_RenderFillRect(renderer, &r);

	r.x = x+4;
	r.y = y-8;
	r.w = 25;
	SDL_RenderFillRect(renderer, &r);

	r.x = x+8;
	r.y = y-16;
	r.w = 8;
	SDL_RenderFillRect(renderer, &r);

	r.x = x+2;
	r.y = y-24;
	r.w = 8;
	SDL_RenderFillRect(renderer, &r);

	r.x = x-4;
	r.y = y+18;
	r.w = 19;
	SDL_RenderFillRect(renderer, &r);

	r.x = x+9;
	r.y = y+22;
	r.w = 13;
	SDL_RenderFillRect(renderer, &r);

	r.x = x-15;
	r.y = y+22;
	r.w = 14;
	SDL_RenderFillRect(renderer, &r);

	r.x = x-31;
	r.y = y-4;
	r.w = 17;
	SDL_RenderFillRect(renderer, &r);

	r.x = x-29;
	r.y = y-8;
	r.w = 8;
	SDL_RenderFillRect(renderer, &r);

	r.x = x+6;
	r.y = y+9;
	r.w = 13;
	SDL_RenderFillRect(renderer, &r);

	r.x = x+12;
	r.y = y+5;
	r.w = 17;
	SDL_RenderFillRect(renderer, &r);



	return;
}

void drawBoard(SDL_Renderer* renderer, Catan catan)
{	
	/*
	TTF_Font* Sans = TTF_OpenFont("Sans.ttf", 24); //this opens a font style and sets a size

	SDL_Color White = {255, 255, 255};  // this is the color in rgb format, maxing out all would give you the color white, and it will be your text's color

	SDL_Surface* surfaceMessage = TTF_RenderText_Solid(Sans, "put your text here", White); // as TTF_RenderText_Solid could only be used on SDL_Surface then you have to create the surface first

	SDL_Texture* Message = SDL_CreateTextureFromSurface(renderer, surfaceMessage); //now you can convert it into a texture

	SDL_Rect Message_rect; //create a rect
	Message_rect.x = 100;  //controls the rect's x coordinate 
	Message_rect.y = 100; // controls the rect's y coordinte
	Message_rect.w = 100; // controls the width of the rect
	Message_rect.h = 100; // controls the height of the rect
	SDL_RenderCopy(renderer, Message, NULL, &Message_rect);
	*/

	vector<tile_t> boardTiles = catan.getTiles();
	
	// draw hexagon tiles with numbers
	for(int i = 0; i < 3; i++)
	{
		drawHexagon(renderer, XMID+FAR_X_START+i*HEX_WIDTH, YMID+FAR_Y);
		fillHexagon(renderer, XMID+FAR_X_START+i*HEX_WIDTH, YMID+FAR_Y, boardTiles[i].tileType);

		drawHexagon(renderer, XMID+FAR_X_START+i*HEX_WIDTH, YMID-FAR_Y);
		fillHexagon(renderer, XMID+FAR_X_START+i*HEX_WIDTH, YMID-FAR_Y, boardTiles[i+16].tileType);
	}

	for(int i = 0; i < 4; i++)
	{
		drawHexagon(renderer, XMID+MID_X_START+i*HEX_WIDTH, YMID+MID_Y);
		fillHexagon(renderer, XMID+MID_X_START+i*HEX_WIDTH, YMID+MID_Y, boardTiles[i+3].tileType);

		drawHexagon(renderer, XMID+MID_X_START+i*HEX_WIDTH, YMID-MID_Y);
		fillHexagon(renderer, XMID+MID_X_START+i*HEX_WIDTH, YMID-MID_Y, boardTiles[i+12].tileType);
	}

	for(int i = 0; i < 5; i++)
	{
		drawHexagon(renderer, XMID+CENTER_X_START+i*HEX_WIDTH, YMID+CENTER_Y);
		fillHexagon(renderer, XMID+CENTER_X_START+i*HEX_WIDTH, YMID+CENTER_Y, boardTiles[i+7].tileType);

		
	}

}