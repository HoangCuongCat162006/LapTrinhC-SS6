#include <stdio.h>
#include <math.h>

int main() {
    int num, sum, digit, temp;

    printf("Cac so Armstrong có 3 chu so la :\n");

    for (num = 100; num <= 999; num++) {
        sum = 0;
        temp = num;

        while (temp > 0) {
            digit = temp % 10;
            sum += pow(digit, 3);
            temp /= 10;
        }
        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}

