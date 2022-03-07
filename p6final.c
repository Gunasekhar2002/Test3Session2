#include<stdio.h>
#include<string.h>
void input_string(char *string)
{
  printf("enter a string:");
  scanf("%[^n]s",string);
  
}
int count_words(char *string)
{
  int no_words=1,i;
   	for(i = 0; string[i] != '\0'; i++)
	{
		if(string[i] == ' ' || string[i] == '\n' || string[i] == '\t')
		{
			no_words++;	
		} 
	}	
  return no_words;
}
void output(char *string, int no_words)
{ 
 
  printf("the number of words in a string %s is %d",string,no_words);
  }
int main()
{
  
  char str;
  int countwrds;
  input_string(&str);
  countwrds=count_words(&str);
  output(&str,countwrds);
  return 0;
}