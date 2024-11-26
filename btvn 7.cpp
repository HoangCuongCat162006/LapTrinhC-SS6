#include <stdio.h>

int main() {
    int n;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Nhap so nguyen duong.\n");
        return 1;
    }

    printf("Cac uoc cua so %d la: ", n);
\
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

