#include<stdio.h>


void sum2(double a, double b)
{
    printf("2つの値の和は; %lf です\n", a + b);
}

double main(void)
{
    double m, n;

    printf("double型の値を2つ入力して下さい>>>");
    scanf("%lf %lf", &m, &n);

    sum2(m, n);
}
