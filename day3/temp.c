#include <stdio.h>
int main() {
    int t;
    printf("Enter the temprature in Celsius: ");
    scanf("%d", &t);
    if (t < 20)
        printf("Jacket");
    else if (t>=10 || t<=20)
        printf("Sweater");
    else 
        printf("T-shirt");
    return 0;
}