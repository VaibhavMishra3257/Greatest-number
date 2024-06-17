#include<iostream>
using namespace std;
main(){
int a,b,c;
	cout<<"enter first number (a) =";
	cin>>a;
	cout<<"enter second number(b) =";
	cin>>b;
	cout<<"enter third number(c) =";
	cin>>c;
	
	
	if (a<b){
		
		if(b<c)
		{
			if (a>c)
			cout<<"c is greatest";
			else
			cout<<"a,c is greatest";
		}
		else
		{
			cout<<"b is greatest";

		}

 }
	else //a>b
	{
	if (a>c){
	
if (a>b)
	cout<<"a is greatest";
	else //b>a
	cout<<"a,b is greatest";}
	
	else{
	
	if(c>b)
	cout<<"c is greatest";
   else
   cout<<"a,b,c are equal";
}

	}
	

	
}
	
	
