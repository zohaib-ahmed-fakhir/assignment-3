#include<stdio.h>
#include<conio.h>
void main()
{
	int number;
	printf("Enter a number from 1 to 7 for day of week:");
	scanf("%d",&number);
	
	if(number >= 1 && number <= 7){
		switch(number){
			case 1:
				printf("Monday");
				break;
			case 2:
				printf("Tuesday");
				break;
			case 3:
				printf("Wednesday");
				break;
			case 4:
				printf("Thursday");
				break;
			case 5:
				printf("Friday");
				break;
			case 6:
				printf("Saturday");
				break;
			case 7:
				printf("Sunday");
				break;
		}
	}
	else
	{
		printf("Invalid Number !");
	}
}