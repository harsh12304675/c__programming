#include<stdio.h>
int main()
{
	int year;
	printf("please enter the year:");
	scanf("%d",&year);
	(year%100!=0 && year%400==0|| year%4==0)?printf("leap year"):printf("  not a leap year");
	return 0;
}
