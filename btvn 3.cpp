#include <stdio.h>
#include <string.h>

int main() {
    char correct_password[] = "2006";
    char entered_password[50];
    int attempts = 3;

    printf("Nhap mat khau (C� %d lan thu):\n", attempts);

    while (attempts > 0) {
        printf("Mat khau: ");
        scanf("%s", entered_password);


        if (strcmp(correct_password, entered_password) == 0) {
            printf("Mat khau dung!\n");
            break;
        } else {
            attempts--;
            if (attempts > 0) {
                printf("Mat khau sai. C�n %d lan thu.\n", attempts);
            } else {
                printf("Ban d� nhap sai mat khau qua 3 lan.\n");
            }
        }
    }

    return 0;
}

