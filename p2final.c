#include<stdio.h>
typedef struct _fraction 
{
    int num,den;
}Fraction;
Fraction input_fraction()
{
    Fraction f;
    printf("enter num,den \n ");
    scanf("%d%d",&f.num,&f.den);
    return f;
}
Fraction  Largest_fraction(Fraction f1,Fraction f2,Fraction f3)
{
  Fraction smallest;
    
    float f1num=(f1.num)/f1.den;
    float f2num=(f2.num)/f2.den;
    float f3num=(f3.num)/f3.den;
    if(f1.num<f2.num && f1.num<f3.num)
    {
        smallest= f1;
    }
    else if(f2.num<f3.num)
    {
        smallest=f2;
    }
    else
    {
        smallest=f3;
    }
}
void output(Fraction f1,Fraction f2,Fraction f3,Fraction smallest)
{
    if(f1.num==smallest.num && f1.den==smallest.den)
    {
        printf("the largest fraction among %d/%d , %d/%d and %d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,smallest.num,smallest.den);
    }
    else if(f2.num==smallest.num && f2.den==smallest.den)
    {
         printf("the largest fraction among %d/%d , %d/%d and %d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,smallest.num,smallest.den);
    }
    else
    {
         printf("the largest fraction among %d/%d , %d/%d and %d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,smallest.num,smallest.den);
    }
}
int main()
{
    Fraction f1,f2,f3,largest;
    f1=input_fraction();
    f2=input_fraction();
    f3=input_fraction();
    largest=Largest_fraction(f1,f2,f3);
    output(f1,f2,f3,largest);
    return 0;
}