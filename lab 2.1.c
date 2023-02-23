#include <stdio.h>

int main() {
    double num1, num2;
    double remainder, difference, sum;

    printf("Введіть перше число: ");
    scanf("%lf", &num1);

    printf("Введіть друге число: ");
    scanf("%lf", &num2);

    remainder = num1 fmod num2;  // обчислення залишку від ділення
    difference = num2 - num1;  // обчислення різниці
    sum = num1 + num2;  // обчислення суми

    printf("Залишок від ділення %lf на %lf: %lf\n", num1, num2, remainder);
    printf("Різниця %lf і %lf: %lf\n", num2, num1, difference);
    printf("Сума %lf і %lf: %lf\n", num1, num2, sum);

    return 0;
}
