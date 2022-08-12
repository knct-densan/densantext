#include <stdio.h>

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main(void) {
    int a, b;
    scanf("%d%d", &a, &b);

    swap(&a, &b);

    printf("a: %d\n", a);
    printf("b: %d\n", b);
}
