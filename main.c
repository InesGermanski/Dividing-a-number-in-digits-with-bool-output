#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, digit1, digit2, digit3, digit4, digit5;

    printf("Input a 5 digit number:\n");
    scanf("%d", &num);

    digit5 = num % 10;
    digit3 = (num % 100) / 10;

    digit1 = (num / 1000) / 10;
    digit2 = (num % 10000) / 1000;
    digit4 = (num % 100) / 10;

    printf("%d", ((digit5 + digit3) > (digit1 + digit2 + digit4)) ? 1 : 0);
}
