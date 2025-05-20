#include<stdio.h>
int main(){
    int size;
    int even = 0, odd = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0){
            even++;
        } else {
            odd++;
        }
    }
    printf("Even numbers: %d\n", even); 
    printf("Odd numbers: %d\n", odd);
} 