#include<stdio.h>
#include<conio.h>
void main()
{
	int monthly_income;
	char existing_loan;
	printf("Enter your Monthly Income:");
	scanf("%d",&monthly_income);
	
	if(monthly_income >= 30000){
		printf("Do You Have any existing Loan:");
		scanf("%s",&existing_loan);
		
		if (existing_loan == 'Y' || existing_loan == 'y'){
			printf("You should not have any over Due of Your Loan:");
			
			
		}else{
			printf("You are Qualified for loan:");
		}
	}
	else {
		printf("You are Ineligible for loan:");
	}
		
	
}