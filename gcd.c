#include <stdlib.h>
#include <stdio.h>

int gcd (a,b){
    int r = 0;
    while (a != 0) {
        r = b mod a;
        b = a;
        a = r;
    }
    return b;
}

int main () {
    int a = 33;
    int b = 12;

    int r = 0;

    gcd(a,b);

}