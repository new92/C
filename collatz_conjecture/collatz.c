#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <time.h>

#define MAX_NUM 100000000
#define MIN_NUM 1
#define MAX_SIZE 8000

uint32_t collatz(uint64_t num) {
    uint32_t length = 1;
    while (num != 1) {
        if (num % 2 == 0) {
            num /= 2;
        } else {
            num = 3 * num + 1;
        }
        length++;
    }
    return length;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s num1 num2", argv[0]);
        return 1;
    } else {
        uint64_t num1 = atoll(argv[1]);
        uint64_t num2 = atoll(argv[2]);

        if (num1 < MIN_NUM || num1 > MAX_NUM || num2 < MIN_NUM || num2 > MAX_NUM) {
            printf("0");
            return 1;
        } else {
            clock_t start_time = clock();
            uint32_t max_length = 0;

            for (uint64_t i = num1; i <= num2; i++) {
                uint32_t length = collatz(i);
                if (length > max_length) {
                    max_length = length;
                }

                if ((double)(clock() - start_time) / CLOCKS_PER_SEC >= 210) {
                    fprintf(stderr, "Execution time exceeded 4 minutes.");
                    return 1;
                }
            }
            printf("%" PRIu32, max_length);
        }
    }
    return 0;
}
