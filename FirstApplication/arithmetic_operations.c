#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int number1, number2;
	int plus, minus, multiply, mod;
	float divided_by;
	
	printf("Please enter two numbers:");
	scanf("%d%d",&number1, &number2);

	plus = number1 + number2;
	minus = number1 - number2;
	multiply = number1 * number2;
	divided_by = (float)number1 / number2;
	mod = number1 % number2;
	
	printf("Sum of two numbers = %d \n",plus);
	printf("Difference of two numbers = %d \n",minus);
	printf("Multiplication of two numbers = %d \n",multiply);
	printf("Quotient of two numbers = %f \n",divided_by);
	printf("Mode of two numbers= %d \n",mod);
	return 0;
}
