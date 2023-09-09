#include <stdio.h>

int main(void) {
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            putchar('0' + i);
            putchar(',');
            putchar(' ');
            putchar('0' + j);
            if (!(i == 9 && j == 9)) {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');

    return 0;
}

