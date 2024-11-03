#include <stdio.h>

int main() {
    int number = 0;
    int count = 0;
    int sum = 0;
    printf("Enter numbers ""enter -1 to stop"":\n");
    while (number != -1) {
        scanf("%d", &number);

        if (number != -1) { 
            sum = sum + number;
            count = count + 1;
        }
    }
         if (count > 0) {
        printf("Total numbers entered: %d\n", count);
        printf("Sum of numbers: %d\n", sum);
        printf("Average of numbers: %.2f\n", (float)sum / count);
    } else {
        printf("No numbers were entered.\n");
    }
    return 0;
}
