//Write a function to find the largest of two numbers

#include <stdio.h>

double largest_number()
{
    double a, b, c;

    printf("Enter three number: ");

    scanf("%lf %lf %lf",&a,&b,&c);

 //if a is greater than b and c

    if(a >= b && a >= c)

   printf("%.2lf is the largest number. ",&a);

// if b is greater than both a and c, b is the largest
  else if (b >= a && b >= c)
  printf("%.2lf is the largest number.", b);

// if both above conditions are false, c is the largest
  else
    printf("%.2lf is the largest number.", c);
}

int main()
 {
    largest_number();
    return 0;
}

