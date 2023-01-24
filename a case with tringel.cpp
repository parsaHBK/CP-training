//if tringel have 90' angle should find area or if havent find Environment

#include <iostream>
#include <math.h>
int main() {

int a,b,c;
  std::cout<<"enter your 3 side of tringel!\n"<<"use first side:";
  std::cin>>a;
  std::cout<<"enter secend side:";
  std::cin>>b;
  std::cout<<"enter third side:";
  std::cin>>c;
int bigside,side2,side3,area=0,env=0;
  bigside=a;
  side2=b;
  side3=c;
if(b>a && b>c){
  bigside=b;
  side2=a;
  side3=c;
}
else if(c>a && c>b){
  bigside=c;
  side2=a;
  side3=b;
}
if(pow(bigside,2)==pow(side2,2)+pow(side3,2)){
  area=side2*side3/2;
  std::cout<<"your tringel have 90'angle and your area is: "<<area;
}
else{	
  env=bigside+side2+side3;
  std::cout<<"your tringel havent a 90' angle !!!\nso your tringel Environment is : "<<env;
}
}