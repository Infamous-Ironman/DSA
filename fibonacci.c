#include <stdio.h>

int fibonnaci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonnaci(n - 1) + fibonnaci(n - 2);
    }
}

int main() {
    int terms, n;
    printf("Enter Terms: ");
    scanf("%d", &terms);
    for(n = 0; n < terms; n++) {
        printf("%d", fibonnaci(n));
    }
    return 0;
}
