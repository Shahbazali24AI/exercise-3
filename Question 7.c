#include<stdio.h>
#include<conio.h>

void main()
{
	int purchase_amount,final_amount;
	char is_member;
	printf("Enter the Purchase Amount:");
	scanf("%d",&purchase_amount);
	
	if (purchase_amount > 2000)
	{
		printf("Are you a member of our shop? (Y/N):");
		scanf("%c",&is_member);
		
		if (is_member == 'Y' || is_member == 'y')
		{
			final_amount = purchase_amount*0.80; // as 20% discount for members;
		 } 
		 else
		 {
		 	final_amount = purchase_amount*0.90; // as 10% discount for non-members;
		 }
	}
	else {
		final_amount = purchase_amount;
	}
	printf("The Final amount after discount is: %d\n",final_amount);
	return 0;
}