#include <stdio.h>

int main() {
	int i, j, a = 0;
	for(i = 0; i < 6; i++) {
		for(j = 0; j < 11; j++) {
			if(i > 0 && i < 5) {
				if(j < 5 + a && j > 5 - a) {
					printf(" ");
				} else {
					printf("*");
				}
			} else {
				printf("*");
			}
		}
		a++;
		printf("\n");
	}
}
