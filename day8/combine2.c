#include<stdio.h>
int main(){
    int arr1[]= {1,3,5,7,9};
    int arr2[]= {2,4,6,8,10};
    int a1= sizeof(arr1)/sizeof(arr1[0]);
    int a2= sizeof(arr2)/sizeof(arr2[0]);
    int size= a1+a2;
    int arr[size];
    for(int i=0;i<a2; i++){
        arr[a1=i]= arr2[i];
    }
    //bubble sort
    for(int i = 0; i<size-1; i++){
        for(int j = 0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i = 0; i<size; i++){
        printf("%d ", arr[i]);
    }
}