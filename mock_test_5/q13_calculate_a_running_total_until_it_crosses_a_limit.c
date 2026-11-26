/*
Q13. Calculate a running total until it crosses a limit

A payment processor reads N transaction amounts and a limit L. Add payments sequentially. Stop after the first payment that makes the running total strictly greater than L. Print the count of included payments and the final total. If the total never exceeds L, process all N payments.

Expected input:
5
100
30 25 20 40 10

Expected output:
4
115

Constraints:
1 <= N <= 1000; all payments are positive
*/
