#include <stdio.h>


int main(){

    int a, b;

    char c;
    scanf("%d",&a,&b);

    scanf("%c",&c);

    if (c=='a') printf("addtion= \n",a+b);
    else if (c=='s') printf("subratoin= \n",a-b);
    else if (c=='m') printf("subratoin= \n",a*b);
    else if (c=='d') printf("subratoin= \n",a/b);
    
    return 0;
}