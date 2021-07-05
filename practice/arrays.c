#include <stdio.h>
#include <stdlib.h>

int main(){
	int luckyNumbers[] = {2, 8, 11, 19, 48, 60};
	int primeNumbers[10];
	primeNumbers[1]= 2;
	printf("%d\n", luckyNumbers[2]);
	luckyNumbers[2] = 9;
	printf("%d\n", luckyNumbers[2]);
	printf("%d\n", primeNumbers[1]);
	return 0;
}
