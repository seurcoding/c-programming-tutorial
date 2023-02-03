//Write a function to find the factorial of a number

 #include <stdio.h>

 int factorial()
{
int i,fact=1,number;

printf("Enter a number: ");
scanf("%d",&number);
    for(i=1;i<=number;i++)
        {
    fact=fact*i;
        }
  printf("Factorial of %d is: %d\n",number,fact);
  }

  int main ()
  {
     factorial();
     return 0;
  }
