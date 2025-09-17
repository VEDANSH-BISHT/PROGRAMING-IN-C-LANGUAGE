program that checks a number with any no. of digits is an Armstrong number...


#include <stdio.h>

int main() {
    int num, originalNum, remainder, n = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        originalNum = originalNum / 10;
        n = n + 1;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;

        int remainder_power = 1;
        int i = 0;
        while (i < n) {
            remainder_power = remainder_power * remainder;
            i = i + 1;
        }

        result = result + remainder_power;
        originalNum = originalNum / 10;
    }

    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
