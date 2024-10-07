#include <stdio.h>
int factorial(int x);
int main(){
    int x;
    printf("Enter Positive Number To Get Its Factorial: ");
    fflush(stdout);
    scanf("%d",&x);
    printf("The Factorial of %d = %d",x,factorial(x));
}
  int factorial(int x){
    if (x==1){
        return 1 ;
    }
    else{
     return x*factorial(x-1);
    }
  } 