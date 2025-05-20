#include<stdio.h>
int main(){
    int arr[]={1,6,9,4,7,11,2,3,5,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0]; // INT_MIN;
    for ( int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
}