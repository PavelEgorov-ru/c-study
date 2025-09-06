#include <stdio.h>

int main()
{
    int num1, num2;
    printf("введите два целых числа через пробел (например 4 5)");
    scanf("%d %d", &num1, &num2);
    
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int integer_div = num1 / num2;
    double float_div = (double)num1 / num2;

    printf("\n------Результаты------\n");
    printf("сумма чисел %d и %d = %d\n", num1, num2, sum);
    printf("разность чисел %d и %d = %d\n", num1, num2, difference);
    printf("произведение чисел %d и %d = %d\n", num1, num2, product);
    printf("целочисленное делени %d и %d = %d\n", num1, num2, integer_div);
    printf("деление с плавающей точкой %d и %d = %f\n", num1, num2, float_div);

    return 0;
}
