#include<stdio.h>
#include<conio.h>

int main()
{
	int income,tax;
	printf("Enter your annual income :");
	scanf("%d",&income);
	
	if(income <= 250000)
	{
		tax = 0;
	}
	else if(income <= 500000) {
		tax = (income - 250000)*0.5;
	}
	else if(income <= 1000000) {
		tax = (0.5*250000) + ((income-500000)*0.10);
	}
	else {
		tax = (0.5*250000) + (0.10*500000) + ((income-1000000)*0.15);
	}
	
	printf("Your Annual Income Tax is : %.2d",tax);
	return 0;
}