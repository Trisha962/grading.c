include<stdio.h>
#include<conio.h>
main()
{
	int marks=0, grades=0;
	printf("Enter your marks here: ");
	scanf("%d", &marks);
	if(marks>=85 && marks<=100)
	{
		printf("Your grade is A");
	}
	else if(marks>=70 && marks<=84)
	{
		printf("Your grade is B");
	}
	else if(marks>=55 && marks<=69)
	{
		printf("Your grade is C");
	}
	else if(marks>=40 && marks<=54)
	{
		printf("Your grade is D");
	}
	else
	{
		printf("Your grade is F");
	}
	return 0;
}
