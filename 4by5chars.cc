#include <stdio.h>
int width = 6;
int height = 5;
int x = 0;
int charamount = 0;
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
}
void nameline(){
  /*for every new character, increase charamount by one and convert chars to layers.*/
  charamount = 10;
  for(int i = 0; i < charamount; i++){
    for(int j = 0; j < 5; j++){
      for(int k = 0; k < 64; k++){
        while(layers[i][x] != '\0'){
          layers[i][x] = c[j][i][k];
          x++;
        }
        x++;
      }
    }
  }
}
int main(){
  printf("hello world");
   init();
   nameline();
   /*name the char array */
     for(int i = 0; i < 5; i++){
       for(int j = 0; j < 64; j++){
         printf("%c", layers[i][j]);
       }
     printf("\n");
    }
    return 0;
  }