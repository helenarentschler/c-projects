#include <stdio.h>
#include <stdlib.h>

int main(){
	int age = 19;
	double gpa = 3.5;
	char grade = 'F';
	char phrase[] = "Lorem ipsum dolor sit.";
	
	printf("Hello\nWorld\n");
	printf("Hello\"World\n");
	printf("My favorite %s is %d\n", "number", 8);
	printf("I scored %f\n", 9.6);
	printf("I am %d years old\n", age);
	printf("Grade: %c", grade);
	return 0;
}
