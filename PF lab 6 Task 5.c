#include <stdio.h>

    int main()
    {
    int number,i,pri=1;
    
    
	printf("Enter Number");
	scanf("%d" ,&number);
	
	for(i=2; i<=number/2; i++) {
	     if(number%i==0) {
        pri=0;
        break;
        } 
        
	}
	    if(pri==1) {
		printf("A PRIME NUMBER");
	}
		 else{
         	printf("Not A Prime Number");
		 }
	return 0;	
	}