#include <stdio.h>

int main()
{
    int limit, scan_result;
    printf("введите целое число кроме 0 для демонстрации цикла\n");
    scan_result = scanf("%d", &limit);
    if(scan_result < 0 || limit < 1){
        printf("Ошибка ввода!\n");
        return 1;
    }

    for(int i = 1; i <= limit; i++) {
        printf("Число %d \n", i);
    }

    printf("Счет завершен.\n");
}
