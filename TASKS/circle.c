//Write a function to find the area of a circle
#include<stdio.h>

float circle_Area(float r)

{
    float A;
    float pi;
    pi =3.144;

    A = pi*r*r;
    {
        printf("Area of circle is %.2f\n",A);
    }
}
int main ()
{
    circle_Area(7); // am passing arg has radius r=7
    return 0;
}

