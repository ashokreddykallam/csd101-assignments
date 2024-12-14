#include <stdio.h>

float add(float a, float b) {return a + b;}
float subtract(float a, float b) {return a - b;}
float multiply(float a, float b) {return a * b;}
float divide(float a, float b) {return a / b;}

int main() {
    float num1, num2, result;
    char operator;
    float (*operation)(float, float);
    printf(" first number: ");
    scanf("%f", &num1);
    printf("second number: ");
    scanf("%f", &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    switch (operator) {
        case '+':
            operation = add;
            break;
        case '-':
            operation = subtract;
            break;
        case '*':
            operation = multiply;
            break;
        case '/':
             operation = divide;
            break;
    }
    result = operation(num1, num2);
    printf("Result: %f", result);
    return 0;
}