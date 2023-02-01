/*
    Write a recursive function that takes an integer as
    an argument and returns the sum of all integers from
    1 to that number.

    Example
    functionName(6);

    Output:
    21      // That is; 1+2+3+4+5+6 = 21
*/

#include <stdio.h>

int sum_of_numbers(int n)
{
    if (n <= 0) {
        return 0;
    } else
     {
        return n + sum_of_numbers(n-1);
    }
}

int main() {
    int num, result;

    printf("Enter an integer: ");
    scanf("%d", &num);
    result = sum_of_numbers(num);
    printf("Sum of numbers from 1 to %d: %d\n", num, result);
    return 0;
}

