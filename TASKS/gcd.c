//Write a function to find the GCD (greatest common divisor) of two numbers


#include <stdio.h>
long gcd(long x, long y)
{
  if (y == 0) {
    return x;
  }
  else {
    return gcd(y, x % y);
  }
}

int main()
{
    int n1, n2;

    printf("Please Enter two integer Values \n");
    scanf("%d %d", &n1, &n2);

    printf("GCD of %d and %d is = %d", n1, n2, gcd(n1, n2));
    return 0;
}

