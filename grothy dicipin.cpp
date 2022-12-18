#include <iostream>
#include <conio.h>
using namespace std;
int main() {
const int arrysize=10;
int temp,arr[arrysize] = {20,95,96,9,41,78,692,2,85,6};

for(int i=0;i<arrysize;i++){
	for(int j=0;j<arrysize;j++){
		if(arr[j]>arr[j+1]){
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
}
}
}
cout<<"array with discipline grothy:"<<endl;
for(int i=0;i<10;i++){
	cout<<arr[i]<<"\t";
}
cout<<"\nure secend small number is:"<<arr[1];
getch();
}