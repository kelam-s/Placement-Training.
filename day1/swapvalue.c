#include <stdio.h>

int main(){
    //q4
    int a = 5, b = 10, h;

    h = a;
    a = b;
    b = h;

    printf("a = %d, b = %d\n", a, b);
    
    return 0;
}
