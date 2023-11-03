#include <stdio.h>
int main(void){
	int n ;
	float  x[n] , sum = 0 ,  avarage ;
	printf("Enter the numbers of data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(int i=0; i<n;i++){
		printf("Enter number %d: ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&x[i]);
		sum += x[i];
	}
	avarage = sum/n;
	printf("Avarage = %.2f ",avarage);
}
