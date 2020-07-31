#include<iostream>////C++ language
using namespace std;

int main()
{int n,digit,rev=0;
	cout<<"~~please Enter users digite to Reverse number:- ~~"<<endl;
	cin>>n; //reverse number with user input
	while(n>0)//12345%10 =5 >1234%10=4 ...so on
	{  
		digit=n%10;
		 rev=rev*10+digit;
		 n=n/10;
		
	}
	cout<<"Reverse number is :- "<<rev;
	return 0;
}
	
	
