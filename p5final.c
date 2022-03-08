#include<stdio.h>
int input_size()
{
  int n;
  printf("enter the size of the array:");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  printf("enter the elements of the array:\n");
  for (int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int find_largest(int n,int a[n])
{
  int largest;
   for (int i = 1; i < n; i++) {
    if (a[0] < a[i]) {
      a[0] = a[i];
    }
  }
  largest=a[0];
  
}
void out_put(int n, int a[n], int largest)
{ 
  int index;
  for(int i=0;i<n;i++)
    {
      if (a[i]>largest)
        largest=a[i];
      index=i;
    }
  printf("largest value in the array is %d at index %d",largest,index);
}
int main()
{
  int n,large;
  n=input_size();
  int a[n];
  
  input_array(n,a);
  large=find_largest(n,a);
  out_put(n,a,large);
    return 0;
}