#include<stdio.h>
#include<math.h>

int main() {

    float first_number, second_number, result;
    printf("Prvi broj\n");
    scanf("%f", &first_number);

    printf("Drugi broj\n");
    scanf("%f", &second_number);

    result=first_number+second_number;

    printf("Zbroj\n=%f", result);

    return 0;
}
