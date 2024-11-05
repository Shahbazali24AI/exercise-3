#include<stdio.h>
#include<conio.h>

void main()
{
	int age;
	float weight;
	printf("Enter your Age:\n");
	scanf("%d",&age);
	printf("Enter your weight in Kg :\n");
	scanf("%f",&weight);
	
	if(age >= 18 && age <= 65) {
		if(weight >= 50)
		{
			printf("you are Eligible to Donate Blood.\n");
		}
		else 
		{
			printf("You are not Eligible to Donate Blood because of your weight is is less than 50 kg.\n ");
		}
		}
	else 
	{
		printf("You are not Eligible to Donate Blood because your age.\n");
		}	
}