#include <stdio.h>
#include <stdlib.h>

int main(){
	int num = 8;
	const int R = 3;
	printf("%f\n", 5.6 + 7.9);
	printf("%f\n", 5 + 7.9);
	printf("%f\n", 5 + 7);
	printf("%f\n", 5 / 7.0);
	printf("%d\n", 19 / 7);
	printf("%f\n", 19.0 / num);
	/* printf("%f\n", pow(2, 3) );  results in a float 
 printf("%f\n", sqrt(49) );
	printf("%f\n", ceil(49.36) );
	printf("%f\n", floor(49.36) );*/
	printf("diameter: %d\n", 2 * R);
	return 0;
}
