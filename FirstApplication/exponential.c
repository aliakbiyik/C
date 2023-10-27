#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Making force/exponent calculations in C language
int main(int argc, char *argv[]) {
	
	double base, exponent, conclusion;
	
	printf("Enter the base value: ");
	scanf("%lf", &base);
	printf("Enter exponent value: ");
	scanf("%lf", &exponent);
	
	conclusion = pow(base, exponent);
	
	printf("%.2lf ^ %.2lf = %.2lf", base, exponent, conclusion);
	return 0;
}
