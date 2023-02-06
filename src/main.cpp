
#include <SDL2/SDL.h>
#include <iostream>
#define WIDTH 900
#define HEIGHT 900

int main(){

SDL_Window* window;
SDL_Surface* gsurface;
SDL_Event e;
SDL_Renderer* grender;


SDL_Rect box_rec[64];
SDL_Rect r = {0,0,112,112};


if(SDL_Init(SDL_INIT_EVERYTHING)<0){
  std::cout<<"SDL Initialisation error"<<std::endl;
}

else{
window = SDL_CreateWindow("Chess",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,WIDTH,HEIGHT,SDL_WINDOW_SHOWN);
bool quit = false;
grender = SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);

while(!quit){
    while(SDL_PollEvent(&e) == 1){
        if(e.type == SDL_QUIT){
            quit = true;
        }
    }
    SDL_SetRenderDrawColor(grender,0xff,0xff,0xff,0xff);
    SDL_RenderClear(grender);
    SDL_SetRenderDrawColor(grender,0xff,0xc0,0xee,0xff);
    SDL_RenderFillRect(grender,&r);
    SDL_RenderPresent(grender);    
}

}


}