#include <stdio.h>
                                            // rang eof intiger = -32768 to 32767. it can store positive value ,negative value, 183 and also 0

int main(){
                                            //if we dont give any value to the variable ,the system gives a random values to the variable

    //q2
    int k=10;
    float a=2.0;
    char h='q';

    printf("%d \n",k);                      //  %d -> "d" stands for decimal  and these %d,%f,ect are called format specifiers. need to print non decelared string
    printf("%f \n",a);                      // %F ->  format specifier for float
    printf("%c \n",h);                      // %c ->  format specifier for char

    //q3
    int b=10;
    int c=20;

    int sum=b+c;

    printf("%d", sum);

    return 0;

}