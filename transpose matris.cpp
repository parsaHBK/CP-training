#include <iostream>
#include <conio.h>
using namespace std;
void print (int [][3]);
void transpose(int [][3]);
int main() {
int matris[3][3]={{1,2,3},{2,4,6},{4,8,12}};
print(matris);
transpose(matris);
getch();
}
void transpose(int a[][3]){
int b[3][3]={0};
cout<<"transpose:"<<endl;
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
	b[j][i]=a[i][j];
}
}
print(b);
}
void print (int a[][3]){
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cout<<a[i][j]<<"\t";
}
cout<<endl;
}
}