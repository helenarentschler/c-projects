#include <stdio.h>
#include <stdlib.h>

double cube(double num); /*prototype - "signature"*/

int main(){
	printf("Answer: %f", cube(3.0));
	return 0;
}

double cube(double num){
	return num * num * num;
	print("Here"); /*Return breaks you out of the function*/
}
