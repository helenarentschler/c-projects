#include <stdio.h>
#include <stdlib.h>

int main(){
	int age = 40;
	int * pAge = &age;
	double gpa = 3.5;
	double * pGpa = &gpa;
	char grade = 'F';
	char * pGrade = &grade;
	
	printf("age: %p\ngpa: %p\ngrade: %p", &age, &gpa, &grade); /* p - pointer (to acess adress) */
	printf("\n%p", pAge);
	printf("\n%d", *pAge); /*dereferencing*/
	printf("\n %c", *pGrade);
	return 0;
}
