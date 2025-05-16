#include <stdio.h>

int main(){

    //divisiable sum

    int a;
    scanf("%d",&a);
    if (a%5==0&&a%11==0)printf("hi hello");
    else if(a%5==0) printf("hello");
    else if(a%11==0) printf("hi");


    return 0;
}