#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
float a; // initialize needed variables
float b;
char symbol;
float sum;
float dif;
float mul;
float div;
float exp;
char menu;
do {
system("clear");
printf("==========================================\nCli CALC.\n==========================================");
printf("\n");
printf("To use enter a problem like this 4 + 5. then yoy will get an aunswer.\n symbols are +, -, *, /, ^.\n");
printf("\n\nPlease enter a math problem to 2 decimel places: ");
scanf("%f %c %f", &a, &symbol, &b);

if (symbol == '+') { // logic for addition
printf("\n");
sum = a + b;
printf("%f = %f + %f", sum, a, b);
printf("\n");
}

else if (symbol == '-') { // logic for subtraction
printf("\n");
dif = a - b;
printf("%f = %f - %f", dif, a, b);
printf("\n");
}

else if (symbol == '*') { // Logic for multiplication
printf("\n");
mul = a * b;
printf("%f = %f * %f", mul, a, b);
printf("\n");
}

else if (symbol == '/') {
printf("\n");
div = a / b;
 if (a == 0) {
 printf("Division by 0 error.");
  return 1;
}
else {
printf("%f = %f / %f", div, a, b);
printf("\n");
}
}

else if (symbol == '^') {
printf("\n");
exp = pow(a, b);
printf("%f = %f^%f", exp, a, b);
printf("\n");
}
printf("\n\n");
printf("Do you want to make anotjer calculation? (y-n): ");
scanf(" %c", &menu);

} while (menu == 'y' || menu == 'Y');
return 0;
}

