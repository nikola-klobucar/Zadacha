#include<stdio.h>

int main() {
    float x,y,i,res;
    char o;

    printf("Prvi broj\n");
    scanf("%f", &x);

    printf("Operator\n" );
    scanf(" %c", &o);

    printf("Drugi broj\n" );
    scanf("%f", &y);

    res=x;

    switch (o) {
        case '+':
            printf("Rezultat: %f", x+y);
            break;

        case '-':
            printf("Rezultat: %f", x-y);
            break;

        case '*':
            printf("Rezultat: %f", x*y);
            break;

        case '/':
            printf("Rezultat: %f", x/y);
            break;

        case '^':
            for (i=1; i < y; i++) {

            res *= x;

            }
        printf("Rezultat\n=%f", res);
        break;


        default:
            printf("Krivo. Ponovno utipkajte\n" );
    }


    return 0;
}
