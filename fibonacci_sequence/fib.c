#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
    int a = 0, b = 1, next, i;

    if (n <= 0) return a;

    for (i = 2; i < n + 1; i++) {
        next = a + b;
        a = b;
        b = next;
    }

    return b;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <n>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);

    if (n < 0) {
        printf("Fibonacci sequence is not defined for negative numbers.\n");
        return 1;
    }

    int result = fibonacci(n);
    printf("The %dth Fibonacci number is: %d\n", n, result);

    return 0;
}
