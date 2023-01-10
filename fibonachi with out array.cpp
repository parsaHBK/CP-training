#include <iostream>

int main() {
	
  unsigned long int f1=0,f2=1,f3,n,i=0;
  std::cout<<"number of members for fibonachi algoritm: ";
  std::cin>>n;
  std::cout<<"your fibonachi algoritm is:"<<f1<<"\t"<<f2;
  while(n-2>i){
	  f3=f2+f1;
	  std::cout<<"\t"<<f3;
	  f1=f2;
	  f2=f3;
	  i++;
}
}