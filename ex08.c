
#include <stdio.h>

int main() {
    float num, sum = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &num);
        sum += num;
    }

    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", sum / 10);

    return 0;
}
