#include<stdio.h>
#define MAXLINE 1000
int getlin(char line[], int lim);
void main()
{
 int len;
 char line[MAXLINE];
 while((len=getlin(line,MAXLINE))>0)
 {
  if(len>80)
  {
   printf("%s",line);
  }
 }
}
int getlin(char line[],int lim)
{
  int c,i;
  for(i=0; i<lim-1 && (c-getchar())!=EOF && c!='\n';i++)
   line[i]=c;
  if(c=='\n')
  {
   line[i]='\0';
   return i;
 }
}

