#include<stdio.h>
int main()
{
	int num,i=1;
	double fact=1;
	printf("enter the number");
	scanf("%i",&num);
	while(i<=num)
	{
	fact=fact*i;
	i++;
	}
	printf("fact of n natural numbers is %li",fact);
}
