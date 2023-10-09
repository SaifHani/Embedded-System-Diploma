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
  char c;
  printf("Enter a character: ");
  fflush(stdout);
  scanf("%c",&c);
  if((c>='A'&& c<='Z')|| (c>='a'&& c<='z')){
	  printf("%c is an alphabet",c);
  }
  else{
	  printf("%c is not an alphabet",c);
  }
}

