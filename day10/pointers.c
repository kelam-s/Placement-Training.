#include <stdio.h>
void pointer1(){
    int c =7;
    int * p, **p1, ***p2, ****p3;
    p=&c;
    p1=&p;
    p2=&p1;
    p3=&p2;
    printf("%d %d %d %d", p, p1, p2, p3);
    
}
void pointer2(){
    int a =7;
    int * p= &a;
    printf("%d %d\n",a, p);
    *p=8; // value operator
    printf("%d %d",a,p);
}
void pointer3(){
    int a =7;
    int * p= &a;
    printf("%d %d %d %d\n",a, *p, p, &a);
    *p=8; // value operator
    printf("%d %d %d %d",a,*p, p, &a);
}
void pointer4(){
    int a =7;
    int * p, *q; //1000
    p = &a;
    q=p;    
    *q=1;
    *p=4;
    printf("%d",a);
}
