
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

	// set drawing back to white for hexagon sides
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
	
	// get tile vector
	vector<tile_t> boardTiles = catan.getTiles();
	
	// draw hexagon tiles with numbers
	for(int i = 0; i < 3; i++)
	{
		// top row
		createHexagon(renderer, catan, boardTiles[i], XMID+FAR_X_START+i*HEX_WIDTH, YMID+FAR_Y);

		// bottom row
		createHexagon(renderer, catan, boardTiles[i+16], XMID+FAR_X_START+i*HEX_WIDTH, YMID-FAR_Y);
	}

	for(int i = 0; i < 4; i++)
	{	
		// upper middle row
		createHexagon(renderer, catan, boardTiles[i+3], XMID+MID_X_START+i*HEX_WIDTH, YMID+MID_Y);

		// lower middle row
		createHexagon(renderer, catan, boardTiles[i+12], XMID+MID_X_START+i*HEX_WIDTH, YMID-MID_Y);
	}

	for(int i = 0; i < 5; i++)
	{
		// middle row
		createHexagon(renderer, catan, boardTiles[i+7], XMID+CENTER_X_START+i*HEX_WIDTH, YMID+CENTER_Y);
	}

	return;
}

void drawNumber(SDL_Renderer* renderer, Catan catan, int x, int y, int num)
{	
	// dessert, no number to place
	if(num == -1)
	{
		return;
	}

	// declare destination rectangle and color
	SDL_Rect dstrect;
	SDL_Color color={255,255,255};

	SDL_Surface* textSurface;
	SDL_Texture* textTexture;

	// open font
	TTF_Font *font = TTF_OpenFont("Arial Black.ttf", 16);
	if(!font)
	{
		cout << TTF_GetError() << "\n";
	}

	
	// size rectangle based on one or two digits
	if(num < 10)
	{
		dstrect.x = x-6;
		dstrect.y = y-8;
		dstrect.w = 12;
		dstrect.h = 16;
	}
	else
	{
		dstrect.x = x-10;
		dstrect.y = y-8;
		dstrect.w = 20;
		dstrect.h = 16;
	}
	

	// convert to char *
	string numStr = to_string(num);
	const char* numChar = numStr.c_str();
	
	// create surface
	textSurface = TTF_RenderText_Blended(font, numChar, color);
	if(!textSurface)
	{
		cout << TTF_GetError() << "\n";	
	}
	
	// create texture
	textTexture = SDL_CreateTextureFromSurface(renderer, textSurface);
	if(!textTexture)
	{
		cout << TTF_GetError() << "\n";	
	}

	// copy to destination
	SDL_RenderCopy(renderer, textTexture, NULL, &dstrect);	

	return;
}

void createHexagon(SDL_Renderer* renderer, Catan catan, tile_t tile, int x, int y)
{
	drawHexagon(renderer, x, y);
	fillHexagon(renderer, x, y, tile.tileType);
	drawNumber(renderer, catan, x, y, tile.diceVal);

	return;
}


