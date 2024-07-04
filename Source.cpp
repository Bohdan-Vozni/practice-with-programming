#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int array[3];
	char string[1000];
	printf("\033[31minput three value: \n\033[0m");
	fgets(string, sizeof(string), stdin);
	char* next_token;
	char* token = strtok_s(string, " ", &next_token);
	int i = 0;
	while (token != NULL && i < 3) {
	     array[i] = atoi(token);
		 if (array[i] >= 10000) {
			 printf("Error, not entered cotectly value ");
			 break;
		}
		token = strtok_s(NULL, " ", &next_token);
		i++;
	}
	//printf("%d", i);
	if (i == 3) {
		float time = 1.0 / (1.0 / array[0] + 1.0 / array[1] + 1.0 / array[2]);
		printf("Time neded to eat the pie :%.2f hours", time);
	}
	return  0;
}








/*for (int j = 0; j < i; j++) {
		printf("%d\n", array[j]);
	}*/