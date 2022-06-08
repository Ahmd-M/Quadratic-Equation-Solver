#include <stdio.h>
#include <math.h>

int main() {

    int a, b, c;
    double x1, x2, delta, real, imaginary;
    scanf("%d %d %d", &a, &b, &c);

    if(!(a*b*c))
        printf("Infinite number of solutions!");
    else if (!(a*b))
        printf("No solutions!");
    else if (!c)
    {
        x2 = -b/a;
        printf("x1=%.2lf\nx2=%.2lf", 0, x2);
    }
    else
    {
        delta = pow(b,2)-4*a*c;

        x1 = (-b+sqrt(delta))/(2.0*a);
        x2 = (-b-sqrt(delta))/(2.0*a);

        if(delta==0)
            printf("x=%.2lf", x1);
        else if (delta>0)
            printf("x1=%.2lf\n x2=%.2lf", x1, x2);
        else
        {
            real = (-b/(2.0*a));
            imaginary = sqrt(-delta)/(2*a);
            printf("x1=%.2lf+%.2lf*i\nx2=%.2lf-%.2lf*i", real, imaginary, real, imaginary);
        }
    }
    return 0;
}