program that checks a number with any no. of digits is an Armstrong number...

#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    int digits = (int)log10(n) + 1;

    while (temp != 0) {
        int r = temp % 10;

        int power = 1;
        for (int i = 0; i < digits; i++) {
            power = power * r;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}
