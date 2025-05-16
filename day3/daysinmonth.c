#include <stdio.h>
#include <limits.h>
int main(){
    int num, year;
    scanf("%d%d", &num, &year);
    if (num== 1 || num == 3 || num == 5 || num == 7 || num == 8 || num == 10 || num == 12)
        printf("31\n");
    else if (num == 4 || num == 6 || num == 9 || num == 11)
        printf("30\n");
    else if (num == 2){
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            printf("29\n");
        else
            printf("28\n");
    }
    else
        printf("Invalid month\n");
    return 0;
}