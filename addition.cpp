#include <stdio.h>
int main(){
	int number1, number2, modulodivision;
	printf("Enter two numbers\n");
	scanf("%d %d", &number1, &number2);
 modulodivision = number1/number2;
	printf("%d / %d = %d", number1, number2, modulodivision);
}
