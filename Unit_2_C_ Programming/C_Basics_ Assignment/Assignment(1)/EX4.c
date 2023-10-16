/*
 ============================================================================
 Name        : ccc.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // Include the sleep function

int main(void) {
    float x, y;
    printf("Enter two numbers:");
    fflush(stdout);
    scanf("%f %f", &x, &y);

    printf("product: %f\n", x * y); // Display the result

    // Introduce a 5-second delay
    sleep(5);

    return 0;
}
