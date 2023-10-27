#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double number, square_root;
	
	printf("Enter the number to calculate the square root: ");
	scanf("%lf", &number);
	
	square_root= sqrt(number);
	
	printf("Square root of the number = %.2lf",square_root);
	
	return 0;
	
}
