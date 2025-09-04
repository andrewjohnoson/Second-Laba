#include <stdio.h>

int main()
{
    char op;

    printf("Введите операцию, которую хотели совершить над двумя числами: \n");
    scanf("%c", &op);

    printf("Введите два целых числа: \n");
    int a, b, res;
    scanf("%d%d", &a, &b);

    switch (op)
    {
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '*':
            res = a * b;
            break;
        case '/':
            if (b == 0) {
                printf("Ошибка: на 0 делить нельзя!");
                return 0;
            }
            res = a / b;
    }

    printf("Результат операции \"%c\" над числами %d и %d = %d", op, a, b, res);
    return 0;
}