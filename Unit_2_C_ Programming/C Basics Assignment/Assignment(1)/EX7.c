#include <stdio.h>
int main(void){
    float a , b;
    printf("Enter value of a: ");
    scanf("%f",&a);
    printf("Enter value of b: ");
    scanf("%f",&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapp, value of a = %.1f\n",a);    
    printf("After swapp, value of b = %.1f\n",b);

}
    