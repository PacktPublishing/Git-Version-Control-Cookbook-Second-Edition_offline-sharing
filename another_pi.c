/* Pi with 800 digits
 * Dik T. Winter style, but modified sligthly
 * https://crypto.stanford.edu/pbc/notes/pi/code.html
 */
 #include <stdio.h>

void another_pi (void) {
    printf("800 digits of pi:\n");
    int a=10000, b=0, c=2800, d=0, e=0, f[2801], g=0;
    for ( ;b-c; )f[b++]=a/5;
        for (;d=0,g=c*2;c-=14,printf("%.4d",e+d/a),e=d%a)
            for (b=c; d+=f[b]*a, f[b]=d%--g,d/=g--,--b; d*=b);

    printf("\n");
}

int main (void){
    another_pi();

    return 0;
}
