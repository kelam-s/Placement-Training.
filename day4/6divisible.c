#include <stdio.h>
#include <string.h>
int main(){
    int i;
    int x = 6;
    for (i = 2; i <= x; i++){
        if ( x %i == 0){
            printf("%d ",i);
        }
    }
        
}