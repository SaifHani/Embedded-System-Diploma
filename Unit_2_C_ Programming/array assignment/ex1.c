/*
 ============================================================================
 Name        : ss.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main(void){
	float matrix_a[2][2];
	float matrix_b[2][2];
	float matrix_c[2][2];
	printf("Enter the elements of matrix a\n");
	for(int i=0;i<2;i++){
		for(int z=0;z<2;z++){
			printf("Enter a (%d , %d): ",i+1,z+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&matrix_a[i][z]);
		}

	}
	printf("Enter the elements of matrix b\n");
	for(int i=0;i<2;i++){
		for(int z=0;z<2;z++){
			printf("Enter b (%d , %d): ",i+1,z+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&matrix_b[i][z]);
		}

	}
	for(int i=0;i<2;i++){
		for(int z=0;z<2;z++){
			matrix_c[i][z] = matrix_a[i][z] + matrix_b[i][z];
		}
		printf("\n");

	}
	printf("the sum of matrix a & b is:\n");
	for(int i=0;i<2;i++){
		for(int z=0;z<2;z++){
			printf(" %.1f ",matrix_c[i][z]);
		}
		printf("\n");

	}
}









