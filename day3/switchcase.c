#include <stdio.h>
#include <limits.h>
int main() {
    int num, year;
    scanf("%d%d", &num, &year);
    switch (num) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30\n");
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                printf("29\n");
            } else {
                printf("28\n");
            }
            break;
        default:
            printf("Invalid month\n");
            break;
    }
    return 0;
}