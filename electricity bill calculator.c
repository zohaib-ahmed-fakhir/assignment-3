#include<stdio.h>
#include<conio.h>

void main() 
{
    int unit;
    float bill;
	printf("\n\t================ ELECTRICITY BILL CALCULATOR ================\n\n");
    printf("\t\t\tEnter the units consumed: ");
    scanf("%d", &unit);

    if (unit <= 100) {
        bill = 0.0;
    } else {
        if (unit <= 200) {
            bill = unit * 5;
        } else {
            if (unit <= 300) {
                bill = unit * 8;
            } else {
            	if (unit > 300)
				{
				bill = unit * 10;
				}
            }
        }
    }
	printf("\t\t\tYour electricity bill is Rs %.2f/-\n", bill);
	printf("\n\t=============================================================");
}