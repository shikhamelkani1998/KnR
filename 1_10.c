#include<stdio.h>
void main()
{
 int c;
 while((c=getchar())!=EOF)
 { 
  if(c=='\t')
   printf("\\t");
  else if(c=='\b')
   {
   putchar('\\');
   putchar('b');
   }
  else if(c=='\n')
   printf("\\n");
  else
   putchar(c);
 }
}
  
