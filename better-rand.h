#include <stdlib.h>
#include <time.h>
int i = 1;

int rando(int lower, int higher){
    while(i){
    int a = rand();
    if(a > lower && a < higher){
        i = 0;
    }
    }
    return i;
}