#include<stdio.h>
int main() {
    float temperature;

    printf("Enter a temperature:");
    scanf("%f", &temperature);

    float count = 1.1;
    do{
        printf("%f\n", count);
        count++;
    } while (count < temperature);
    return 0;
}