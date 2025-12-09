#include <stdio.h>
int main()
{

    int num1, num2;
    float f1, f2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter two floats: ");
    scanf("%f %f", &f1, &f2);

    int int_sum = num1 + num2;
    int int_diff = num1 - num2;

    printf("%d %d\n", int_sum, int_diff);

    float float_sum = f1 + f2;
    float float_diff = f1 - f2;

    printf("%.1f %.1f\n", float_sum, float_diff);

    return 0;
}
