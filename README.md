# Collatz conjecture

The Collatz conjecture is one of the most famous unsolved problems in mathematics. The conjecture asks whether repeating two simple arithmetic operations will eventually transform every positive integer into 1. It concerns sequences of integers in which each term is obtained from the previous term as follows: if the previous term is even, the next term is one half of the previous term. If the previous term is odd, the next term is 3 times the previous term plus 1. The conjecture is that these sequences always reach 1, no matter which positive integer is chosen to start the sequence.

## Installation

`git clone https://github.com/new92/collatz.git`

## Execution

Compile using: `gcc -O0 -m32 -Wall -Wextra -Werror -pedantic -o collatz collatz.c`<br />
Execute using: `./collatz <num1> <num2>`

## Implementation

<ul>
    <li>**Headers:**In the code, the `inttypes.h` header is included to define integer types with specific sizes. Additionally, the `time.h` header is included and used to ensure that the execution of the code will be completed within 4 minutes.</li>
    <li>**Macros:**In the code, we also define some constants using preprocessor macros, such as `MAX_NUM`, `MIN_NUM`, and `MAX_SIZE`, which are used to set limits for input values and data size.</li>
</ul>
