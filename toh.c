#include <stdio.h>

void toh(int n, char f_rod, char to_rod, char a_rod) {
    if(n == 1) {
        printf("Move disk 1 from rod %c to rod %c \n", f_rod, to_rod);
    } else {
        toh(n - 1, f_rod, a_rod, to_rod);
        printf("Move disk %d from rod %c to rod %c \n", n, f_rod, to_rod);
        toh(n - 1, a_rod, to_rod, f_rod);
    }
}

int main() {
    int n = 3;
    char A, B, C;
    toh(n, 'A', 'B', 'C');
    return 0;
}