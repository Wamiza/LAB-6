#include <stdio.h>

    int main()
	{
		int number,sum=0;
	
		printf("Enter Number (0 to stop): ");

    while (1) { // Infinite loop, will break when user enters 0
        scanf("%d", &number);

        if (number == 0) {
            break; 
        }

        sum += number;
        printf("Sum: %d\n", sum); 
    }

    printf("Final Sum: %d\n", sum);
    return 0;
}
	