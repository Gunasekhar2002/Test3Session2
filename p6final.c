#include<stdio.h>
#include<string.h>
void inputs(char *str)
{
    printf("enter a string:");
    scanf("%s",str);
}
int count_words(char *str)
{
    int i,no_words=0;
    for (i=0;str[i]!='\0';i++)
    {
        if (str[i]==' ')
        {
            no_words++;
        }
    }
        return no_words;
}
void output(char *str,int no_words)
{
    printf("no of words in the given string is %d",no_words+1);
}
int main(){
    char s;
    int count;
    inputs(&s);
    count=count_words(&s);
    output(&s,count);
    return 0;
}