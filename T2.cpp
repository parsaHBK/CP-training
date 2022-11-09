#include <iostream>

using namespace std;

int main() {
	
int a,b,sum,sub,mul,div;
char sign;
cout<<"guide!!you can use experssion with this charcters(*,-,+,/)"<<"\nenter one experssion: ";
cin>>a>>sign>>b;

if (sign=='+')
{
	sum=a+b;
		cout<<sum;
}
else if (sign=='-')
{
	sub=a-b;
		cout<<sub;
}
else if (sign=='*')
{
	mul=a*b;
		cout<<mul;
}
else if (sign=='/')
{
	div=a/b;
		cout<<div;
}
else
{
	cout<<"\nread again guide!";
}
}
