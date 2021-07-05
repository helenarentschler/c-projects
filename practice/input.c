#include <stdio.h>
#include <stdlib.h>

int main(){
	int age;
	double gpa;
	char grade, name[20];
	printf("Enter your name: ");
	fgets(name, 20, stdin); /* scanf only works up till the first space, hence the error. Use fgets with strings. standart input = console */
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Enter your gpa: ");
	scanf("%lf", &gpa);
	/*printf("Enter your grade: ");
	scanf("%c", &grade);*/
	printf("Your name is: %s\n", name); /* fgets - new line printed after name */
	printf("You are %d years old\n", age);
	printf("Your gpa is: %f\n", gpa);
	/*printf("Your grade is: %c", grade);*/
	return 0;
}
