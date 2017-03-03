#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 1000
int get_line(char s[], int lim);
void reverse(char s[]);
void main()
{
int len; 
char line[MAXLINE]; 
while ((len = get_line(line, MAXLINE)) > 0) {
reverse(line);
printf("%s", line);
}
}

int get_line(char s[], int lim)
{
int c, i;
for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
s[i] = c;
if (c == '\n') {
s[i] = c;
++i;
}
s[i] = '\0';
return i;
}
void reverse(char s[])
{
int i, j;
char temp;
for (j = 0; s[j] != '\0'; ++j);
j--;
for (i = 0; i < j; ++i) {
temp = s[i];
s[i] = s[j-1];
s[j-1] = temp;
--j;
}
}
