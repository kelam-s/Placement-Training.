#include <stdio.h>
#define z 50
void swap(int *a , int *b){
    int t = *a;
    *a=*b;
    *b=t;
    printf("\nswapping:%d %d",*a,*b);
}
int main(){
    int a=5, b=10;
    printf("%d %d",a,b);
    swap(&a,&b);
    printf("\n%d %d",a,b);
    return 0;
}