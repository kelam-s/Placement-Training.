#include <stdio.h>
#include <string.h>
int main(){
    int x, sum = 0;
    scanf("%d", &x);
    while ( x>0){
        int r = x%10;
        if ( r %2 == 0)
            sum +=r;
        x /=10;
    }
    printf("%d", sum);
}