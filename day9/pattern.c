// #include<stdio.h>
// int main(){
//     int n=4;
//     for (int i=1; i<=n; i++){
//         for(int j =1; j<=i; j++){
//             printf("*");
//         }
//         for(int k=n; k>0; k--){
//             printf("1");
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read an integer from the user

    // Check if the input is a positive integer
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit the program with an error code
    }

    // Calculate the middle index
    int middle = n / 2;

    for (int i = 0; i <= middle; i++) { // Loop from 0 to middle
        for (int j = 0; j < middle - i; j++) { // Print leading spaces
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) { // Print asterisks
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }

    // Print the bottom half of the diamond
    for (int i = middle - 1; i >= 0; i--) { // Loop from middle-1 to 0
        for (int j = 0; j < middle - i; j++) { // Print leading spaces
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) { // Print asterisks
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}