#include<stdio.h>
int main(){
    int x, count = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    int y = x;
    while (x>0){
        x = x/10;
        count ++;
    }
    x = y;
    int sum = 0;
    for( int j = 1; j<=count; j++){
        int r=x%10;
        int prod = 1;
        for(int i = 1; i<=count; i++){
            prod = prod*r;
        }
        sum +=prod;
        x/=10;
    }
    if (y == sum)
        printf("%d is an Armstrong number", y);
    else
        printf("%d is not an Armstrong number", y);
    return 0;
}
