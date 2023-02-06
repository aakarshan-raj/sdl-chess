
#include <SDL2/SDL.h>
#include <iostream>

int main(){

SDL_Window* window;
SDL_Surface* gsurface;
SDL_Event e;

if(SDL_Init(SDL_INIT_EVERYTHING)<0){
  std::cout<<"SDL Init error"<<std::endl;
}

else{
window = SDL_CreateWindow("Chess",0,0,800,500,SDL_WINDOW_SHOWN);

while(true){
    while(SDL_PollEvent(&e) == 1){
        // if(e.type == SDL_QUIT){
        //     SDL_Quit();
        //     // break;
        // }
    }
    gsurface = SDL_GetWindowSurface(window);
    SDL_UpdateWindowSurface(window);
    
}

}


}