#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    for(int i = 1; i<=n-1; i++){
        for (int j = 1; j<=i; j++){
            printf(" ");
        }
        for (int j = 1; j<=n-i; j++){
            printf("*");
        }
        printf("\n");
    }
    
}