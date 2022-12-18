#include <iostream>
using namespace std;

void sum_m();
void min_m();
void multi();

int main() {

char mark;
cout<<"matris calcuter!!\t\t\t(guide!!use the marks( +,-,* )"<<endl<<"enter your mark with matris:";
cin>>mark;

switch (mark){
	
	case '+':
	sum_m();
	break;
	case '-':
	min_m();
	break;
	case '*':
	multi();
	break;
	default:
	cout<<"read gauid!!";
	break;
}

}
void sum_m(){
int line,column;
cout<<"matris sum( + ) is work!!"<<endl;
cout<<"enter your first line matris: ";
cin>>line;
cout<<"enter your first column matris: ";
cin>>column;

int matris[line][column];

for(int i=0;i<line;i++){
	for(int j=0;j<column;j++){
		cout<<"matris["<<i<<"]["<<j<<"]=";
			cin>>matris[i][j];
}
}
int line2,column2;
line2=line;
column2=column;

int matris2[line2][column2];
cout<<"enter memebrs secend matris:"<<endl;

for(int i=0;i<line2;i++){
	for(int j=0;j<column2;j++){
		cout<<"matris2["<<i<<"]["<<j<<"]=";
			cin>>matris2[i][j];
}
}

int sum[line][column];

for(int i=0;i<line;i++){
	for(int j=0;j<column;j++)
		sum[i][j]=matris[i][j]+matris2[i][j];
}
cout<<"your matris sum is :"<<endl;
for(int i=0;i<line;i++){
	for(int j=0;j<column;j++){
		cout<<sum[i][j]<<"\t";
			
}
cout<<endl;
}
return;
}
void min_m(){

int line,column;
cout<<"matris minus is work!!( - )"<<endl;
cout<<"enter your line first matris: ";
cin>>line;
cout<<"enter your column first matris: ";
cin>>column;

int matris[line][column];

for(int i=0;i<line;i++){
	for(int j=0;j<column;j++){
		cout<<"matris["<<i<<"]["<<j<<"]=";
			cin>>matris[i][j];
}
}
int line2,column2;
line2=line;
column2=column;

int matris2[line2][column2];
cout<<"enter memebrs secend matris:"<<endl;

for(int i=0;i<line2;i++){
	for(int j=0;j<column2;j++){
		cout<<"matris2["<<i<<"]["<<j<<"]=";
			cin>>matris2[i][j];
}
}

int sum[line][column];

for(int i=0;i<line;i++){
	for(int j=0;j<column;j++)
		sum[i][j]=matris[i][j]-matris2[i][j];
}
cout<<"your matris min is :"<<endl;
for(int i=0;i<line;i++){
	for(int j=0;j<column;j++){
		cout<<sum[i][j]<<"\t";
			
}
cout<<endl;
}
return;
}
void multi(){
	
int line,column;

cout<<"matris multi( * ) is work!!";
cout<<"\t\t\t!!!guide!!! need your column first matris = line secend matris"<<endl;
cout<<"enter your first line matris: ";
cin>>line;
cout<<"enter your first column matris: ";
cin>>column;

int matris[line][column];

for(int i=0;i<line;i++){
	for(int j=0;j<column;j++){
		cout<<"matris["<<i<<"]["<<j<<"]=";
			cin>>matris[i][j];
}
}
int line2,column2;

cout<<"enter your line sec matris:";
cin>>line2;
cout<<"enter your column sec matris:";
cin>>column2;
int matris2[line2][column2];
cout<<"enter memebrs secend matris:"<<endl;

for(int i=0;i<line2;i++){
	for(int j=0;j<column2;j++){
		cout<<"matris2["<<i<<"]["<<j<<"]=";
			cin>>matris2[i][j];
}
}
int line3=line;
int column3=column2;

int mult[line3][column3];						//dev c++ have bug he dosent use 0 on evry matrix member i wright one loop to give 0 on evry members
for(int i=0;i<line3;i++){
	for(int j=0;j<column3;j++){
		mult[i][j]=0;
			
}
cout<<endl;
}
	for (int i=0;i<line3;i++){
	if(column!=line2){
	cout<<"read again guide!!"<<endl;
	break;

}
		for (int j=0;j<column3;j++){
			for (int k=0;k<column && k<line2;k++){
				mult[i][j]=mult[i][j] + matris[i][k] * matris2[k][j];
}
}
}
cout<<"your matris mult is :"<<endl;
for(int i=0;i<line3;i++){
	if(column!=line2)break;
	for(int j=0;j<column3;j++){		
		cout<<mult[i][j]<<"\t";				
}
cout<<endl;
}
return;
}