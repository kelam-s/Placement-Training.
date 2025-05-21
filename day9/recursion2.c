#include<stdio.h>

void num(int n){
    if(n==0) return;
    printf("%d ", n);
    num(n-1);
}
void numdesc(int n){
    if(n==0) return;
    numdesc(n-1);
    printf("%d ", n);
}
void even(int x, int y){
    if(x>y) return;
    printf("%d", x);
    even(x+2, y);
}
int sum(int n){
    if(n==0) return 0;
    return n + sum(n-1);
}
int fac(int n){
    if(n==2) return n;
    return n * sum(n-1);
}
int countdigit(int x){
    if(x==0) return 0;
    return 1 + countdigit(x/10);
}
int fibo(int n ){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibo(n-1) + fibo(n-2);
}
int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}
int power(int a, int b){
    if(b==0) return 1;
    return a * power(a, b-1);
}
int main(){
    num(10);
    printf("\n");
    numdesc(10);
}
