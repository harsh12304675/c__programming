#include<stdio.h>
int main()
{
	int price;
	printf("enter the price");
	scanf("%d",&price);
	if(price<=20000)
	{printf("you are eligible for 10 percent discount",price-(price*10/100));
	}
	else{printf("you are eligible for 5 percent discount price-(price*5/100)");
	}
	return 0;
}
