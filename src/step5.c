#include <stdio.h>

int main()
{
    int num1, num2, res;
    printf("введите два целых числа через пробел (например 4 5)");
    res = scanf("%d %d", &num1, &num2);
    if (res != 2)
    {
        printf("Ошибка, неправильный ввод!\n");
        return 1;
    }
    
    printf("\n------Результаты------\n");
    int sum = num1 + num2;
    printf("сумма чисел %d и %d = %d\n", num1, num2, sum);
    int difference = num1 - num2;
    printf("разность чисел %d и %d = %d\n", num1, num2, difference);
    int product = num1 * num2;
    printf("произведение чисел %d и %d = %d\n", num1, num2, product);
    
    if(num2 == 0){
        printf("на ноль делить нельзя\n");
    } else {
        int integer_div = num1 / num2;
        printf("целочисленное делени %d и %d = %d\n", num1, num2, integer_div);
        double float_div = (double)num1 / num2;
        printf("деление с плавающей точкой %d и %d = %f\n", num1, num2, float_div);
    }
    return 0;
}
