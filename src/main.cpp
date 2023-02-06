
#include <SDL2/SDL.h>
#include <iostream>
#define WIDTH 1200
#define HEIGHT 900

int main(){

SDL_Window* window;
SDL_Surface* gsurface;
SDL_Event e;

if(SDL_Init(SDL_INIT_EVERYTHING)<0){
  std::cout<<"SDL Init error"<<std::endl;
}

else{
window = SDL_CreateWindow("Chess",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,WIDTH,HEIGHT,SDL_WINDOW_SHOWN);
bool quit = false;
while(!quit){
    while(SDL_PollEvent(&e) == 1){
        if(e.type == SDL_QUIT){
            quit = true;
        }
    }
  
    SDL_UpdateWindowSurface(window);
    
}

}


}