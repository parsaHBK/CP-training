#include <iostream>
#include <conio.h>
using namespace std;

main()
{
int arrysize;
cout<<"enter number of numbers:";
cin>>arrysize;	
int prime[arrysize/2];
int k=0;
int n,t;
  
for(int i=1;i<arrysize; i++)  			//count numbers 1 until the arrysize
{
  	n=0;
  	for(int j=2;j<=i-1; j++){			//divination numbers 1,2,3....9
   
  	    if( i % j == 0)					//mean arrysize % 1,2,3,....,9 == 0 					its will not prime
  	        n++;
} 	       
    if(n==0)							//mean arrysize % 1,2,3,...,9 =! 0						its will prime
    {
   	 prime[k]=i;
   	 k++;
    }
}
int resau.lt=0;
for(t=0;t<k;t++){
    cout<<prime[t]<<"  ";
resault+=prime[t];
}
cout<<"\nsum of evry prime numbers ="<<resault;
getch();
}

