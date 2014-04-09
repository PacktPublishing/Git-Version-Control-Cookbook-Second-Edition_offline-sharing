/*
 * Fun with math
 *
 */
#include <stdio.h>

/* Short pi calculation */
void pi(void){
    double x=2,i=1,j=0.5;
    while(i<1E7){x*=i>j?i/j++:i++/j;}
    printf("%f\n",x);
}



int main (void){
    pi();

    return 0;
}
