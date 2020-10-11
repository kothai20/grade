#include<stdio.h>
int main()
{
	int marks,s1,s2,s3,s4,s5;
	printf("enter marks for s1:");
	scanf("%d",&s1);
	printf("enter marks for s2:");
	scanf("%d",&s2);
	printf("enter marks for s3:");
	scanf("%d",&s3);
	printf("enter marks for s4:");
	scanf("%d",&s4);
	printf("enter marks for s5:");
	scanf("%d",&s5);
	marks=(s1+s2+s3+s4+s5)/5;
	if(marks>=85  & marks<=100)
	{
		printf("Grade A");
	}
	else if(marks>=70 & marks<=84)
	{
		printf("Grade B");
	}
	else if(marks>=55 & marks<=69)
	{
		printf("Grade C");
	}
	else if(marks>=40 & marks<=54)
	{
	printf("Grade D");
	}
	else if(marks<40)
	{
		printf("Grade F");
	}
	else
	{
		printf("enter the valid marks");
	}
	return 1;
}
