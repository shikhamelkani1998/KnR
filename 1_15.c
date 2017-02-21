#include<stdio.h>
void farhtocel();
void celtofarh();
void main()
{

  farhtocel();
  celtofarh();
 
 }

void farhtocel()
{
 float fahr,celcius;
float lower=0;
float upper=300;
float steps=20;
 fahr=lower;
 printf("FHRENHEIT\tCELCIUS\n");
 while(fahr<=upper)
 {
  celcius=(5.0/9)*(fahr-32);
  printf("%3.0f\t %6.1f\n",fahr,celcius);
  fahr=fahr+steps;
}
}
void celtofarh()
{
 float celcius,fahr;
 float lower=0;
 float upper=300;
 float steps=20;
 celcius=lower;
 printf("CELCIUS\tFHRENHEIT\n");
 while(celcius<=upper)
 {
  fahr=(9.0/5)*celcius+32;
  printf("%3.0f\t %6.1f\n",celcius,fahr);
  celcius=celcius+steps;
 }
}
