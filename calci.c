#include<stdio.h>
int main()
{
	int no1,no2;
	char operato;
printf("xxxCalculatorxxx \n operators to select are + - / * %")	;

printf("select the operation \n");
scanf("%c",&operato);
printf("enter no1 \n");
scanf("%d",&no1);
printf("enter no2 \n");
scanf("%d",&no2);
if(operato=='+')
{
printf("%d + %d = %d",no1,no2,no1+no2);}

else if(operato=='-')
{
printf("%d - %d = %d",no1,no2,no1-no2);}

else if(operato=='*')
{
printf("%d * %d = %d",no1,no2,no1*no2);}
else if(operato=='/')
{
printf("%d / %d = %d",no1,no2,no1/no2);}
else {printf("enter valid values");
}




return 0;
	
	
}
