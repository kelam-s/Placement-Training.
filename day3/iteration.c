#include <stdio.h>

int main(){
    //increment operator
    int x=5;
    printf("%d \n",x++);    //->post-increment
    printf("%d \n",++x);    //->pre-increment
    
    //decrement operator

    int y=10;
    printf("%d \n",y--);    //->post-decrement
    printf("%d \n",--y);    //->pre-decrement

    return 0;
}