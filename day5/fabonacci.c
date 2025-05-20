#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int a = 1, b = 1;
    for (int i = 1;i<=1; i++){
        if(i==1) prntf("%d ", a);
        else if(i==2) printf("%d ", b);
        else{
            int c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }
}