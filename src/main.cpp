
#include <SDL2/SDL.h>
#include <iostream>
//window size will be fixed
#define WIDTH 800
#define HEIGHT 1200

int main(){

SDL_Window* window;
SDL_Event e;

if(SDL_Init(SDL_INIT_EVERYTHING)<0){
  std::cout<<"SDL Init error"<<std::endl;
}

else{
window = SDL_CreateWindow("Chess",0,0,800,500,SDL_WINDOW_SHOWN);
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