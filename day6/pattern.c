#include<stdio.h>
int main(){
    int n, x=1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n-1; j++){
            printf(" ");
        }
        for (int k = 1; k <= x; k++){  // k<= 2*i - 1
            printf("*");
            x+=2;
        }
        printf("\n");
    }  
    return 0;
}
