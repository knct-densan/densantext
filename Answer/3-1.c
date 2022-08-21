#include <stdio.h>

int main(void) {
    int sum = 0;
    for (int i = 1; i <= 250; i++) {
        sum += i;
    }
    printf("%d\n", sum);
}
