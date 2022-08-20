#include <stdio.h>

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int calcGCD(int x, int y) {
    if (x < y) {
        swap(&x, &y);
    }
    int r = x % y;
    if (r == 0) {
        return y;
    } else {
        return calcGCD(y, r);
    }
}

int main(void) {
    int x, y;
    scanf("%d%d", &x, &y);

    printf("%d\n", calcGCD(x, y));
}

