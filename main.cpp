
#include <stdio.h>
#include <stdlib.h>

#include "Catan.h"
#include "Graph.h"
#include "Visualize.h"



int main() 
{

	// configure catan board
	Catan catan;
	catan.initBoard();


	if (SDL_Init(SDL_INIT_VIDEO) == 0) {

		SDL_Window* window = NULL;
		SDL_Renderer* renderer = NULL;

		if (SDL_CreateWindowAndRenderer(XLEN, YLEN, 0, &window, &renderer) == 0) {



			SDL_bool done = SDL_FALSE;

			SDL_Surface *s;


			if(TTF_Init()==-1) {
				printf("TTF_Init: %s\n", TTF_GetError());
			}
			// initialize window
			SDL_Event event;
			SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
			SDL_RenderClear(renderer);
			SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);

			// draw the board here
			drawBoard(renderer, catan);

			// render
			SDL_RenderPresent(renderer);	

			while (!done) {

				


				// check for exit event
				while (SDL_PollEvent(&event)) {
					if (event.type == SDL_QUIT) {
						done = SDL_TRUE;
					}
				}
			}
		}
	}
	
	SDL_Quit();
	TTF_Quit();


	
	
	
	//catan.printBoard();
	/*
	Graph g;

	g.init(5);

	g.printGraph();
	g.addEdgesLinear(0,3);
	g.printGraph();
	*/
    
    return 0;

}





