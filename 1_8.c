#include<stdio.h>
void main()
{
 int c,nl=0,b=0,t=0;
 while((c=getchar())!=EOF)
 {
  if(c=='\n')
   ++nl;
  if(c==' ')
   ++b;
  if(c=='\t')
   ++t;
 }
 printf("New lines are=%d\nBlanks are%d\nTabs are%d\n",nl,b,t);
}
