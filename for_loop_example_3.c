#include<stdio.h>
int main(){
    int number;
    printf("Enter a number:");
    scanf("%d", &number);
    int sum = 0;
    for (int i = 2; i <= number ;i=i+2){
        sum = sum + i;

    }
    printf("%d\n", sum);
    return 0;
}