#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "rus");

    float m, n, p;
    int k = 0;
    printf("Введите три числа: \n");
    scanf("%f%f%f", &m, &n, &p);
    
    if (m < 0) {
        k++;
    }
    if (n < 0) {
        k++;
    }
    if (p < 0) {
        k++;
    }
    printf("Количество отрицательных чисел - %d", k);
    return 0;
}