#include <stdio.h>
#include <stdlib.h>

struct PersonnelInformation{
	int age;
	float wage;
	char name[30];
	char gender[8];
};

int main() {
	
	struct PersonnelInformation Personnel1;
	
	strcpy(Personnel1.name,"Ali AKBIYIK");
	strcpy(Personnel1.gender,"Male");
	Personnel1.age = 20;
	Personnel1.wage = 15000;
	
	printf("Personnel name: %s\n",Personnel1.name);
	printf("Personnel gender: %s\n",Personnel1.gender);
	printf("Personnel age: %d\n",Personnel1.age);
	printf("Personnel wage: %.2lf\n",Personnel1.wage);

	printf("\n.............................\n\n");
	
	struct PersonnelInformation Personnel2 = {20,15000,"Ali AKBIYIK","Male"};
	
	printf("Personnel name: %s\n",Personnel2.name);
	printf("Personnel gender: %s\n",Personnel2.gender);
	printf("Personnel age: %d\n",Personnel2.age);
	printf("Personnel wage: %.2lf\n",Personnel2.wage);
	
	return 0;
}
