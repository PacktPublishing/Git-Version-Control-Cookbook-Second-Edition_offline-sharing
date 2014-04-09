/*
 * Fun with math
 *
 */
#include <stdio.h>
#include <math.h>

/* Short pi calculation */
void pi(void){
    double x=2,i=1,j=0.5;
    while(i<1E7){x*=i>j?i/j++:i++/j;}
    printf("%f\n",x);
}

/* More funny math
   Check if number is a prime no
*/
int is_prime(int n){
    if (n<2){
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    int max = ceil(sqrt(n));
    int i = 2;
    while (i <= max) {
        if (n % i == 0){
            printf("%d is not a prime number\n", n);
            return 0;
        }
        i++;
    }
    printf("%d is a prime number!\n", n);

    return 0;
}

int main (void){
    pi();

    is_prime(223);

    return 0;
}
