Arrange the provided list xs of nonnegative integers in ascending order based on their p-adic valuations.

The p-adic valuation of an integer n is the greatest power of p that divides n, unless n is 0, in which case the p-adic valuation is 0.

Example:

2

1 2 3 4 5 6

| | | | | |

v v v v v v 

0 1 0 2 0 1  <- 2-adic valuations

     |
     
     v
     
1 3 5 2 6 4  <- ascendingly sorted list

Input

Line 1 : A prime number p.

Line 2 : A space-separated list xs of nonnegative integers.

Output

A space-separated list of nonnegative integers sorted in ascending order based on the p-adic valuation.

Constraints

p is prime.

For every integer x of xs we have 0 <= x <= 2 ** 64.

Length of xs is < 20.

Example

Input

2

1 2 3 4 5 6

Output

1 3 5 2 6 4


