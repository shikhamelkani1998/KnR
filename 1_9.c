#include<stdio.h>
void main()
{
 int c,b=0;
 while((c=getchar())!=EOF)
 { 
  if(c!=' ')
  {
   if(b>0)
   {
    putchar(' ');
    b=0;
  }
  else
  putchar(c);
 }
  if(c==' ')
  {
   ++b;
  }
 }
}
  
