#include <stdio.h>
#include <stdlib.h>

int main (){
    int x=0;
    int y=1;
    while (y<8){
        printf("%i\n",x);
        printf("%i\n",y);
        x=x+y;
        y=y+x;
    } 
}