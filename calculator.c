#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;
    
    printf("Welcome to the Scientific Calculator!\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exponentiation\n");
    printf("6. Square Root\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("Enter two numbers to add: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %lf\n", result);
            break;
        case 2:
            printf("Enter two numbers to subtract: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %lf\n", result);
            break;
        case 3:
            printf("Enter two numbers to multiply: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %lf\n", result);
            break;
        case 4:
            printf("Enter two numbers to divide: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 / num2;
            printf("Result: %lf\n", result);
            break;
        case 5:
            printf("Enter a number and its exponent: ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            printf("Result: %lf\n", result);
            break;
        case 6:
            printf("Enter a number to find its square root: ");
            scanf("%lf", &num1);
            result = sqrt(num1);
            printf("Result: %lf\n", result);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
    
    return 0;
}