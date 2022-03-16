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
  Fraction largest;
    
    float f1num=(f1.num)/f1.den;
    float f2num=(f2.num)/f2.den;
    float f3num=(f3.num)/f3.den;
    if(f1.num<f2.num && f1.num<f3.num)
    {
       largest= f1;
    }
    else if(f2.num<f3.num)
    {
        largest=f2;
    }
    else
    {
        largest=f3;
    }
}
void output(Fraction f1,Fraction f2,Fraction f3,Fraction largest)
{
    if(f1.num==largest.num && f1.den==largest.den)
    {
        printf("the largest fraction among %d/%d , %d/%d and %d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,largest.num,largest.den);
    }
    else if(f2.num==largest.num && f2.den==largest.den)
    {
         printf("the largest fraction among %d/%d , %d/%d and %d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,largest.num,largest.den);
    }
    else
    {
         printf("the largest fraction among %d/%d , %d/%d and %d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,largest.num,largest.den);
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