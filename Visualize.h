#ifndef VISUALIZE_H
#define VISUALIZE_H

#include <iostream>
#include <cstdlib>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

#include "Catan.h"

#define XLEN 680
#define YLEN 460

#define XMID XLEN/2
#define YMID YLEN/2

#define HEX_WIDTH 69.28
#define HEX_HEIGHT 80
#define HEX_SIDE 40

#define FAR_Y -(HEX_HEIGHT+HEX_SIDE)
#define FAR_X_START -HEX_WIDTH

#define MID_Y -((0.5)*HEX_SIDE+(0.5)*HEX_HEIGHT)
#define MID_X_START -(1.5)*HEX_WIDTH

#define CENTER_Y 0
#define CENTER_X_START -HEX_WIDTH*2

void drawHexagon(SDL_Renderer* renderer, int x, int y);

void fillHexagon(SDL_Renderer* renderer, int x, int y, int resource);

void drawTrees(SDL_Renderer* renderer, int x, int y);

void drawBricks(SDL_Renderer* renderer, int x, int y);

void drawSheep(SDL_Renderer* renderer, int x, int y);

void drawWheat(SDL_Renderer* renderer, int x, int y);

void drawOre(SDL_Renderer* renderer, int x, int y);

void drawDesert(SDL_Renderer* renderer, int x, int y);

void drawBoard(SDL_Renderer* renderer, Catan catan);

#endif