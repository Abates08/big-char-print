#include <stdio.h>

int main(){
    while(getchar() == EOF){}
    char a;
    scanf("%c", &a);
    printf("%c", a);
}