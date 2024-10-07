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
	float x,y , result = 0;
	char choise;

	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f %f",&x,&y);
	printf("choise the operation (+,-,*,/):  ");
	fflush(stdout); fflush(stdin);
	scanf("%c",&choise);
	switch(choise){
	case '+':{
		result = x+y;
		printf("result = %.1f ",result);
	}
    break;
	case '-':{
		result = x-y;
		printf("result = %.1f ",result);
	}
    break;
	case '*':{
		result = x*y;
		printf("result = %.1f ",result);
	}
    break;
	case '/':{
		result = x/y;
		printf("result = %.1f ",result);
	}
    break;
	}
}

