#include <stdio.h>

int main ()
{
    float a;
printf("inserisci primo numero");
scanf("%f", &a);
printf("il primo numero inserito è: %f/n", a);


float b;
printf("inserisci secondo numero");
scanf("%f", &b);
printf("il secondo numero inserito è: %f/n", b);

float c = a + b;
printf("a + b = c %f\n", c);
return 0;
}


