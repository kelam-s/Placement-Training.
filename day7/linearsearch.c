#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int s;
    scanf("%d", &s);
    for(int i=0; i<n;i++){
        if(s==arr[i]){
            printf("present");
            return 0;
        }
    }
    printf("not present");
}