#include <stdio.h>
#include <math.h>

int main(void) {
    float num1, num2, result;
    char operator;

    printf("Specify first number:\n");
    scanf("%f", &num1);

    printf("Specify second number:\n");
    scanf("%f", &num2);

    printf("Specify operator:\n");
    scanf("%s", &operator);

    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '^':
            result = powf(num1, num2);
            break;
        default:
            printf("Invalid operator.\n");
    }

    printf("Your operation result is: %f", result);
    return 0;
}
