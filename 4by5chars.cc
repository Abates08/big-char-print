#include <stdio.h>
int width = 6;
int height = 5;
int x = 0;
int charamount = 0;
int firsttimedone = 0;
/*char ex[number of big elements][number of elements in 1st][number of elements in 2nd]*/
char layers[5][64];
char c[10][5][6];
void init(){
  //small spaces
  c[1, 2, 3, 4, 5, 6, 7, 8, 9, 10][1-5][5, 6] = ' ';
  //H
  c[1][1, 2, 3, 4, 5][1, 4] = '1';
  c[1][3][2, 3] = '1';
  c[1][1, 2, 4, 5][2, 3] =' ';
  //E
  c[2][1, 3, 5][1, 2, 3, 4] =  '1';
  c[2][1, 2, 3, 4, 5][1] = '1';
  c[2][2, 4][2, 3,4] =' ';
  //L
  c[3, 4, 9][1, 2, 3, 4, 5][1] = '1';
  c[3, 4, 9][5][1, 2, 3, 4] ='1';
  c[3, 4, 9][1-4][2, 3, 4] = ' ';
  //o
  c[5, 7][1, 5][1, 2, 3, 4] = '1';
  c[5, 7][2, 3, 4][1, 4] = '1';
  c[5, 7][2, 3, 4][2, 3] = ' ';
  //w
  c[6][1, 2, 3, 4, 5][1, 4] = '1';
  c[6][4][2, 3] = '1';
  c[6][1, 2, 3, 5][2, 3] = ' ';
  //R
  c[8][1, 3][1, 2, 3, 4] = '1';
  c[8][2, 5][1, 4] = '1';
  c[8][4][1, 3] = '1';
  c[8][2, 5][2, 3] = ' ';
  c[8][4][2, 4] = ' ';
  //D
  c[10][1, 5][1, 2, 3] = '1';
  c[10][2, 3, 4][1, 4] = '1';
  c[10][1, 5][5] = ' ';
  c[10][2, 3, 4][2, 3] = ' ';
  layers[1, 2, 3, 4, 5][31, 32, 33, 34] = ' ';
  layers[1][1,4,8,9,10,13,19,25,26,27,28,35,38,41,42,43,44,47,48,49,50,53,59,60,61] = '1';
  layers[1][2,3,5,6,7,11,12,14,15,16,17,18,20,21,22,23,24,29,30,31,32,33,34,36,37,39,40,45,46,51,52,54,55,56,57,58,62,63,64] = ' ';
}
void nameline(){
  /*for every new character, increase charamount by one and convert chars to layers.*/
  charamount = 10;
  for(int i = 0; i < charamount; i++){
    for(int j = 0; j < 5; j++){
      for(int k = 0; k < 6; k++){
        if(firsttimedone == 0){
          if(layers[i][k] != '\0'){
            layers[i][k] = c[i][j][k];
          }
        }else{
          if(layers[i][k + x] != '\0'){
            layers[i][k + x] = c[i][j][k];
            x++;
          }

        }
        
        
      }
      firsttimedone = 1;
    }
  }
}
int main(){
  printf("hello world");
   init();
   nameline();
   /*name the char array */
     for(int i = 0; i < 5; i++){
       for(int j = 0; j < 6; j++){
         printf("%c", c[1][i][j]);
       }
     printf("\n");
    }
    return 0;
  }