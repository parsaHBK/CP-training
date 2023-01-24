#include <iostream>

int fact(int a){
	
  int f=1;
  for(int i=1;i<=a;i++){
		f*=i;
}
return f;
}

int fact2(int a){
	
  if(a<0)
  	return (-1);

  if(a==0)
  	return(1);

return a*fact2(a-1);

}

int main() {
  std::cout<<fact(4)<<std::endl;
  std::cout<<fact2(4);
}