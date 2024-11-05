#include<stdio.h>
#include<conio.h>

int main()
{
	int units;
	
	printf("Enter your Bill units\n");
	scanf("%d",&units);
	
	if(units <=100)
	{
		printf("there is no Charge on Your bill %d");
	}
	else if(units >= 110 && units<= 200)
	{
		printf("5 rupees per unit on your Bill %d",units*5);
	}
	else if (units >= 201 && units< 300)
	{
		printf("8 rupees per unit on your Bill %d",units*8);
	}
	else if(units > 300)
	{
		printf("10 rupees per unit on your Bill %d",units*10);
	}
}