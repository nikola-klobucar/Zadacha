#include<stdio.h>

int main() {
    int number, up_border, down_border;

    printf("Pochetak intervala\n");
    scanf("%i", &up_border);

    printf("Kraj intervala\n");
    scanf("%i", &down_border);

    printf("Broj:\n" );
    scanf("%i", &number);

    if (number<up_border && number>=down_border) {
    printf("Pripada zadanom intervalu\n" );
    }
    else {
    printf("Ne pripada zadanom intervalu\n" );
    }

    return 0;
}
