#include<stdio.h>
int main(){
    int arr1[]= {1,3,5,7,9};
    int arr2[]= {2,4,6,8,10};
    int a1= sizeof(arr1)/sizeof(arr1[0]);
    int a2= sizeof(arr2)/sizeof(arr2[0]);
    int size= a1+a2;
    int arr[size];
    for(int i =0; i<a1; i++){
        arr[i]= arr1[i];
    }
    for(int i =0; i<a2; i++){
        arr[i+a1]= arr2[i];
    }
    for(int i =0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n"); 
}
    