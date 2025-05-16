#include <stdio.h>
int main (){
    char user[20] = 'kelam';
    int paswd = 1234;
    char arr[20];
    int x;
    scanf("%s",arr);
    scanf("%d",&x);
    if ((strcmp (user, arr)==0) && (paswd == x ))
        printf("login success");
    else printf("failed");
}