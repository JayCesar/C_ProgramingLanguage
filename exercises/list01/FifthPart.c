#include <stdio.h>

int main(){

    double number, fifthPart;

    printf("Type a number: ");
    scanf("%lf%*c", &number);

    printf("THe fifth part is %.2f", (number / 5));

    return 0;
}