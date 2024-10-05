#include <stdio.h>

    int is_prime(int n);
    void fibonacci_series(int n);
    int main() {
    int number;

    printf("Enter Number: ");
    scanf("%d", &number);
    
    if (is_prime(number)) {
        printf("Prime Number\n");
        fibonacci_series(number);
    } 
	else {
        printf("Not Prime Number\n");
    }
   return 0;
}
    int is_prime(int n) {
    if (n <= 1) return 0; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1; 
}
   
    fibonacci_series(int n) {
    int a = 0, b = 1, next;
    printf("Series is = ");
    while (a <= n) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}