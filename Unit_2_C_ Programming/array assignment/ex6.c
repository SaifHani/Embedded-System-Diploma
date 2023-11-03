#include <stdio.h>
#include <string.h>

int main(void) {
    char text[50], x;
    int count=0;
    printf("Enter a string: ");
    gets(text);
    printf("Enter a character fo find frequency: ");
    scanf("%c",&x);
    for(int i=0; i<strlen(text);i++){
        if(x==text[i]){
            count++;
        }
    }
    printf("frequency of %c = %d",x,count);
    


 
}