#include <stdio.h>
#include <math.h>

int main() {

    int a, b, c;
    double x1, x2, delta, real, imaginary;
    char superscript_2 = 253;

    printf("ax%c+bx+c=0\n", superscript_2);
    printf("Enter values in this format:\na b c = ");
    scanf("%d %d %d", &a, &b, &c);

    if(!(a||b||c)) //If (a,b,c) = (0,0,0)
        printf("Infinite number of solutions!");
    else if (!(a||b)) //If (a,b) = (0,0) and c!=0
        printf("No solutions!");
    else if (!(a&&b&&c)) //If a=0 or b=0 or c=0
    {
        if(!a) //If a=0
        {
            x1 = -c/(b*1.0);
            printf("x=%.2lf", x1);
        }
        else if(!b) //If b=0
        {
            x1 = -c/(a*1.0);
            printf("x=%.2lf", x1);
        }
        else //If c=0
        {
            x1 = -b/(a*1.0);
            x2 = 0;
            printf("x1=%.2lf\nx2=%.2lf", x1, x2);
        }
        
    }
    else //If (a,b,c) != (0,0,0)
    {
        delta = pow(b,2)-4*a*c;

        x1 = (-b+sqrt(delta))/(2.0*a);
        x2 = (-b-sqrt(delta))/(2.0*a);

        if(!delta) //If delta = 0
            printf("x=%.2lf", x1);
        else if (delta>0)
            printf("x1=%.2lf\nx2=%.2lf", x1, x2);
        else //If delta < 0
        {
            real = (-b/(2.0*a));
            imaginary = sqrt(-delta)/(2*a);
            printf("x1=%.2lf+%.2lfi\nx2=%.2lf-%.2lfi", real, imaginary, real, imaginary);
        }
    }
    return 0;
}