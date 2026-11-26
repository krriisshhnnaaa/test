# Structured Programming Concepts (C) — Five Mock Tests

**Practice format:** 5 mock tests × 25 questions = 125 questions. Every question includes a scenario, task, expected input, expected output and constraints. Questions are written for C programming and focus on the syllabus in the uploaded CAT-3 notice: `for`, `while`, `do-while`, nested loops, infinite loops, `break`, `continue`, `goto`, pattern programming and problem-solving using iteration.

**Important:** These are practice papers, not official or leaked questions. The sample input/output demonstrates the required behaviour. Unless a question says otherwise, print exactly the requested output and avoid extra prompts such as `Enter N:`.

**Suggested use:** Attempt each paper without solutions. Although the actual notice specifies five coding questions for 25 marks, these expanded 25-question mocks are intended as larger practice sets.


---

# MOCK TEST 1 — Core iteration and foundational patterns

**Questions in this mock:** 25


## Q1. Count digits, even digits and odd digits

A digital banking system analyses numeric transaction identifiers. Given a non-negative integer N, determine the total number of digits, the number of even digits, and the number of odd digits. Treat 0 as a one-digit number. Print the three counts on separate lines, in that order.


**Expected input**

```text
5307808
```


**Expected output**

```text
7
4
3
```


**Constraints**

0 <= N <= 10^18


## Q2. Power modulo a number

A cryptographic testing utility needs to calculate a modular power. Given integers A, B and C, calculate (A raised to B) modulo C. Use repeated multiplication inside a loop; do not use pow(). Assume C is positive.


**Expected input**

```text
2 10 7
```


**Expected output**

```text
2
```


**Constraints**

0 <= A <= 10^6, 0 <= B <= 10^5, 1 <= C <= 10^9


## Q3. Reduce a number to zero

A number-processing tool repeatedly transforms a positive integer N. If N is even, divide it by 2. If N is odd, subtract 1. Continue until N becomes zero. Print the total number of operations, the number of even operations, and the number of odd operations, each on a separate line.


**Expected input**

```text
14
```


**Expected output**

```text
6
3
3
```


**Constraints**

1 <= N <= 10^9


## Q4. Payments under a cumulative limit

A payment terminal processes payments in the order received. Given N payment amounts and a cumulative limit L, add payments one by one. Stop immediately after the running total becomes equal to or greater than L. Print the number of payments processed and the resulting total. Do not process any later payment.


**Expected input**

```text
5
100
35 40 22 10 99
```


**Expected output**

```text
4
107
```


**Constraints**

1 <= N <= 1000; payment amounts and L are positive integers


## Q5. Prime factorisation with exponents

A mathematics utility expresses a positive integer as a product of prime factors. Given N, print its prime factors in ascending order. If a factor occurs more than once, show its exponent using the ^ symbol. If its exponent is 1, print only the factor. Separate factors using the text ' x '. For N = 1, print 1.


**Expected input**

```text
360
```


**Expected output**

```text
2^3 x 3^2 x 5
```


**Constraints**

1 <= N <= 10^9


## Q6. Reverse a number

A warehouse stores numeric batch codes and needs to inspect them in reverse order. Given a non-negative integer N, reverse its digits using iteration and print the resulting integer. Leading zeroes in the reversed representation are not printed.


**Expected input**

```text
123450
```


**Expected output**

```text
54321
```


**Constraints**

0 <= N <= 10^18


## Q7. Check a numeric palindrome

A warehouse uses numeric labels for inventory batches. Given a non-negative integer N, determine whether its digits read the same forward and backward. Print PALINDROME if they do; otherwise print NOT PALINDROME.


**Expected input**

```text
12321
```


**Expected output**

```text
PALINDROME
```


**Constraints**

0 <= N <= 10^18


## Q8. Sum of even and odd digits

A transaction-reporting tool separates the contribution of even and odd digits. Given a non-negative integer N, calculate the sum of its even digits and the sum of its odd digits. Print 'Even Sum: ' followed by the even-digit sum, then 'Odd Sum: ' followed by the odd-digit sum.


**Expected input**

```text
123456
```


**Expected output**

```text
Even Sum: 12
Odd Sum: 9
```


**Constraints**

0 <= N <= 10^18


## Q9. Separate odd and even digits while preserving order

A payment gateway inspects the digits of a transaction reference. Given a non-negative integer N, separate its odd digits and even digits while preserving their original left-to-right order. Print 'Odd digits: ' followed by the odd digits and 'Even digits: ' followed by the even digits. If a group is empty, print None for that group.


**Expected input**

```text
1203476
```


**Expected output**

```text
Odd digits: 137
Even digits: 2046
```


**Constraints**

0 <= N <= 10^18


## Q10. Check whether a number is prime

A security utility uses prime numbers in its test data. Given an integer N, determine whether it has exactly two positive divisors. Print PRIME if it is prime; otherwise print NOT PRIME.


**Expected input**

```text
29
```


**Expected output**

```text
PRIME
```


**Constraints**

1 <= N <= 10^9


## Q11. Generate the first N prime numbers

A cybersecurity company generates test identifiers from prime numbers. Given a positive integer N, print the first N prime numbers in ascending order, separated by spaces. Each prime must appear exactly once.


**Expected input**

```text
7
```


**Expected output**

```text
2 3 5 7 11 13 17
```


**Constraints**

1 <= N <= 100


## Q12. Check an Armstrong number

A quality-control system checks whether a numeric code has the Armstrong property. A number is an Armstrong number when it equals the sum of each of its digits raised to the number of digits. Calculate the powers using loops, not pow(). Print ARMSTRONG or NOT ARMSTRONG.


**Expected input**

```text
153
```


**Expected output**

```text
ARMSTRONG
```


**Constraints**

0 <= N <= 10^9


## Q13. Calculate factorial

A scientific calculator module computes factorial values. Given a non-negative integer N, calculate N! using a loop. By definition, 0! is 1.


**Expected input**

```text
5
```


**Expected output**

```text
120
```


**Constraints**

0 <= N <= 12


## Q14. Generate the Fibonacci sequence

A monitoring device models a sequence in which each term after the first two is the sum of the previous two. Given N, print the first N Fibonacci terms beginning with 0 and 1, separated by spaces.


**Expected input**

```text
7
```


**Expected output**

```text
0 1 1 2 3 5 8
```


**Constraints**

1 <= N <= 45


## Q15. Find the GCD of two integers

A packaging system needs the greatest common divisor of two positive batch sizes. Given A and B, calculate their GCD using iteration. Do not use a built-in GCD function.


**Expected input**

```text
48 18
```


**Expected output**

```text
6
```


**Constraints**

1 <= A, B <= 10^9


## Q16. Increasing half pyramid of stars

A console-based layout tool prints a left-aligned half pyramid. Given N, print N rows. Row i must contain i star characters, separated by a single space.


**Expected input**

```text
5
```


**Expected output**

```text
*
* *
* * *
* * * *
* * * * *
```


**Constraints**

1 <= N <= 20


## Q17. Inverted half pyramid of stars

A console layout tool prints a left-aligned inverted half pyramid. Given N, print N rows. The first row contains N stars and each next row contains one fewer star.


**Expected input**

```text
5
```


**Expected output**

```text
* * * * *
* * * *
* * *
* *
*
```


**Constraints**

1 <= N <= 20


## Q18. Hollow inverted half pyramid

A display utility draws an inverted half pyramid using only its outline. Given N, print a first row containing N stars. In every later row print the first and last positions of that row; the final row contains one star. Use spaces for the interior positions.


**Expected input**

```text
5
```


**Expected output**

```text
* * * * *
*     *
*   *
* *
*
```


**Constraints**

2 <= N <= 20


## Q19. Full pyramid of stars

A console graphics tool draws a centred pyramid. Given N, print N rows. Each row has leading spaces followed by an odd number of stars: 1, 3, 5, and so on. Do not add spaces between the stars.


**Expected input**

```text
4
```


**Expected output**

```text
   *
  ***
 *****
*******
```


**Constraints**

1 <= N <= 20


## Q20. Inverted full pyramid

A console graphics tool draws an inverted centred pyramid. Given N, the first row has 2N-1 stars. Each subsequent row has two fewer stars and one additional leading space.


**Expected input**

```text
4
```


**Expected output**

```text
*******
 *****
  ***
   *
```


**Constraints**

1 <= N <= 20


## Q21. Hollow full pyramid

A display system draws a hollow centred pyramid. Given N, print a pyramid whose left and right sloping boundaries contain stars and whose bottom row is completely filled. All interior positions above the base must be spaces.


**Expected input**

```text
4
```


**Expected output**

```text
   *
  * *
 *   *
*******
```


**Constraints**

2 <= N <= 20


## Q22. Increasing alphabet triangle

A classroom display prints letters in a growing triangle. Given N, row 1 contains A, row 2 contains AB, and each following row adds the next consecutive uppercase letter. Print each row without spaces between letters.


**Expected input**

```text
5
```


**Expected output**

```text
A
AB
ABC
ABCD
ABCDE
```


**Constraints**

1 <= N <= 26


## Q23. Inverted alphabet triangle

A text-formatting tool prints an alphabet triangle in decreasing row lengths. Given N, the first row contains the first N letters beginning with A; each next row removes the final letter.


**Expected input**

```text
5
```


**Expected output**

```text
ABCDE
ABCD
ABC
AB
A
```


**Constraints**

1 <= N <= 26


## Q24. Reverse alphabet triangle

A classroom exercise prints letters in reverse alphabetical order within each row. Given N, the first row begins with the Nth letter from A and ends at A. Each subsequent row omits the final letter of the previous row.


**Expected input**

```text
5
```


**Expected output**

```text
EDCBA
EDCB
EDC
ED
E
```


**Constraints**

1 <= N <= 26


## Q25. Repeated alphabet triangle

A label printer generates a triangle in which every row repeats one letter. Given N, row 1 contains A once, row 2 contains B twice, row 3 contains C three times, and so on.


**Expected input**

```text
5
```


**Expected output**

```text
A
BB
CCC
DDDD
EEEEE
```


**Constraints**

1 <= N <= 26


---

# MOCK TEST 2 — Number manipulation and alphabet/number patterns

**Questions in this mock:** 25


## Q1. Count occurrences of a digit

A data-validation program checks how frequently a digit occurs in a numeric identifier. Given a non-negative integer N and a digit D, count the occurrences of D in N. Treat N = 0 as containing one zero digit.


**Expected input**

```text
1223334444
4
```


**Expected output**

```text
4
```


**Constraints**

0 <= N <= 10^18; 0 <= D <= 9


## Q2. Find the largest and smallest digit

An inventory system examines the digits of a batch number. Given a non-negative integer N, determine the largest digit and the smallest digit present. Print the largest digit first and the smallest digit second, on separate lines.


**Expected input**

```text
508731
```


**Expected output**

```text
8
0
```


**Constraints**

0 <= N <= 10^18


## Q3. Calculate the product of digits

A numeric inspection tool calculates the product of all digits in a code. Given a non-negative integer N, multiply its digits together and print the product. The product for N = 0 is 0.


**Expected input**

```text
2345
```


**Expected output**

```text
120
```


**Constraints**

0 <= N <= 10^9


## Q4. Check a perfect number

A mathematics application classifies positive integers. A number is perfect if the sum of its positive divisors excluding itself equals the number. Given N, print PERFECT NUMBER or NOT PERFECT NUMBER.


**Expected input**

```text
28
```


**Expected output**

```text
PERFECT NUMBER
```


**Constraints**

1 <= N <= 10^6


## Q5. Find the LCM of two integers

A scheduling system needs the least common multiple of two positive cycle lengths. Given A and B, calculate their LCM using loops or an iterative GCD method. Print the LCM.


**Expected input**

```text
12 18
```


**Expected output**

```text
36
```


**Constraints**

1 <= A, B <= 10^6


## Q6. Count the divisors of a number

A mathematics utility needs to know how many positive divisors an integer has. Given N, count all positive integers that divide N without leaving a remainder.


**Expected input**

```text
12
```


**Expected output**

```text
6
```


**Constraints**

1 <= N <= 10^9


## Q7. Sum of squares

A reporting tool calculates a series total. Given N, compute 1 squared + 2 squared + ... + N squared using iteration. Do not use a direct formula.


**Expected input**

```text
5
```


**Expected output**

```text
55
```


**Constraints**

1 <= N <= 10000


## Q8. Convert decimal to binary

A low-level system converts a non-negative decimal integer into its binary representation. Use repeated division by 2 and remainders. Print the binary digits without leading zeroes; for input 0, print 0.


**Expected input**

```text
13
```


**Expected output**

```text
1101
```


**Constraints**

0 <= N <= 10^9


## Q9. Convert binary to decimal

A device receives a binary string containing only 0 and 1. Calculate its decimal equivalent by processing the digits iteratively. The input contains no leading zeroes except when the value is 0.


**Expected input**

```text
10110
```


**Expected output**

```text
22
```


**Constraints**

1 <= length of input <= 31


## Q10. Repeatedly reduce to a single digit

A reporting utility repeatedly replaces a positive integer with the sum of its digits until only one digit remains. Print the final single digit and the number of replacements performed.


**Expected input**

```text
9875
```


**Expected output**

```text
2
3
```


**Constraints**

0 <= N <= 10^18


## Q11. Process payments until the limit is reached

A payment terminal receives N payment values and a threshold L. Add the values in order. Stop as soon as the running total is greater than or equal to L. Print the number of processed payments and the final total. If the list ends first, print the number processed and the final total anyway.


**Expected input**

```text
6
50
10 15 8 20 5 40
```


**Expected output**

```text
4
53
```


**Constraints**

1 <= N <= 1000; all payment values are positive


## Q12. Print all prime factors without exponents

A factor-analysis tool lists every prime factor of N, repeating a factor according to its multiplicity. Given N, print the factors in ascending order separated by spaces.


**Expected input**

```text
360
```


**Expected output**

```text
2 2 2 3 3 5
```


**Constraints**

2 <= N <= 10^9


## Q13. Sum inputs until zero

A classroom data-entry program accepts integers until the user enters 0. Calculate the sum of all non-zero values entered before the terminating zero and print it. The terminating zero must not change the sum.


**Expected input**

```text
10
20
-5
0
```


**Expected output**

```text
25
```


**Constraints**

Each entered value is between -10^6 and 10^6


## Q14. Print multiples in a range

A warehouse report lists all values between A and B that are divisible by K. Given A, B and K, print the qualifying values in ascending order, separated by spaces. If there are none, print None.


**Expected input**

```text
5 30 4
```


**Expected output**

```text
8 12 16 20 24 28
```


**Constraints**

1 <= A <= B <= 10^6; 1 <= K <= 10^6


## Q15. Find the first number divisible by 5 and 7

A scheduling program searches for a number that aligns two repeating schedules. Given N, find the smallest positive integer not greater than N that is divisible by both 5 and 7. Print -1 if no such number exists. Stop searching once the first match is found.


**Expected input**

```text
100
```


**Expected output**

```text
35
```


**Constraints**

1 <= N <= 10^6


## Q16. Fixed-width repeated alphabet rows

A classroom printer creates N rows of letters. Row 1 contains N copies of A, row 2 contains N copies of B, and each following row advances one letter. Print the pattern without spaces between letters.


**Expected input**

```text
5
```


**Expected output**

```text
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE
```


**Constraints**

1 <= N <= 26


## Q17. Sequential alphabet staircase

A letter-training program prints a staircase. Row 1 begins with A; row 2 begins with B; each row begins one letter later than the previous row. Row i contains i consecutive letters. Given N, print the resulting pattern.


**Expected input**

```text
5
```


**Expected output**

```text
A
BC
CDE
DEFG
EFGHI
```


**Constraints**

1 <= N <= 20


## Q18. Alphabet staircase beginning with M

A text-generation tool prints a growing sequence beginning at M. The first row contains M; each next row begins again with M and includes one additional consecutive uppercase letter.


**Expected input**

```text
5
```


**Expected output**

```text
M
MN
MNO
MNOP
MNOPQ
```


**Constraints**

1 <= N <= 14


## Q19. Left-aligned repeated B pyramid

A console display prints a left-aligned pyramid using the character B. Row i contains 2i-1 copies of B. Given N, print N rows with no spaces between the letters.


**Expected input**

```text
4
```


**Expected output**

```text
B
BBB
BBBBB
BBBBBBB
```


**Constraints**

1 <= N <= 20


## Q20. Centred repeated B pyramid

A display system prints a centred pyramid using the letter B. Row i contains 2i-1 copies of B, preceded by N-i spaces. Given N, print the complete pyramid.


**Expected input**

```text
4
```


**Expected output**

```text
   B
  BBB
 BBBBB
BBBBBBB
```


**Constraints**

1 <= N <= 20


## Q21. Increasing number triangle

A teaching application prints consecutive integers beginning at zero. Given N, row i contains the integers from 0 through i-1, separated by single spaces.


**Expected input**

```text
5
```


**Expected output**

```text
0
0 1
0 1 2
0 1 2 3
0 1 2 3 4
```


**Constraints**

1 <= N <= 20


## Q22. Inverted number triangle

A teaching application prints rows of consecutive integers beginning at zero. The first row contains N numbers from 0 to N-1; every following row contains one fewer number.


**Expected input**

```text
5
```


**Expected output**

```text
0 1 2 3 4
0 1 2 3
0 1 2
0 1
0
```


**Constraints**

1 <= N <= 20


## Q23. Decreasing number rectangle

A console tool prints a left-aligned numeric block. Given N, the first row contains 0 through N-1, the next row contains 0 through N-2, and so on until the final row contains only 0. Separate values with one space.


**Expected input**

```text
4
```


**Expected output**

```text
0 1 2 3
0 1 2
0 1
0
```


**Constraints**

1 <= N <= 20


## Q24. Right-aligned half pyramid

A terminal-based layout tool prints a right-aligned half pyramid. Given N, print N rows. Each row contains N-i leading spaces followed by i stars. Do not place spaces between the stars.


**Expected input**

```text
5
```


**Expected output**

```text
    *
   **
  ***
 ****
*****
```


**Constraints**

1 <= N <= 20


## Q25. Hollow half pyramid

A console graphics utility draws a left-aligned hollow half pyramid. Given N, print stars along the first and last position of each row. The final row must be completely filled with stars. Interior positions in other rows must be spaces.


**Expected input**

```text
5
```


**Expected output**

```text
*
**
* *
*  *
*****
```


**Constraints**

2 <= N <= 20


---

# MOCK TEST 3 — Control flow, nested loops and rectangular patterns

**Questions in this mock:** 25


## Q1. Check a Strong number

A quality-control utility checks a special numeric property. A number is called a Strong number if the sum of the factorials of its digits equals the original number. Given N, calculate this sum using loops and print STRONG or NOT STRONG.


**Expected input**

```text
145
```


**Expected output**

```text
STRONG
```


**Constraints**

0 <= N <= 10^7


## Q2. Check an Automorphic number

A mathematics application checks whether the square of a number ends with the number itself. Given a non-negative integer N, determine whether N squared ends in the digits of N. Print AUTOMORPHIC or NOT AUTOMORPHIC.


**Expected input**

```text
25
```


**Expected output**

```text
AUTOMORPHIC
```


**Constraints**

0 <= N <= 10^6


## Q3. Generate primes in a range

A security-testing utility needs all prime numbers within an inclusive interval. Given A and B, print every prime in ascending order separated by spaces. If no prime occurs in the range, print None.


**Expected input**

```text
10 30
```


**Expected output**

```text
11 13 17 19 23 29
```


**Constraints**

1 <= A <= B <= 10^5


## Q4. Count primes in a range

A data-analysis program counts prime values in an inclusive interval. Given A and B, determine how many integers in the interval are prime and print the count.


**Expected input**

```text
1 20
```


**Expected output**

```text
8
```


**Constraints**

1 <= A <= B <= 10^6


## Q5. Find the number of steps in repeated division

A processing system repeatedly divides a positive integer N by 2 while it is even. When it becomes odd, subtract 1 and continue. Continue until the value reaches zero. Print the total number of operations.


**Expected input**

```text
10
```


**Expected output**

```text
5
```


**Constraints**

1 <= N <= 10^9


## Q6. Count positive and negative inputs

A sensor-reading program accepts integers until 0 is entered. Count how many entered values are positive and how many are negative. Print the positive count first and the negative count second, each with its label.


**Expected input**

```text
10
-5
20
-8
-2
0
```


**Expected output**

```text
Positive: 2
Negative: 3
```


**Constraints**

Each value is between -10^6 and 10^6


## Q7. Skip multiples of three using continue

A reporting program prints integers from 1 through N but excludes every multiple of 3. Implement the exclusion using the continue statement. Print the remaining integers in ascending order separated by spaces.


**Expected input**

```text
10
```


**Expected output**

```text
1 2 4 5 7 8 10
```


**Constraints**

1 <= N <= 10^5


## Q8. Stop before the first multiple of seven using break

A monitoring tool prints positive integers beginning at 1. It must stop as soon as it encounters the first multiple of 7, without printing that multiple. Use break to terminate the loop. Given N as the upper bound, print all values before the first multiple of 7, or all values through N if no multiple occurs.


**Expected input**

```text
10
```


**Expected output**

```text
1 2 3 4 5 6
```


**Constraints**

1 <= N <= 10^5


## Q9. Validate input using goto

A data-entry utility requires a non-negative integer. If the user enters a negative value, display no result and return to the input instruction using a goto statement. Once a valid value is entered, print its square. The sample contains invalid attempts followed by one valid value.


**Expected input**

```text
-5
-10
4
```


**Expected output**

```text
16
```


**Constraints**

The final valid input is between 0 and 10^6


## Q10. Infinite loop with a terminating condition

A measurement program repeatedly accepts non-negative readings. Add each reading to a running total. If a negative number is entered, exit the infinite loop using break without adding that negative value. Print the final sum.


**Expected input**

```text
10
20
30
-1
```


**Expected output**

```text
60
```


**Constraints**

Each non-terminating reading is between 0 and 10^6


## Q11. Multiplication tables using nested loops

A learning application generates multiplication tables. Given N, print tables for numbers 1 through N, with each table containing multiples from 1 through 5. Separate tables with a blank line. Follow the output labels shown in the sample.


**Expected input**

```text
2
```


**Expected output**

```text
Table of 1
1 x 1 = 1
1 x 2 = 2
1 x 3 = 3
1 x 4 = 4
1 x 5 = 5

Table of 2
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
```


**Constraints**

1 <= N <= 10


## Q12. Print all ordered pairs

A combinatorics tool generates pairs of integers. Given N, print every pair (i, j) satisfying 1 <= i < j <= N, one pair per line. After the pairs, print Total: followed by the number of pairs.


**Expected input**

```text
4
```


**Expected output**

```text
1 2
1 3
1 4
2 3
2 4
3 4
Total: 6
```


**Constraints**

1 <= N <= 100


## Q13. Print a multiplication grid

A school utility prints an N by N multiplication grid. Row i contains i multiplied by each column number from 1 through N. Separate values with a single space.


**Expected input**

```text
4
```


**Expected output**

```text
1 2 3 4
2 4 6 8
3 6 9 12
4 8 12 16
```


**Constraints**

1 <= N <= 20


## Q14. Print odd numbers in a range

A data-processing tool prints all odd integers from A through B, inclusive. Use a loop and a conditional statement to skip even values. If no odd number exists, print None.


**Expected input**

```text
4 10
```


**Expected output**

```text
5 7 9
```


**Constraints**

1 <= A <= B <= 10^6


## Q15. Count how many divisions are needed

A compression routine repeatedly divides a positive integer N by a positive integer K while N is divisible by K. Stop when it is no longer divisible. Print the number of successful divisions and the final value of N.


**Expected input**

```text
81 3
```


**Expected output**

```text
4
1
```


**Constraints**

1 <= N <= 10^9; 2 <= K <= 10^6


## Q16. Print a solid rectangle

A console layout tool prints a solid rectangle of stars. Given the number of rows R and columns C, print exactly R rows, each containing C stars separated by one space.


**Expected input**

```text
3 5
```


**Expected output**

```text
* * * * *
* * * * *
* * * * *
```


**Constraints**

1 <= R, C <= 30


## Q17. Print a hollow rectangle

A terminal graphics tool draws a rectangular border. Given R and C, print stars on the first row, last row, first column and last column. Print spaces inside the rectangle.


**Expected input**

```text
4 6
```


**Expected output**

```text
******
*    *
*    *
******
```


**Constraints**

2 <= R, C <= 30


## Q18. Print a decreasing-width star rectangle

A console exercise prints a left-aligned block whose row width decreases by one each time. Given N, the first row contains N stars, the next contains N-1, and the last contains one. Separate stars with one space.


**Expected input**

```text
5
```


**Expected output**

```text
* * * * *
* * * *
* * *
* *
*
```


**Constraints**

1 <= N <= 20


## Q19. Print a right-angled triangle with a diagonal edge

A geometry teaching tool prints a right-angled triangular arrangement of stars. Given N, row i contains i stars separated by one space. Align the first star of every row at the same left margin.


**Expected input**

```text
4
```


**Expected output**

```text
*
* *
* * *
* * * *
```


**Constraints**

1 <= N <= 20


## Q20. Print an alphabet triangle starting from each row letter

A text tool prints consecutive letters beginning with the row's starting letter. Row 1 contains A; row 2 begins at B and contains two consecutive letters; row 3 begins at C and contains three, continuing in this way.


**Expected input**

```text
5
```


**Expected output**

```text
A
BC
CDE
DEFG
EFGHI
```


**Constraints**

1 <= N <= 20


## Q21. Print an alphabet block with fixed row width

A classroom display prints five consecutive alphabet rows. Each row begins with the letter corresponding to its row number and repeats that letter N times. Print no spaces between characters.


**Expected input**

```text
4
```


**Expected output**

```text
AAAA
BBBB
CCCC
DDDD
```


**Constraints**

1 <= N <= 20


## Q22. Print a hollow square

A console graphics program draws a square outline. Given N, print an N by N square. Only border positions contain stars; all interior positions contain spaces.


**Expected input**

```text
5
```


**Expected output**

```text
*****
*   *
*   *
*   *
*****
```


**Constraints**

2 <= N <= 30


## Q23. Print a right-aligned inverted half pyramid

A console layout tool prints an inverted half pyramid aligned to the right. Given N, row 1 contains N stars and no leading spaces; each later row has one fewer star and one additional leading space.


**Expected input**

```text
5
```


**Expected output**

```text
*****
 ****
  ***
   **
    *
```


**Constraints**

1 <= N <= 20


## Q24. Print a number triangle with row numbers

A classroom tool prints row numbers in a growing triangle. Row i contains the integer i repeated i times, with spaces between values.


**Expected input**

```text
4
```


**Expected output**

```text
1
2 2
3 3 3
4 4 4 4
```


**Constraints**

1 <= N <= 20


## Q25. Print a constant-zero number triangle

A teaching display prints a growing triangle in which each row begins at zero and increases by one. Given N, row i contains i values beginning with 0.


**Expected input**

```text
4
```


**Expected output**

```text
0
0 1
0 1 2
0 1 2 3
```


**Constraints**

1 <= N <= 20


---

# MOCK TEST 4 — Mixed problem solving and advanced patterns

**Questions in this mock:** 25


## Q1. Calculate an alternating series

A calculator evaluates an alternating series. Given N, calculate 1 - 2 + 3 - 4 + ... up to N, using a loop. Print the final sum.


**Expected input**

```text
6
```


**Expected output**

```text
-3
```


**Constraints**

1 <= N <= 10^6


## Q2. Sum of factorials from 1 to N

A mathematical tool evaluates the series 1! + 2! + 3! + ... + N!. Calculate the sum iteratively. Use an integer type large enough for the stated limit.


**Expected input**

```text
5
```


**Expected output**

```text
153
```


**Constraints**

1 <= N <= 10


## Q3. Find the largest prime factor

A number-analysis utility identifies the largest prime factor of a positive integer N. Repeatedly test and divide factors using iteration. Print the largest prime factor.


**Expected input**

```text
84
```


**Expected output**

```text
7
```


**Constraints**

2 <= N <= 10^9


## Q4. Find HCF using repeated subtraction

A legacy calculator finds the highest common factor of two positive integers by repeatedly subtracting the smaller value from the larger until both values become equal. Given A and B, print the final common value.


**Expected input**

```text
18 12
```


**Expected output**

```text
6
```


**Constraints**

1 <= A, B <= 10^6


## Q5. Count steps in the Collatz process

A research utility applies the following transformation to a positive integer N: if N is even, divide it by 2; otherwise, multiply it by 3 and add 1. Continue until the value becomes 1. Print the number of transformations performed.


**Expected input**

```text
6
```


**Expected output**

```text
8
```


**Constraints**

1 <= N <= 10^6


## Q6. Calculate an integer power iteratively

A calculator must calculate A raised to B without using pow(). Given A and non-negative B, multiply the running result by A exactly B times. Print the result. Assume the result fits in a signed 64-bit integer.


**Expected input**

```text
3 4
```


**Expected output**

```text
81
```


**Constraints**

0 <= A <= 10^6; 0 <= B <= 20


## Q7. Find the first multiple in an interval

A scheduling program searches from A through B and must identify the first value divisible by K. Print that value and stop the search immediately. If no value is divisible by K, print -1.


**Expected input**

```text
17 40 6
```


**Expected output**

```text
18
```


**Constraints**

1 <= A <= B <= 10^6; 1 <= K <= 10^6


## Q8. Count digits without converting to a string

A low-level numeric utility needs the number of digits in a non-negative integer. Count its digits using repeated integer division by 10. Treat 0 as having one digit.


**Expected input**

```text
1002003
```


**Expected output**

```text
7
```


**Constraints**

0 <= N <= 10^18


## Q9. Find all perfect numbers up to N

A mathematics program lists perfect numbers up to a given limit N. A perfect number equals the sum of its positive divisors excluding itself. Print all such values in ascending order separated by spaces. If none exist, print None.


**Expected input**

```text
500
```


**Expected output**

```text
6 28 496
```


**Constraints**

1 <= N <= 100000


## Q10. Use break to stop at a sentinel

A data collector accepts integer readings until either 10 values have been read or the value -999 is entered. The sentinel is not included in the sum. Print the sum of the accepted readings. Use break to stop when the sentinel appears.


**Expected input**

```text
5
8
-2
-999
```


**Expected output**

```text
11
```


**Constraints**

At most 10 readings; each reading is between -10^6 and 10^6


## Q11. Use continue to ignore negative values

A sensor processor receives N integer readings. Add only non-negative readings to the total and ignore negative readings using continue. Print the total.


**Expected input**

```text
6
4 -2 7 -9 3 1
```


**Expected output**

```text
15
```


**Constraints**

1 <= N <= 1000; -10^6 <= reading <= 10^6


## Q12. Menu repetition using do-while

A simple menu program repeatedly reads an integer choice. Choice 1 prints HELLO, choice 2 prints WELCOME, and choice 0 exits. The program must use a do-while loop so that the menu is processed at least once. Print the corresponding message for each non-zero choice, one per line.


**Expected input**

```text
1
2
0
```


**Expected output**

```text
HELLO
WELCOME
```


**Constraints**

Each choice is 0, 1 or 2


## Q13. Repeat input using goto until valid

A data-entry system requires a number between 1 and 100 inclusive. If the user enters a value outside this range, use goto to ask again. Once valid, print VALID followed by the accepted value on the next line.


**Expected input**

```text
-4
120
37
```


**Expected output**

```text
VALID
37
```


**Constraints**

The input eventually contains a valid integer


## Q14. Nested loops to print a coordinate grid

A mapping utility prints all coordinate pairs (x, y) where x ranges from 1 to R and y ranges from 1 to C. Print one pair per line in row-major order, with a space between the coordinates.


**Expected input**

```text
2 3
```


**Expected output**

```text
1 1
1 2
1 3
2 1
2 2
2 3
```


**Constraints**

1 <= R, C <= 50


## Q15. Print an inverted alphabet triangle

A text processor prints a descending alphabet triangle. Given N, the first row contains N letters beginning at A, the next contains N-1 letters, and the last contains A alone.


**Expected input**

```text
4
```


**Expected output**

```text
ABCD
ABC
AB
A
```


**Constraints**

1 <= N <= 26


## Q16. Print a full star pyramid

A console graphics program prints a centred pyramid of stars. Given N, row i contains 2i-1 stars and N-i leading spaces. The stars are printed contiguously.


**Expected input**

```text
5
```


**Expected output**

```text
    *
   ***
  *****
 *******
*********
```


**Constraints**

1 <= N <= 20


## Q17. Print a hollow full pyramid

A terminal display draws only the outline of a centred pyramid. Given N, print the two sloping edges and a completely filled base row; all other interior positions are spaces.


**Expected input**

```text
5
```


**Expected output**

```text
    *
   * *
  *   *
 *     *
*********
```


**Constraints**

2 <= N <= 20


## Q18. Print a diamond of stars

A console graphics tool draws a solid diamond. Given N, print an upper pyramid of N rows followed by a lower inverted section of N-1 rows. Each row is centred, and star counts are odd numbers.


**Expected input**

```text
3
```


**Expected output**

```text
  *
 ***
*****
 ***
  *
```


**Constraints**

1 <= N <= 20


## Q19. Print a hollow diamond

A display utility draws a diamond outline. Given N, print a centred diamond with stars only on the two sloping boundaries. The middle row joins the widest points; the lower half mirrors the upper half.


**Expected input**

```text
3
```


**Expected output**

```text
  *
 * *
*   *
 * *
  *
```


**Constraints**

2 <= N <= 20


## Q20. Print an hourglass pattern

A console graphics tool draws an hourglass made of stars. Given N, print an inverted full pyramid of N rows followed by a full pyramid of N-1 rows. Keep the pattern centred and do not repeat the middle row.


**Expected input**

```text
3
```


**Expected output**

```text
*****
 ***
  *
 ***
*****
```


**Constraints**

1 <= N <= 20


## Q21. Print a butterfly pattern

A terminal graphics exercise prints a butterfly using two mirrored star wings. Given N, print 2N rows. The number of stars in each wing grows from 1 to N and then decreases from N to 1; the gap between the wings shrinks and then expands symmetrically.


**Expected input**

```text
3
```


**Expected output**

```text
*    *
**  **
******
******
**  **
*    *
```


**Constraints**

1 <= N <= 20


## Q22. Print an X pattern

A console graphics tool prints an N by N pattern. Print a star when the row and column positions are equal or when their sum is N+1. Print spaces elsewhere.


**Expected input**

```text
5
```


**Expected output**

```text
*   *
 * *
  *
 * *
*   *
```


**Constraints**

1 <= N <= 30


## Q23. Print an alphabet staircase beginning at M

A classroom display starts an alphabet staircase at M. Each row begins with M and contains one more consecutive uppercase letter than the previous row.


**Expected input**

```text
4
```


**Expected output**

```text
M
MN
MNO
MNOP
```


**Constraints**

1 <= N <= 14


## Q24. Print a descending row-number triangle

A numeric display prints a left-aligned triangle. Row 1 contains N, row 2 contains N and N-1, and every subsequent row removes the final value until the final row contains only N.


**Expected input**

```text
4
```


**Expected output**

```text
4 3 2 1
4 3 2
4 3
4
```


**Constraints**

1 <= N <= 20


## Q25. Print a hollow inverted half pyramid

A console tool draws an inverted half pyramid using boundary stars only. The top row is completely filled; subsequent rows contain a star at the left and right edge of the remaining row width, and the final row contains one star.


**Expected input**

```text
5
```


**Expected output**

```text
*****
*  *
* *
**
*
```


**Constraints**

2 <= N <= 20


---

# MOCK TEST 5 — Comprehensive mixed practice

**Questions in this mock:** 25


## Q1. Calculate the sum of digits until one digit remains

A transaction system repeatedly adds the digits of a long reference number until a single digit is obtained. Print the resulting digit. Use loops to perform each digit-sum pass.


**Expected input**

```text
99999
```


**Expected output**

```text
9
```


**Constraints**

0 <= N <= 10^18


## Q2. Check whether two numbers are co-prime

A security utility checks whether two positive integers share any common divisor other than 1. Given A and B, print COPRIME if their GCD is 1; otherwise print NOT COPRIME. Use iteration to find the GCD.


**Expected input**

```text
14 25
```


**Expected output**

```text
COPRIME
```


**Constraints**

1 <= A, B <= 10^9


## Q3. Generate the first N terms of an arithmetic progression

A scheduling application generates a sequence with a fixed difference. Given the first term A, common difference D and number of terms N, print the first N terms separated by spaces.


**Expected input**

```text
3 4 5
```


**Expected output**

```text
3 7 11 15 19
```


**Constraints**

1 <= N <= 1000


## Q4. Calculate the sum of digits at even and odd positions

A reporting tool analyses digit positions in a numeric identifier. Count positions from the left, beginning at position 1. Given N, calculate the sum of digits at odd-numbered positions and the sum at even-numbered positions. Print the odd-position sum first and the even-position sum second.


**Expected input**

```text
123456
```


**Expected output**

```text
9
12
```


**Constraints**

0 <= N <= 10^18


## Q5. Find the second largest digit

A numeric inspection tool finds the second largest distinct digit in a non-negative integer. If fewer than two distinct digits are present, print -1.


**Expected input**

```text
988321
```


**Expected output**

```text
8
```


**Constraints**

0 <= N <= 10^18


## Q6. Calculate the sum of all odd numbers up to N

A reporting utility adds every positive odd integer from 1 through N. Use iteration rather than a direct formula and print the sum.


**Expected input**

```text
10
```


**Expected output**

```text
25
```


**Constraints**

1 <= N <= 10^6


## Q7. Print all factors of a number

A mathematics utility lists the positive divisors of an integer. Given N, print all positive factors in ascending order separated by spaces.


**Expected input**

```text
18
```


**Expected output**

```text
1 2 3 6 9 18
```


**Constraints**

1 <= N <= 10^6


## Q8. Check whether a number is a Harshad number

A number is a Harshad number if it is divisible by the sum of its digits. Given a positive integer N, calculate the digit sum and determine whether N is divisible by it. Print HARSHAD or NOT HARSHAD.


**Expected input**

```text
18
```


**Expected output**

```text
HARSHAD
```


**Constraints**

1 <= N <= 10^9


## Q9. Print the first N multiples of K

A warehouse label generator creates a sequence of multiples. Given positive integers N and K, print the first N positive multiples of K, beginning with K, separated by spaces.


**Expected input**

```text
5 7
```


**Expected output**

```text
7 14 21 28 35
```


**Constraints**

1 <= N, K <= 10^5


## Q10. Find the smallest digit in a number

A batch-validation tool inspects a numeric code. Given a non-negative integer N, determine and print its smallest digit. Treat zero as containing the digit 0.


**Expected input**

```text
742901
```


**Expected output**

```text
0
```


**Constraints**

0 <= N <= 10^18


## Q11. Calculate modular exponentiation

A cryptographic test program calculates A^B modulo M. Use iterative repeated multiplication and reduce the running result modulo M at each step to keep the value bounded. Do not use pow().


**Expected input**

```text
3 4 5
```


**Expected output**

```text
1
```


**Constraints**

0 <= A <= 10^9; 0 <= B <= 10^6; 1 <= M <= 10^9


## Q12. Find the first N prime numbers

A security utility requires a list of the first N prime numbers. Given N, generate and print exactly N prime numbers in ascending order. Use loops to test divisibility.


**Expected input**

```text
5
```


**Expected output**

```text
2 3 5 7 11
```


**Constraints**

1 <= N <= 100


## Q13. Calculate a running total until it crosses a limit

A payment processor reads N transaction amounts and a limit L. Add payments sequentially. Stop after the first payment that makes the running total strictly greater than L. Print the count of included payments and the final total. If the total never exceeds L, process all N payments.


**Expected input**

```text
5
100
30 25 20 40 10
```


**Expected output**

```text
4
115
```


**Constraints**

1 <= N <= 1000; all payments are positive


## Q14. Print numbers while skipping multiples of a value

A report generator prints integers from 1 through N except those divisible by K. Use continue to skip the excluded values. Print the remaining numbers separated by spaces; print None if every value is skipped.


**Expected input**

```text
12 4
```


**Expected output**

```text
1 2 3 5 6 7 9 10 11
```


**Constraints**

1 <= N <= 10^5; 1 <= K <= 10^5


## Q15. Read values until a negative sentinel

A monitoring system accepts non-negative readings until a negative value is entered. Use a while or do-while loop. Print the count of accepted readings and their sum on separate lines. The negative sentinel must not be included.


**Expected input**

```text
5
8
0
12
-1
```


**Expected output**

```text
4
25
```


**Constraints**

At most 1000 accepted readings


## Q16. Print an increasing half pyramid

A console layout tool prints a left-aligned half pyramid. Given N, row i contains i stars separated by one space. Print exactly N rows.


**Expected input**

```text
4
```


**Expected output**

```text
*
* *
* * *
* * * *
```


**Constraints**

1 <= N <= 20


## Q17. Print an inverted half pyramid

A console layout tool prints a left-aligned inverted half pyramid. Given N, the first row contains N stars and each following row contains one fewer star.


**Expected input**

```text
4
```


**Expected output**

```text
* * * *
* * *
* *
*
```


**Constraints**

1 <= N <= 20


## Q18. Print a hollow inverted half pyramid

A terminal graphics tool prints an inverted half pyramid whose boundary is made of stars. The first row is solid. In each later row print the first and last positions only; print a single star in the final row.


**Expected input**

```text
4
```


**Expected output**

```text
* * * *
*   *
* *
*
```


**Constraints**

2 <= N <= 20


## Q19. Print a full pyramid

A console graphics program draws a centred star pyramid. Given N, print N rows of stars with odd row widths and the required leading spaces. Stars in each row must be adjacent.


**Expected input**

```text
4
```


**Expected output**

```text
   *
  ***
 *****
*******
```


**Constraints**

1 <= N <= 20


## Q20. Print an inverted full pyramid

A console graphics program draws a centred inverted pyramid. Given N, the first row contains 2N-1 stars and each subsequent row removes two stars while increasing the leading indentation by one.


**Expected input**

```text
4
```


**Expected output**

```text
*******
 *****
  ***
   *
```


**Constraints**

1 <= N <= 20


## Q21. Print a hollow full pyramid

A graphics utility draws a hollow centred pyramid. Print stars on both sloping edges and fill the bottom row completely. All other interior positions must be spaces.


**Expected input**

```text
4
```


**Expected output**

```text
   *
  * *
 *   *
*******
```


**Constraints**

2 <= N <= 20


## Q22. Print an increasing alphabet triangle

A classroom tool prints an alphabet triangle beginning with A. Row i contains the first i consecutive uppercase letters, starting again at A on every row.


**Expected input**

```text
4
```


**Expected output**

```text
A
AB
ABC
ABCD
```


**Constraints**

1 <= N <= 26


## Q23. Print repeated alphabet rows

A label generator prints N rows of uppercase letters. Every row contains N copies of one letter; the letter advances by one position on each new row, beginning with A.


**Expected input**

```text
4
```


**Expected output**

```text
AAAA
BBBB
CCCC
DDDD
```


**Constraints**

1 <= N <= 26


## Q24. Print a reverse alphabet triangle

A text-formatting tool prints a descending sequence of letters. The first row begins with the Nth letter from A and continues down to A. Each next row has one fewer character at the end.


**Expected input**

```text
4
```


**Expected output**

```text
DCBA
DCB
DC
D
```


**Constraints**

1 <= N <= 26


## Q25. Print an inverted number triangle

A learning tool prints numbers from zero upward in each row. The first row contains N values, and each subsequent row contains one fewer value. Separate adjacent values with a single space.


**Expected input**

```text
4
```


**Expected output**

```text
0 1 2 3
0 1 2
0 1
0
```


**Constraints**

1 <= N <= 20


---

# Pattern coverage checklist

The five mocks include the distinct pattern families shown in the uploaded sheets: increasing and inverted half pyramids; hollow inverted half pyramid; full, inverted and hollow full pyramids; right-aligned half pyramid; hollow half pyramid; solid and hollow rectangles/squares; decreasing-width star block; alphabet increasing/inverted/reverse triangles; repeated alphabet triangle and fixed-width alphabet rows; sequential alphabet staircase; M-starting alphabet staircase; B-character left-aligned and centred pyramids; increasing and inverted number triangles; decreasing-width number block; row-number triangle; descending row-number triangle; diamond and hollow diamond; hourglass; butterfly; and X pattern.


# Syllabus coverage checklist

The set also practises digit extraction and counting, arithmetic series, powers and modulo, prime testing and factorisation, repeated reduction, payment thresholds, divisors, GCD/LCM, Fibonacci, factorial, Armstrong/Strong/Automorphic/Harshad/perfect numbers, sentinel-controlled loops, nested loops, `break`, `continue`, `goto`, infinite loops, `while`, `do-while` and `for`.
