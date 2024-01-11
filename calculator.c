#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int addition(int x, int y);
int subtraction(int x, int y);
int multiplication(int x, int y);
int division(int x, int y);

int main(int argc, char *argv[]) {
    if (argc - 1 < 3) {
        printf("Error: Missing arguments. Usage: %s <num1> <num2> <operation>\n", argv[0]);
        return 1;
    }
    if (!strcmp(argv[3], "add")) {
        printf("Result = %d\n", addition(atoi(argv[1]), atoi(argv[2])));
    } else if (!strcmp(argv[3], "sub")) {
        printf("Result = %d\n", subtraction(atoi(argv[1]), atoi(argv[2])));
    } else if (!strcmp(argv[3], "multi")) {
        printf("Result = %d\n", multiplication(atoi(argv[1]), atoi(argv[2])));
    } else if (!strcmp(argv[3], "div")) {
        printf("Result = %d\n", division(atoi(argv[1]), atoi(argv[2])));
    } else {
        printf("Error: Unknown operation.\n");
    }
    return 0;
}

int addition(int x, int y) {
    return x + y;
}

int subtraction(int x, int y) {
    return abs(x - y);
}

int multiplication(int x, int y) {
    return x * y;
}

int division(int x, int y) {
    if (y == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    } else {
        return x / y;
    }
}