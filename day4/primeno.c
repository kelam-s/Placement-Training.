#include <stdio.h>
int main() {
    int x = 5;
    int ref = 0;
    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            ref ++;
        }
    }
    if (ref == 2) { 
        printf("%d is a prime number\n", x);
    } else {
        printf("%d is not a prime number\n", x);
    }
    return 0;
}


