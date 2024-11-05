#include<stdio.h>
#include<conio.h>

void main()
{
	float mathematics,urdu,english, average;
	printf("Enter your mathematics marks:");
	scanf("%f",&mathematics);
	
	printf("Enter your  urdu marks :");
	scanf("%f",&urdu);
	
	printf("Enter your english marks :");
	scanf("%f",&english);
	
	average = (mathematics+ urdu + english)/3;
	
	if(average < 50) {
		printf("Average: %.2f - Result: Fail.\n",average);
	}
	else if  (average > 75){
		printf("Average: %.2f - Result: A\n",average);
	}
	else {
		printf("Average: %.2f - Result: B\n",average);
	}
	return 0;
}