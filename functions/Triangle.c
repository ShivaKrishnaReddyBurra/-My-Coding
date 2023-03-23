#include <stdio.h>

int is_prime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int lines;
    printf("Enter number of lines: ");
    scanf("%d", &lines);

    int num = 2;
    for (int i = 1; i <= lines; i++) {
        for (int j = 1; j <= i; j++) {
            while (!is_prime(num)) {
                num++;
            }
            printf("%d\t", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
