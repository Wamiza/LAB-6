#include <stdio.h>
#include <math.h>

     int main()
     {
     	int number,digit,temp, remainder, sum = 0;
     	
     	printf("Enter Number");
     	scanf("%d" ,&number);
     	printf("Enter Number of Digits");
     	scanf("%d" ,&digit);
     	
     	 temp = number;
     	 
     	while (temp != 0) {
        remainder = temp % 10;        // Get the last digit
        sum += pow(remainder, digit); // Add the power of the digit
        temp /= 10;                   // Remove the last digit
        }
  
         if (sum == number) {
             printf("%d is An Armstrong number.\n", number);
       }
	    else {
             printf("%d is Not An Armstrong number.\n", number);
       }
  return 0;
}