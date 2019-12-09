#include<stdio.h>

int main() {
    float base,expo,i,res;
    char o;

    printf("Baza\n");
    scanf("%f", &base);

    printf("Operator\n" );
    scanf("%s", &o);

    printf("Eksponent\n" );
    scanf("%f", &expo);

    res=base;
    switch (o) {
        case '^':

        for (i=1; i < expo; i++) {

            res=res*base;

        }
        printf("Rezultat\n=%f", res);

        break;


        default:
        printf("Krivo. Utipkajte ponovno.\n" );
    }


    return 0;
}
