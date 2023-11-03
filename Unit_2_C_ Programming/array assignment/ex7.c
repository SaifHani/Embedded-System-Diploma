#include <stdio.h>
#include <string.h>

int main(void) {
    char text[50];
    int count=0;
    printf("Enter a string: ");
    gets(text);
    for(int i=0;text[i]!='\0';i++){
        count ++;
    }
     printf ("length of string = %d ",count);
}