#include <stdio.h>
int main(){
    char c;
    printf("enter a character:");
    scanf("%c",&c);
    if((c >= 'A') && (c <='Z')) printf ("Uppercase");
    else if ((c >= 'a') && (c<='z')) printf ("Lowercase");
}