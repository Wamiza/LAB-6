#include <stdio.h>

   int main()
   {
   	int pin,i;
   	printf("Enter PIN ");
   	scanf("%d" ,&pin);
      	
     if(pin==5678)	{
   		printf("CORRECT PIN");
	   }
    else  {
	    for(i=0; i<2; i++) {
	    	printf("Try Again\n");
	    	printf("Enter PIN ");
         	scanf("%d" ,&pin);
   	    if(pin==5678) {
            printf("CORRECT PIN\n");
    return 0;  // Exit the program after correct PIN
          }
    }
           // If all attempts fail
           printf("Card Is Blocked\n");
		  }
    return 0;
}