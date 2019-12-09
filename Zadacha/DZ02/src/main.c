#include<stdio.h>
#include<math.h>

int main() {

    int first_number,second_number,modulo,quotient;

    printf("Prvi Broj:\n" );
    scanf("%d", &first_number);

    printf("Drugi broj:\n" );
    scanf("%d", &second_number);

    modulo=first_number%second_number;

    printf("Ostatak:\n%d\n", modulo);

    quotient=first_number/second_number;
    modulo= first_number-(round(quotient)*second_number);

    printf("Ostatak bez posto:\n%d", modulo);


    return 0;
}
