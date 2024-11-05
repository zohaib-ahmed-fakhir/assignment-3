#include<conio.h>
#include<stdio.h>

void main()
{
	int age, weight;
	printf("\n\t=============== BLOOD DONATION ELIGIBILITY CHECKER ===============");
	printf("\n\n\t\t\t\t Enter your age: ");
	scanf("%d", &age);
	printf("\t\t\t\tEnter your weight: ");
	scanf("%d", &weight);
	
	if(age>=18) 
	{
		if(weight>=50)
		{
			printf("\n\t\t   Hey dear, You are eligible for donate your blood,");
		}
		else 
		{
			printf("\n\t   Sorry, Your weight is less than 50kg. Please gain your weight.");
		}
	}
	else 
	{
		printf("\n\t\tOpps..! You are not eligible for donating your blood.");
	}
	printf("\n\n\t===================================================================\n\n\n\n\n\n");
}