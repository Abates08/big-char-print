#include <stdio.h>
#include "ANSI-color-codes.h"
int randx, randy;
randx = 10;
randy = 10;
int tajmahal[15][15] = {
{3,3,3,3,3,3,3,3,3,3,3,3,3,3,3},
{3,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
{3,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
{3,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
{3,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
{3,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
{3,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
{3,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
{3,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
{3,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
{3,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
{3,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
{3,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
{3,0,0,0,0,0,0,0,0,0,0,0,0,0,3},
{3,3,3,3,3,3,3,3,3,3,3,3,3,3,3}};
int init, game = 1;
int prizepos[15][15], playerpos[15][15];
int main(){
    while(game){
    while (init)
    {
        int randx, randy;
        randx = 10;
        randy = 10;
    prizepos[randx][randy] = 1;
    printf("\n\n"REDB);
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 15; j++){
            if(i == randy && j == randx){
                printf(WHTB"  "REDB);
            }else{
            if(tajmahal[i][j] == 1){
                printf(WHTB"  "REDB);
            } else if(tajmahal[i][j] == 0){
                printf(REDB"  ");
            }}
        }
        printf(reset"\n"REDB);
    }
    for(int i = 0; i < 15*15; i++){
    printf("\b");
    }
    printf(reset"\n\n");
    init = 0;
       }
  
   }

}