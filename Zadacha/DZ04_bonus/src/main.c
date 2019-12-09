#include<stdio.h>
#include<math.h>

int  main() {
    int x;

    printf("Broj:\n");
    scanf("%d", &x);

        if ( (x>-10 && x<10) || (x>=50 && x<=120)) {
        printf("Pripada zadanom intervalu:\n");
        }

        else {
        printf("Ne pripada zadanom intervalu\n");
        }

    return 0;
}
