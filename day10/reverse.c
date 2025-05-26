#include<stdio.h>
void reverse( int arr[], int n){
    int strt=0 , end= n-1;
    while(end>strt){
        int t=arr[strt];
        arr[strt]= arr[end];
        arr[end]= t;
        strt ++;
        end --;
    }
}
void reverse2( int *arr, int n){
    int *strt=arr , *end= arr+n-1;
    while(end>strt){
        int t=*strt;
        *strt= *end;
        *end= t;
        strt ++;
        end --;
    }
}
int main(){
    int a[]={1,2,3,4,5,6};
    int *p =a;
    int n=sizeof(a)/sizeof(a[0]);
    reverse(a,n);
    for(int i =0; i<n; i++){
        printf("%d", *p);
        p ++;
    }
}    