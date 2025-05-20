#include<stdio.h>
int main(){
    int x;
    printf("Enter a sequence of numbers: ");
    scanf("%d", &x);
    int y = x;
    int ans = 0;
    while (x>0){
        int r = x%10;
        ans = ans*10 + r;
        x /= 10;
    }
    if (y == ans)
        printf("Palindrome");
    else
        printf("Not a palindrome");
}