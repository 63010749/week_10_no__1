#include <stdio.h>

void build(int i, int j, int m, int num, int digit) {
		if (i == num || j == num || i == 1 || j == 1) {
			printf("%c ", m);
		}
		else {
			printf("  ");
		}
}

int main() {
	int num;
	scanf("%d", &num);
	int digit = 65;

	if (num % 2 == 0) {
		for (int i = 1; i <= num; i++) {
			int m = digit;
			for (int j = 1; j <= num; j++) {
				if (m == 91) {
					m = 65;
				}
				build( i, j, m, num, digit);
				m++;
			}
			printf("\n");
			digit += 1;
		}
	}

	if (num % 2 != 0) {
		for (int i = 1; i <= num; i++) {
			int m = digit + 25;
			for (int j = 1; j <= num; j++) {
				if (m == 64) {
					m = 90;
				}
				build(i, j, m, num, digit);
				m--;
			}
			printf("\n");
			digit -= 1;
		}
	}

}