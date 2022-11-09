#include <iostream>

using namespace std;

int main() {
float a,b,resualt;
char op;
cout<<"please enter expression: "<<"\nworning!!if you want catch remaining use enteger: ";
cin>>a>>op>>b;
switch(op){
	case '+':
		resualt=a+b;
		break;
	case '-':
		resualt=a-b;
		break;
	case '*':
		resualt=a*b;
		break;
	case '/':
		resualt=a/b;
		break;
	case '%':
		resualt=(int)a%(int)b;
		break;2
}
cout<<"\n"<<resualt;
}