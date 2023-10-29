# The Fibonacci sequence 🧙‍♂️

The Fibonacci sequence is a series of numbers in which each number (except for the first two) is the sum of the two preceding ones. It typically starts with 0 and 1, and then each subsequent number is the sum of the two previous numbers. The sequence begins as follows:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
In mathematical terms, the Fibonacci sequence can be defined using the following recursive formula:
F(0) = 0
F(1) = 1
F(n) = F(n-1) + F(n-2) for n > 1
The sequence is named after Leonardo of Pisa, an Italian mathematician also known as Fibonacci, who introduced it to the Western world in his book "Liber Abaci" in the year 1202. Fibonacci numbers have many fascinating properties and applications in various fields, including mathematics, computer science, biology, and art. They appear in nature, art, and architecture and are often used in algorithms and modeling due to their unique mathematical properties.


## Installation

```bash
git clone https://github.com/new92/coding_problems.git
cd coding_problems/collatz_conjecture
```

## Compilation & Execution

```bash
gcc -o fib fib.c
./fib number
```

## Implementation

<ul>
  <li>The fibonacci function calculates the nth Fibonacci number iteratively, starting from the 0th and 1st Fibonacci numbers and iteratively calculating subsequent values.</li>
  <li>The main function checks the command-line arguments and usage. It parses the integer 'n' from the command-line argument and ensures it is non-negative.</li>
  <li>If 'n' is non-negative, it calls the fibonacci function to compute the nth Fibonacci number.</li>
  <li>The program then prints the result, indicating which Fibonacci number it is in the sequence.</li>
</ul>
