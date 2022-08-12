#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int i = 1;
    while (i <= n) {
        if (i % 4 == 0) {
            printf("%d\n", i);
        }
        i++;
    }
}
