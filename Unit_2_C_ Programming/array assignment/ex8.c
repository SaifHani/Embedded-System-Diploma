#include <stdio.h>
#include <string.h>

int main(void) {
    char text[50], temp;
    int i=0 ,j;
    printf("Enter the string: ");
    gets(text);
    j= strlen(text)-1;
    while (i<j)
    {
        temp=text[i];
        text[i]=text[j];
        text[j]=temp;
        i++;
        j--;
    }
    printf("Reverse srting is %s ", text);
}