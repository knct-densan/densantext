#include <stdio.h>

int main(void) {
    int a[3], b[3];

    for (int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 3; i++) {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < 3; i++) {
        int c = a[i];
        a[i] = b[i];
        b[i] = c;
    }


    for (int i = 0; i < 3; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
}
