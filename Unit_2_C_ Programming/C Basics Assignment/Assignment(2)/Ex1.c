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
#include <stdlib.h>

#include <stdio.h>

int main(void) {
	int x;
	printf("enter an integer you want to check: ");
	fflush(stdout);
	scanf("%d",&x);
	if(x%2==0){
		printf("%d is even",x);
	}
	else{
		printf("%d is odd",x);
	}
	return 0;
}

