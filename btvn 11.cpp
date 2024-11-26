#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, count = 0, num = 2;

    printf("Nhap vao so luong so nguyen to can in : ");
    scanf("%d", &n);

    printf("Cac so nguyen to dau tien la : \n");

    while (count < n) {
        if (is_prime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");

    return 0;
}

