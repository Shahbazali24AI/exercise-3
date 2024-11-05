#include<stdio.h>
#include<conio.h>
int  main()
{
	int balance,withdrawal_amount;
	char permit;
	
	printf("Enter Your  Account Balance :");
	scanf("%d",&balance);
	
	printf("Enter the amount you want to withdraw :");
	scanf("%c",&withdrawal_amount);
	
	if(balance >= withdrawal_amount){
		
		if (withdrawal_amount > 10000){
			printf("Do You have special withdrawal permit? (Y/N): ");
			scanf("%c",&permit);
			
			if (permit == 'Y' || permit == 'y'){
				printf("Withdrawal Approved.\n");
			} else {
				printf("Withdrawal Denied. Special Withdrawal Permit required for this amount.\n");
			}
		}  else {
				printf("Withdrawal Approved.\n");
			} 
	} else  {
		printf("Insufficient balance. withdrawal denied.\n");
	}
	return 0;
}