#include <stdio.h>
#include <stdlib.h>

int main(){
	int age;
	double gpa;
	char grade, name[20];
	printf("Enter your name: ")
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Enter your gpa: ");
	scanf("%lf", &gpa);
	printf("Enter your grade: ");
	scanf("%c", &grade);
	printf("You are %d years old\n", age);
	printf("Your gpa is: %f\n", gpa);
	printf("Your grade is: %c", grade);
	return 0;
}
