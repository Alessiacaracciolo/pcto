#include <stdio.h>

int main ()
{
    int a;
printf("inserisci primo numero");
scanf("%d", &a);
printf("il primo numero inserito è: %d/n", a);


int b;
printf("inserisci secondo numero");
scanf("%d", &b);
printf("il secondo numero inserito è: %d/n", b);

int c = a%b;
printf("a%b = c %d\n", c);
return 0;
}