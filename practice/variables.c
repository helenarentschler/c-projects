#include <stdio.h>
#include <stdlib.h>

int main(){
	char characterName[] = "John"; /* [] - store more than one character, like in a name or adress */
	int characterAge = 67;
	printf("There once was once a guy named %s\n", characterName);
	printf("He was %d years old \n", characterAge);
	printf("He really liked the name %s\n", characterName);
	characterAge = 87;
	printf("But did not like being %d\n", characterAge);
	return 0;
}
