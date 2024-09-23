#include <stdio.h>

void main(){

    //intialize a pointer
    int x = 20;
    int *p;
    p= &x;

    printf("x is %d\n",x); // 20

    printf("&x is %d\n",&x);

    printf("p is %d\n",p);

    printf("*p is %d\n",*p); // 20

    printf("Address of x is given using percent p: %p\n",p);


    //derefrencing
    *p = 60;
    printf("x is %d\n",x); // x is now this value 60

    










}