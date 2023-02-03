/*
  Write a function to convert temperature from Celsius to
  Fahrenheit and vice versa.
*/

#include<stdio.h>

float covces(float t)
{
    return ((t*9/5)+32);
}
float covfeh(float t)
{
    return (((t-32)*5)/9);
}
int main()
{
  float t1, t2,c,f;

  printf("Enter Temperature in Celsius : ");
  scanf("%f",&t1);

  printf("\nEnter Temperature in Fahrenheit : ");
  scanf("%f",&t2);

  //Calling Function to convert Temperature From Celsius To Fahrenheit
  f = covces(t1);

  //Calling Function to convert Temperature From Fahrenheit To Celsius
  c = covfeh(t2);

  //Display Result
  printf("\nTemperature in Fahrenheit : %f",f);
  printf("\nTemperature in Celsius  : %f",c);

  return 0;
}
