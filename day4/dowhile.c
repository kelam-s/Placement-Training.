#include <stdio.h>
int main(){
    int x=5, y=10;
    do{
        if (x%5==0) printf("hi\n");
        x++;
    }while (x<=y);
    return 0;  
}