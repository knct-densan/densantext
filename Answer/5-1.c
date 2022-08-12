#include <stdio.h>

int comp(int x, int y) {
    if (x > y) {
        return 1;
    } else if (x < y) {
        return -1;
    } else {
        return 0;
    }
}

int main(void) {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", comp(a, b));
}
