#include <iostream>					//find how many anserwrs have 4 unkown in this equation(x1+x2+x3+x4=10)
#include <conio.h>
using namespace std;
int main() {
int resault=0,nr,n;
cout<<"enter your right number for equation\n*catch your ansewr & number of ansewrs\n(x1+x2+x3+x4 = !(here)!)";
cin>>n;
cout<<"\n\nx1\t\tx2\t\tx3\t\tx4"<<endl<<"_________________________________________________________\n\n";
for(int i=0;resault=n;)
{		
for(int x1=0;x1<=n;x1++){						
	for(int x2=0;x2<=n;x2++){
		for(int x3=0;x3<=n;x3++){
			for(int x4=0;x4<=n;x4++){
	if(x1+x2+x3+x4==n){
      	i++;
			resault=x1+x2+x3+x4;
cout<<x1<<"\t\t"<<x2<<"\t\t"<<x3<<"\t\t"<<x4<<"\t\t"<<endl;} 
nr=i;
}
}
}
}
if(resault=n)break;
}
cout<<"number of ansewrs for equation:"<<nr;
getch();
}
