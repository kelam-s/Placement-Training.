#include<stdio.h>

int isperfect(int n){
    int sum = 0;
    if (n<1) return n;
    for(int i = 1; i < n; i++){
        if(n%i==0){
            sum += i;
        }
    }
    if(sum == n){
        return sum;
    }
    else{
        return 0;
    }
}
int sort(int x[]){
    int n = sizeof(x)/sizeof(x[0]);
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(x[j]>x[j+1]){
                int temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }
    return x[n-1];
}
int main(){
    int n;
    scanf("%d", &n);
    if(isperfect(n)==n){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
    return 0;
}