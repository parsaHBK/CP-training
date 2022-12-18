#include <iostream>					//find how many anserwrs have 4 unkown in this equation(x1+x2+x3+x4=10)
#include <conio.h>
using namespace std;
int main() {
int resault=0,nr;
for(int i=0;resault=10;)
{		
for(int x1=0;x1<=10;x1++){						
	for(int x2=0;x2<=10;x2++){
		for(int x3=0;x3<=10;x3++){
			for(int x4=0;x4<=10;x4++){
	if(x1+x2+x3+x4==10){
		resault=x1+x2+x3+x4;
cout<<x1<<"\t"<<x2<<"\t"<<x3<<"\t"<<x4<<"\t"<<endl;} 
i++;
nr=i;
}
}
}
}
if(resault=10)break;
}
cout<<"number of ansewr for equation:"<<nr;
getch();
}