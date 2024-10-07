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
   char x;
   printf("Enter an alphabet: ");
   fflush(stdout);
   scanf("%C",&x);
   if(x=='a'|| x=='e' || x=='i' || x=='o' || x=='u'){
	   printf("%c is a vowel",x);
   }
   else{
	   printf("%C is  a consonant",x);
   }
	return 0;
}

