#include <stdio.h>

int main () {
    int let;
    printf("scrivi una lettera:\n");
    scanf("%d", let);
    if(let=97 || let== 101 || let== 105 || let==111 || let==117 || let== 65 || let==69 || let== 73 || let==79 || let==85 || let==89 || let== 121) 
    {
      printf("la lettera è una vocale\n");
    }
   else {
    printf("la lettera è una consonante\n");
   }
   return 0;
}
