#include <stdio.h>
int main ()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("Enter the operation to perform (+, -, *, /): ");
    char op;
    scanf(" %c", &op);
    switch (op) {
        case '+':
            printf( "%d", num1 + num2);
            break;
        case '-':
            printf( "%d", num1 - num2);
            break;
        case '*':
            printf( "%d", num1 * num2);
            break; 
        case '/':
            if (num2 != 0)
                printf( "%d", num1 / num2);
            else
                printf("Error: Division by zero");
            break;
        default:
            printf("Error: Invalid operator");
            break;
    }
    return 0;
}