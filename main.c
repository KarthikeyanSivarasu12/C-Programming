/*Write a recursive function to calculate the power of a given number (x^n), where both x and n are
integers.*/

#include<stdio.h>
#include<math.h>

double power(double x,double n)
{
    double result;
    result= x*pow(x,n-1);
    return result;

}

int main()
{
    double a,b;
    double Answer;
    printf("Enter the base:");
    scanf("%lf",&a);
    printf("Enter the exponent:");
    scanf("%lf",&b);
    Answer=power(a,b);
    printf("The answer of x^n is:%f",Answer);

}