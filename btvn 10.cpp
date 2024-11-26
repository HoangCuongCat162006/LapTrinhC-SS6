#include <stdio.h>

int main() {
    int n, is_prime = 1;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    if (n <= 1) {
        is_prime = 0;
    } else {

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime) {
        printf("%d la so nguyen tu.\n", n);
    } else {
        printf("%d khong phai la so nguyen tu.\n", n);
    }

    return 0;
}

