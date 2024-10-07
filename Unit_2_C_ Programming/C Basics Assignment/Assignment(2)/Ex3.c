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
int main(void) {
	float x,y,z;
	printf("Enter three numbers:");
	fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);
	if(x>y){
		if(x>z){
			printf("largest number = %.2f",x);
		}
		else{
			printf("largest number = %.2f",z);
		}
	}
	else{
		if(y>z){
			printf("largest number = %.2f",y);

		}
		else{
			printf("largest number = %.2f",z);
		}

	}
}

