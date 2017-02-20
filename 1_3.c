#include<stdio.h>
void main()
{
 float fahr,celcius;
 float lower, upper, steps;
 lower=0;
 upper=300;
 steps=20;
 fahr=lower;
 printf("FHRENHEIT\tCELCIUS\n");
 while(fahr<=upper)
 {
  celcius=(5.0/9)*(fahr-32);
  printf("%3.0f\t %6.1f\n",fahr,celcius);
  fahr=fahr+steps;
 }
}
