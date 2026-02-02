#include<stdio.h>
int main() {

    int choice;
    float temperature,result;

    printf("Temperature Converter\n");
    printf("1.celsius to fahrenheit\n");
    printf("2.fahrenheit to celsius\n");
    printf("Enter your choice:");

    scanf("%d",&choice);

    if(choice == 1) {
        printf("Enter temperature in celsius:");
        scanf("%f",&temperature);
        result = (temperature*9/5) + 32;
        printf("Temperature in fahrenheit:%.2f\n",result);

    }
    else if(choice == 2) {
        printf("Enter temperature in fahrenheit:");
        scanf("%f",&temperature);
        result = (temperature - 32) * 5/9;
        printf("Temperature in celsius:%.2f\n",result);
    }
    else{
        printf("Invalid choice\n");
        
    }
    return 0;
}