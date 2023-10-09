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
	int x,factorial = 1 ;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&x);
	for(int i=1; i<= x; i++){
		factorial *= i;

	}
	printf("factorial of %d = %d",x,factorial);
}

