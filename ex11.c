#include <stdio.h>

int main () {
    int a;
    scanf("%d", &a);
    int b;
scanf("%d", &b);
  int c;
scanf("%d", &c);

if(a==b&&b==c){

    printf("il tringolo è equilatero\n");
}
else if ( a==b||a==c||b==c){

printf("il tringolo è isolscel\n");


}

else {


printf("il triangolo è scaleno\n");
}

return 0;
}