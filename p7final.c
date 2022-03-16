#include<stdio.h>
typedef struct _fraction
{
 int num,den;
}fra;
fra input_fraction()
{
  fra f1;
  printf("enter the numerator and denominator value\n");
  scanf("%d %d",&f1.num,&f1.den);
  return f1;
}
fra add_fractions(fra f1,fra f2)
{  
  fra sum;
  sum.num=(f1.num *f2.den)+(f2.num * f1.den);
  sum.den=f1.den*f2.den;
  return sum;
  
}
void output(fra f1,fra f2,fra sum)
{
    float result;
    result=sum.num/sum.den;
printf("%d/%d+%d/%d=%f",f1.num,f1.den,f2.num,f2.den,result);
  }
int main()
{
    fra f1,f2,sum;
    f1=input_fraction();
    f2=input_fraction();
    
    sum=add_fractions(f1,f2);
    output(f1,f2,sum);
    return 0;
}