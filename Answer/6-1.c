#include <stdio.h>

struct Student {
    int number;
    double height;
    double weight;
};

int main(void) {
    struct Student student;

    scanf("%d", &student.number);
    scanf("%lf", &student.height);
    scanf("%lf", &student.weight);

    printf("%d\n", student.number);
    printf("%f\n", student.height);
    printf("%f\n", student.weight);
}
