#include <stdio.h>
int width = 6;
int height = 5;
int x = 0;
int charamount = 0;
int firsttimedone = 0;
/*char ex[number of big elements][number of elements in 1st][number of elements in 2nd]*/
char layers[5][64];
int number1s[26] = {1, 4, 7, 8, 9, 10, 13, 19, 25, 26, 27, 28, 35, 38, 41, 42, 43, 44, 47, 48, 49, 50, 53, 59, 60, 61};
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
  layers[1][1] = '1';
  layers[1][2] = ' ';
}
void nameline(){
  for(int i = 0; i < 64; i++){
    if(i == number1s[i]){
      layers[1][i] = '1';
   } else{
      layers[1][i] = ' ';

    }
  }
}
int main(){
  printf("hello world");
   init();
   //nameline();
   /*name the char array */
     for(int i = 0; i < 5; i++){
       for(int j = 0; j < 64; j++){
        char y = layers[i][j];
         printf("%c", y);
       }
     printf("\n");
    }
    return 0;
  }