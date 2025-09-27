#include <stdio.h>

int main() {
    int a, b, c;
    int result;

    printf("Enter value of a, b, c to solve the quadratic equation: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 0;
    }

    result = (b * b) - (4 * a * c);

    if (result < 0) {
        printf("Imaginary roots. %d",result);
    }
    else if (result == 0) {
        printf("One real root. %d", result);
    }
    else {
        printf("Two real roots. %d", result);
    }

    return 0;
}
