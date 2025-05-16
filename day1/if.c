#include <stdio.h>                     //header file (important to run c program) it used to get standart input and output 

int a=10;                              //common variable .if it is inside the method it belong to the method
int b=20;
int array[]={1,2,3,4,5};

int main(){                            //main() ->default method where the excution start
                                       // code inside the method is called statement
    for(int i=0;i<=4;i++){

        if (array[i]>=5)
        {
            printf("hello \n");
            
        }
        else{
            printf("not hello \n");
        }
        
    }
    return 0;
}