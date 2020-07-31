#include<stdio.h>//C languages

int main()//by jayant
{ 
	int n,digit,rev=0; //reverse number with user input
	
	printf("~~please Enter users digite to Reverse number:- ~~\n");
	scanf("%d",&n);
	
	while(n>0)//12345%10 =5 >1234%10=4 ...so on
	{  
		digit=n%10;
		 rev=rev*10+digit;
		 n=n/10;
		
	}
	printf("Reverse number is :- %d",rev);	
	return 0;
}
