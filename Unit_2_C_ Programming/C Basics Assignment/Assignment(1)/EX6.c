/*
 ============================================================================
 Name        : ex.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,c;
	printf("Enter value of a:");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b:");
	fflush(stdout);
	scanf("%f",&b);
	c = a;
	a = b;
	b = c;

	printf("After swapping, value of a: %10.2f \n",a);
	printf("After swapping, value of b: %10.1f",b);
	return 0;
}
