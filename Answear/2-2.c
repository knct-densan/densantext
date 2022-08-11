#include <stdio.h>

int main(void) {
    int a = 1;
    int b = 2;
    int c;

    c = a;
    a = b;
    b = c;
    
    printf("a: %d\n", a);
    printf("b: %d\n", b);
}
