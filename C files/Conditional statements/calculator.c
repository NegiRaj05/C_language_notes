#include <stdio.h>
#include <math.h>

int main(){

    double num1;
    char operator;
    double num2;

    printf("Enter num1: ");
    scanf("%lf",&num1);
    printf("Enter operation: ");
    scanf(" %c",&operator);
    printf("Enter num2: ");
    scanf("%lf",&num2);
    
    

    // checker

    switch(operator){
        case '+':
            printf("Answer: %.2lf",num1+num2);
            break;
        case '-':
            printf("Answer: %.2lf",num1-num2);
            break;
        case '*':
            printf("Answer: %.2lf",num1*num2);
            break;
        case '/':
            printf("Answer: %.2lf",num1/num2);
            break;
        default :
            printf("Invalid operator {%c} !",operator);
    }
    return 0;
}