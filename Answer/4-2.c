#include <stdio.h>

int main(void) {
    int a[3];
    
    for (int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }
    
    int isSame = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if ((i != j) && (a[i] == a[j])) {
                isSame = 1;
            }
        }
    }
    
    if (isSame) {
        printf("同じ数字があります。\n");
    }
}
