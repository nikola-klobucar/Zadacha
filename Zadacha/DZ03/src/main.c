#include<stdio.h>

int main() {
    int x;
    printf("Broj:\n" );
    scanf("%i", &x);

        if (x<100 && x>=0) {
        printf("Pripada zadanom intervalu\n" );
        }
        else {
        printf("Ne pripada zadanom intervalu\n" );
        }

    return 0;
}
