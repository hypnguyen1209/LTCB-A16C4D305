#include <stdio.h>

int main() {
	char keyPress;
	int key;
	printf("NGON NGU LAP TRINH\n");
	int check = 0;
	while(check < 2) {
		keyPress = getch();
		key = keyPress;
		if(check == 1) { 
			if(key) {
				break;
			}
		}
		if(key == 99) {
			printf("TURBO C\n");
		} else if(key == 112) {
			printf("TURBO PASCAL\n");
		} else {
			printf("NGON NGU LAP TRINH\n");
		}
		check++;
	}
	return 0;
}
