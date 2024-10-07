#include <stdio.h>
#include <math.h>
void check_prime(int x, int y);
int main(void) {
    int x, y;
    printf("Enter The Frist number of Intervals: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &x);
    printf("Enter The second number of Intervals: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &y);
    check_prime(x, y);
    return 0;
}
int is_prime(int num) {
    if (num < 2) {
        return 0;  
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;  
        }
    }
    return 1;
}

void check_prime(int x, int y) {
    for (int i = x + 1; i < y; i++) {
        if (is_prime(i)) {
            printf("%d ", i); 
        }
    }
}
