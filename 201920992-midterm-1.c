#include <stdio.h>

double aver_age(double in1, double in2)
{ 
  double result=0;
  double sum = in1 + in1;
  result = sum / 2.0;

  return result;
}

int main()
{
  double  a=0, b=0, c =0;
  scanf("%lf %lf",&a, &b);

  c = aver_age(a,b);

  printf("%lf",c);

  return 0;
}

