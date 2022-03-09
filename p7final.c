#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;

Fraction input_fraction()
{
  Fraction f;
  printf("enter the numerator and denominator:");
  scanf("%d %d",&f.num,&f.den);
  return f;
}
Fraction add_fractions(Fraction f1, Fraction f2)
{
  (int) Fraction sum; 
  sum=(f1.num/f1.den)+(f2.num/f2.den);
}
void output(Fraction f1, Fraction f2,Fraction sum)
{
  printf("sum of two fractions=%d",sum);
}
int main()
{
  Fraction f1,f2,f3,sum;
  f1=input_fraction();
  f2=input_fraction();
 
  sum=add_fractions(f1,f2);
  output(f1,f2,sum);
  return 0;
  }  
