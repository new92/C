// We import the standard headers (stdio.h, stdlib.h)
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h> // We include this header in order to use the integer types with specific widths.
#include <time.h> // We'll use it later to calculate the execution time.

#define MAX_NUM 100000000
#define MIN_NUM 1
#define MAX_SIZE 8000

// This function calculates the Collatz sequence length for a given number.
uint32_t collatz(uint64_t num) {
    uint32_t length = 1;
    while (num != 1) {
        if (!(num % 2)) {
            num /= 2;
        } else {
            num = 3 * num + 1;
        }
        length++;
    }
    return length;
}

int main(int argc, char *argv[]) {
    // Convert command-line arguments to 64-bit unsigned integers (num1 and num2).
    if (argc != 3) {
        printf("Usage: %s num1 num2", argv[0]);
        return 1;
    } else {
        // Parse the values from the terminal and assign them to variables
        uint64_t num1 = atoll(argv[1]); // We'll use atoll() function to convert the ASCII to long long integers.
        uint64_t num2 = atoll(argv[2]);

        // Check if the input numbers are within the specified range.
        if (num1 < MIN_NUM || num1 > MAX_NUM || num2 < MIN_NUM || num2 > MAX_NUM) {
            printf("0");
            return 1;
        } else {
            clock_t start_time = clock();
            uint32_t max_length = 0;

            // Iterate through the numbers in the specified range and calculate their Collatz sequence lengths.
            for (uint64_t i = num1; i <= num2; i++) {
                uint32_t length = collatz(i);
                if (length > max_length) {
                    max_length = length;
                }

                // Check if the execution time has exceeded 4 minutes (210 seconds).
                if ((double)(clock() - start_time) / CLOCKS_PER_SEC >= 210) {
                    printf("Execution time exceeded 4 minutes.");
                    return 1;
                }
            }
            printf("%" PRIu32, max_length);
        }
    }
    return 0;
}
