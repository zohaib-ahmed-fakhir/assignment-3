#include<stdio.h>
#include<conio.h>

void main()
{
	int math_marks, science_marks, sum;
	scanf("%d", &math_marks);
	printf("Enter marks of Science: ");
	scanf("%d", &science_marks);
	sum = math_marks + science_marks;
	float percentage=0;
	percentage = sum / 200 * 100;
	
	if (percentage>=50)
	{
		if (percentage>=80)
		{
			printf("Congrats..!! You are eligible for admission and qualify for the scholarship");
		}
		else if (percentage<=80 && percentage>=50)
		{
			printf("You are eligible for admission but you can't qualify for scholarship");
		}
	}
 else 
	{
		printf("Ooops..!! You are not eligible for admission and scholarship");
	}
}