#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    float x; 
    printf("Введите x");
    scanf_s("%f", &x);
        float y;
        printf("Введите у");
        scanf_s("%f", &y);
        float z;
        printf("Введите z");
        scanf_s("%f", &z);

    float num1 = 2 * cos(x - 2.0 / 3.0);
    float num2 = 0.5 + pow(sin(y), 2);
    float sum = 1 + (pow(z, 2) / (3 - pow(z, 2) / 5));

    float s = (num1 / num2) * sum;

    printf("Исходные значения:\n");
    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);
    printf("z = %.6f\n", z);
    printf("\n");

    printf("Результат вычисления:\n");
    printf("S = %.6f\n", s);
    printf("\n");

    printf("Ожидаемый ответ:\n");
    printf("s = 0,749155\n");

    return 0;
}
