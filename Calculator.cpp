#include <stdio.h>
int main( )
{
	int number;
printf("Press 1 for Addition\n");
printf("Press 2 for Subtraction\n");
printf("Press 3 for Multiplication\n");
printf("Press 4 for Division\n");	
scanf("%d", &number);
if (number == 1){
	printf("You choose to add numbers\n");
	int number1, number2, sum;
	printf("Enter first number\n");
	scanf("%d", &number1);
	printf("Enter second number\n");
	scanf("%d", &number2);
	sum = number1+number2;
	printf("your result is""%d + %d = %d\n",number1,number2, sum);
}
if (number == 2){
	printf("You choose to subtract numbers\n");
	int number1, number2, subtract;
	printf("Enter first number\n");
	scanf("%d", &number1);
	printf("Enter second number\n");
	scanf("%d", &number2);
	subtract = number1-number2;
printf("your result is""%d - %d = %d\n",number1,number2,subtract);
}
if (number == 3){
	printf("You choose to multiply numbers\n");
	int number1, number2, multiply;
	printf("Enter first number\n");
	scanf("%d", &number1);
	printf("Enter second number\n");
	scanf("%d", &number2);
	multiply = number1*number2;
printf("your result is""%d * %d = %d\n",number1,number2,multiply);
}
if (number == 4){
	printf("You choose to divide numbers\n");
	int number1, number2, divide;
	printf("Enter first number\n");
	scanf("%d", &number1);
	printf("Enter second number\n");
	scanf("%d", &number2);
    divide = number1/number2;
printf("your result is""%d / %d = %d\n",number1,number2,divide);
}
printf("Thankyou for Using");
}
