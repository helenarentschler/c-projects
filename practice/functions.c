#include <stdio.h>
#include <stdlib.h>

int main(){
	sayHi("Helena", 19);
	sayHi("Ana", 50);
	sayHi("Laura", 15);
	return 0;
}

void sayHi(char name[], int age){
	printf("Hello %s! You are %d years old.\n", name, age);
}
