#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (int k = 1; k <= (rows - i) * 2; k++) {
            printf(" ");
        }
        for (int l = i; l >= 1; l--) {
            if (l != rows) {
                printf("%d ", l);
            }
        }
        printf("\n");
    }
    return 0;
}
