	#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next;

    printf("Nhap vao so n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So luong n phai lon hon 0.\n");
        return 1;
    }

    printf("Day Fibonacci gom %d co so dau tien la: \n", n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", a);
        } else if (i == 2) {
            printf("%d ", b);
        } else {
            next = a + b;
            printf("%d ", next);
            a = b;
            b = next;
        }
    }

    printf("\n");

    return 0;
}

