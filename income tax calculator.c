#include<stdio.h>
#include<conio.h>

void main()
{
	int income;
	float tax;
	
	printf("\n\t================ INCOME TAX CALCULATOR ================");
	printf("\n\n\t\t      Enter your income: ");
	scanf("%d", &income);
	
	if (income <= 250000)
	{
		tax = 0.0;
	} else {
		if(income <= 500000) 
		{
			tax = income * 5 / 100;
		} else {
			if(income <= 1000000)
			{
				tax = income * 10 / 100;
			} else {
				if(income > 1000000)
				{
					tax = income * 15 / 100;
				}
			}
		}
	}
	printf("\n\t\t     Your income tax is %.2f/- ",tax);
	printf("\n\n\t=======================================================");


}