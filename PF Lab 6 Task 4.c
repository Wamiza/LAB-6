#include <stdio.h>

    int main()
{
	int Streak,days=0;
	int i = 0;
	printf("Snap Sent To EachOther ?\n");
	while(i == 0){
	printf("Enter 1 for yes and Enter 2 for No");
	scanf("%d" ,&Streak);
	switch (Streak)
	{
		case 1: 
			days ++;
			break;
		case 2:
		 	 i++;
		 	 break;	
	}
	} // end while
	printf("STREAK : %d", days);
    printf("\nYour STREAKS Set back to 0");
			

	return 0;
} //end main
