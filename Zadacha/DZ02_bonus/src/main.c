#include<stdio.h>
#include<math.h>

int main() {

    int first_number,second_number;

    printf("Prvi Broj:\n" );
    scanf("%d", &first_number);

    printf("Drugi broj:\n" );
    scanf("%d", &second_number);


    printf("Ostatak:\n%d\n", first_number%second_number);


    printf("Ostatak bez posto:\n%d",
    first_number-(first_number/second_number)*second_number);


    return 0;
}
