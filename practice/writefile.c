#include <stdio.h>
#include <stdlib.h>

int main(){
	char line[255];
	FILE * fpointer = fopen("employees.txt", "w");
	fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");
	fopen("employees.txt", "a");
	fprintf(fpointer, "\nKelly, Costumer Service");
	fclose(fpointer);
	fopen("employees.txt", "r");
	fgets(line, 255, fpointer);
	fgets(line, 255, fpointer);
	printf("%s", line);
	return 0;
}
