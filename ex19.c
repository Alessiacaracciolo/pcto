#include <stdio.h>

int radice(int D) {
    if (D>=0) {
    for (int i= 0;i<D;i++) {
        if (i*i==D) {
            return i;
        }
    }
    }
    else {
        printf("error");
    }
}

int main () {
    int a;
    int b;
    int c;
    printf("inserisci il valore di a\n");
    scanf("%d", &a);
    printf("inserisci il valore di b\n");
    scanf("%d", &b);
    printf("inserisci il valore di c\n");
    scanf("%d", &c);

    int D;
    D= b*b- 4*a*c;
    D=radice(D);


    

    
    int x1;
    int x2;
    if (D>0) {
        x1 = -b+D;
        x1 = x1/2*a;
        x2 = -b-D;
        x2= x2/2*a;

    }
    
    else if (D==0) {
        x1 = -b+D;
        x1 = x1/2*a;
        x1=x2;
    }

   
printf("x1 = %d e x2 = %d" , x1 , x2);
return 0;

}