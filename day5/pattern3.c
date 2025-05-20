#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    for(int i = n; i>0 ; i--){
        for (int j = i-1; j>0; j--){
            printf(" ");
        }
        for (int j = 1; j<=n-i; j++){
            printf("*");
        }
        printf("\n");
    }
}

