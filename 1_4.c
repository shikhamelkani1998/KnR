#include<stdio.h>
void main()
{
 float fahr,celcius;
 float lower, upper, steps;
 lower=0;
 upper=300;
 steps=20;
 celcius=lower;
 printf("CELCIUS\tFHRENHEIT\n");
 while(celcius<=upper)
 {
  fahr=(9.0/5)*celcius+32;
  printf("%3.0f\t %6.1f\n",celcius,fahr);
  celcius=celcius+steps;
 }
}
