
#include <SDL2/SDL.h>
#include <iostream>
#define WIDTH 900
#define HEIGHT 900
#define BOX 112.5f

int main(){

SDL_Window* window;
SDL_Surface* gsurface;
SDL_Event e;
SDL_Renderer* grender;


SDL_FRect box_rec[8][8];
for(int i=0;i<8;i++){
  for(int j=0;j<8;j++){
    box_rec[i][j] = {BOX*j,BOX*i,BOX,BOX};
  }  
}

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
    for(int i=0;i<8;i++){
  for(int j=0;j<8;j++){
        if((i+j)&1){
            SDL_SetRenderDrawColor(grender,0x00,0x00,0x00,0xff);
        }
        else{
            SDL_SetRenderDrawColor(grender,0xff,0xff,0xff,0xff);

        }
        SDL_RenderFillRectF(grender,&box_rec[i][j]);
  }  
}
    SDL_RenderPresent(grender);    
}

}


}