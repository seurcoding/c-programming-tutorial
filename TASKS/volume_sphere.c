#include<stdio.h>
#include <math.h>
void volume_sphere(double r)

{
    double V;
    double pi;
    pi=3.14;

    V=(4.0/3.0)*pow(r,3);
    {
        printf("volume of a sphere is %.2lf", V);
    }
}
int main ()
{
    volume_sphere(10);
    return 0;
}

