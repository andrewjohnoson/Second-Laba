#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Введите три действительных числа: \n");
    scanf("%f%f%f", &a, &b, &c);
    int isTrue = 1;
    if ((a > b || fabs(a - b) < 1e-7) &&
        (b > c || fabs(b - c) < 1e-7) &&
        (a > c || fabs(a - c) < 1e-7)) {
        a *= 2;
        b *= 2;
        c *= 2;
    } else {
        a = fabs(a);
        b = fabs(b);
        c = fabs(c);
        isTrue = 0;
    }
    
    if (isTrue) {
        printf("Числы были удвоены:\n%.7f %.7f %.7f", a, b, c);
    } else {
        printf("Была вычислена абсолютная величина:\n%.7f %.7f %.7f", a, b, c);
    }
    return 0;
}