#include <stdio.h>

     int main()
     {
     	int a,b,i,sum=0;
     	
     	printf("Enter Starting Point :");
     	scanf("%d" ,&a);
     	printf("Enter Ending Point");
     	scanf("%d" ,&b);
     	
     	for(i=a; i<=b ;i++)
     	{
     	 if(i%2==0) {
     	sum+=i;
      }
     }
     	printf("The Sum Of Even Numbers %d:",sum);
   	return 0;
	 }