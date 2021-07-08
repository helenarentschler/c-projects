#include <stdio.h>
#include <stdlib.h>

int main(){
	int nums[3][2] = {
					{1, 2},
					{8, 5},
					{4, 0}
					};
	int i, j;
	printf("%d", nums[1][1]);
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			printf("%d,", nums[i][j]);
		}
		printf("\n");
	}
	return 0;
}
