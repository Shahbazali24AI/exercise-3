#include<stdio.h>
#include<conio.h>

void main()
{

int age;
char serious_illness;
printf("Enter your Current age:");
scanf("%d",&age);

if(age >= 18 && age <= 45){
	printf("You Are Eligible for the Health Insurance :\n");
}
else if (age > 45 ){
	printf("Do You Have any Serious Illness(Y/N):");
	scanf("%s",&serious_illness);
	if(serious_illness == 'Y'|| serious_illness == 'y')
		{
		printf("You are not Eligible for Health Insurance:\n");
			}
	else{
	printf("You are Eligible for Health Insurance:\n");		
	}

}
else {
	printf("You are Not Eligible for Health Insurance :\n");
}

}