#include <stdio.h>

void setZero(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = 0;
    }
}

int main(void) {
    int a[5] = { 3, 1, 4, 1, 5 };

    setZero(a, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }
}
