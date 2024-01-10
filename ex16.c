#include <stdio.h>

int main () {
float counter;
float prezzo= 5;
float somma;
while(1){
printf("inserisci il nummero di pezzi ordinati\n");
scanf("%f", &counter); 
if(counter<30&&counter>0) {
   somma=prezzo*counter;
   printf("%f\n", somma);

}
else if (counter>30&&counter<50) {
    somma=prezzo*counter*90/100;
    printf("%f\n", somma);

}
else if (counter>50) {
    somma=prezzo*counter*85/100;
    printf("%f\n", somma);

}
else if (counter<=0) {
    break;
}



}



return(0);



}