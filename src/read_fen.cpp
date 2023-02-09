#include <iostream>
#include <string>

int board[8][8]; 
void readFEN(std::string FEN){
  int row = 0;
  int col = 0;
  for(char c:FEN){
    if(c == '/'){
      row++;
      col = 0;                                // "rnbqkbnr/pp1ppppp/8/2p5/4P3/5N2/PPPP1PPP/RNBQKB1R"
      continue;
    }
    else{
       if(isdigit(c)){
        for(int i=0;i<static_cast<int>(c-'0');i++){
           board[row][col] = '0'; 
           col++;
        }
        continue;
    }
     else{
    switch(c){
       case 'p':
       board[row][col] = 'p';
         break;  
       case 'r':
       board[row][col] = 'r';
         break;
       case 'n':
       board[row][col] = 'n';
         break;
       case 'b':
       board[row][col] = 'b';
         break;
       case 'q':
       board[row][col] = 'q';
         break;
       case 'k':
       board[row][col] = 'k';
         break;
       case 'P':
       board[row][col] = 'P';
         break;
       case 'R':
       board[row][col] = 'R';
         break;
       case 'N':
       board[row][col] = 'N';
         break;
       case 'B':
       board[row][col] = 'B';
         break;
       case 'Q':
       board[row][col] = 'Q';
         break;
       case 'K':
       board[row][col] = 'K';
         break;
    }
       }
    }
     col++;
  }

for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        std::cout<<static_cast<char>(board[i][j])<<"|";
    }
    std::cout<<"\n";
}

}





int main(){

std::string fen = "rnbqkbnr/pp1ppppp/8/2p5/4P3/5N2/PPPP1PPP/RNBQKB1R";

readFEN(fen);


}
