/*
 * Fun with math
 *
 */
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/* Short pi calculation */
void pi(void){
    double x=2,i=1,j=0.5;
    while(i<1E7){x*=i>j?i/j++:i++/j;}
    printf("%f\n",x);
}

/* More funny math
   Returns:
   0 if not prime
   1 if prime
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
            return false;
        }
        i++;
    }
    return true;
}

/* Test if prime and write result */
void test_no(int number){
    if(is_prime(number)) {
        printf("%d is a prime number!\n", number);
    }
    else {
        printf("%d is not a prime number!\n", number);

    }
}

/* Continue the prime fun,
 * calculate the number of prime in given range
 */
void primes(from, to){
    int i;
    int count = 0;
    for (i=from; i<=to; i++){
        if (is_prime(i)){
            count++;
        }
    }
    printf("Number of prime numbers between %d and %d: %d\n", from, to, count);
}

int main (void){
    pi();

    test_no(223);
    test_no(3863);
    test_no(583);
    primes(0, 5000);

    return 0;
}
