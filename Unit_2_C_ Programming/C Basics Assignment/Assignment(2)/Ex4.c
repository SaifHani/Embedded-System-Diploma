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
  float x;
  printf("Enter number you want to check: ");
  fflush(stdout);
  scanf("%f",&x);
  if(x>0){
	  printf("%.2f is positive",x);
  }
  else if(x<0){
	  printf("%.2f is negative ",x);

  }
  else{
	  printf("you entered zero");
  }

}

