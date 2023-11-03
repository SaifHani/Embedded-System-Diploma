#include <stdio.h>

int main(void) {
	int x, y;
	float a[10][10], b[10][10];
	printf("Enter the number of rows and columns: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &x, &y);
	if (x <= 0 || x > 10 || y <= 0 || y > 10) {
		printf("Invalid dimensions for the matrix. Rows and columns should be between 1 and 10.\n");
		return 1;
	}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			printf("Enter a(%d, %d): ", i + 1, j + 1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &a[i][j]);
		}
	}
	printf("Entered matrix:\n");
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			printf("%.2f  ", a[i][j]);
		}
		printf("\n");
	}  
	printf("Transpose of matrix:\n");
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			b[i][j] = a[j][i];
			printf("%.2f  ", b[i][j]);
		}
		printf("\n");
	}

	return 0;
}

