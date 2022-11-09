#include <iostream>
using namespace std;
int main() {
int number;
cout<<"inter your number: ";
cin>>number;

if (number==19 || number==20)
{
	cout<<"A";
}
else if (number==18 || number==17)
{
	cout<<"B";
}
else if (number<17 && number >=14)
{
	cout<<"C";
}
else if (number<14 && number>=12)
{
	cout<<"D";
}
else if (number==10 || number==11)
{
	cout<<"E";
}
else
{
	cout<<"F";
}
}