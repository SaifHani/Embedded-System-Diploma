#include <stdio.h>

void reverseSentence();

int main() {
    printf("Enter a sentence: ");
    fflush(stdout);
    reverseSentence(); 
    return 0;
}

void reverseSentence() {
    char ch;
    scanf("%c", &ch);  

    if (ch != '\n') { 
        reverseSentence(); 
        printf("%c", ch);   
    }
}
