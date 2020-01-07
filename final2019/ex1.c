#include<stdio.h>
void pound(double n);
int main(void)
{
double n;
scanf("%lf",&n);
pound(n);
}
void pound(double n)
{
printf("%f",(n+n)*(n+n));
}