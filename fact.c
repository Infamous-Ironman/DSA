#include <stdio.h>

int fact(int n) {
    if (n < 2) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

int main() {
    int n;
    printf("Enter Terms: ");
    scanf("%d", &n);
    printf("%d", fact(n));
    return 0;
}