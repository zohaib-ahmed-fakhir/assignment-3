#include<stdio.h>
#include<conio.h>

void  main()
{
	int balance,withdrawl_amount;
	char permit;
	
	printf("\n===================== ATM WITHDRAWL ELIGIBILITY =====================");
	
	printf("\n\t\t Enter Your  Account Balance :");
	scanf("%d",&balance);
	printf("\t\t Enter the amount you want to withdraw :");
	scanf("%d",&withdrawl_amount);
	
	if(balance >= withdrawl_amount)
	{
		
		if (withdrawl_amount > 10000)
		{
			printf("\n\t    Do you really want to withdraw such amount? (Y/N): ");
            scanf(" %c", &permit);
			
			if (permit == 'Y' || permit == 'y')
			{
				printf("\n\t\t You have successsfully withdraw your amount.\n");
			} else 
			{
				printf("\n\t Withdrawl Cancelled. You have to allow for withdraw such amount.\n");
			}
		}
		else
			{
				printf("\n\t\t You have successsfully withdraw your amount.\n");
			} 
	} else  
	{
		printf("\t\t Withdrawl cancelled.You don't have such amount in your acount.\n");
	}
	printf("\n===================================================================");
	
}