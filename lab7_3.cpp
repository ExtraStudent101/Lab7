#include<iostream>
#include<cmath>
using namespace std;

int adiff (int A,int B){
  int C;
  if(abs(A-B) <= 180) {C = abs(A-B); return C; }
  else if(abs(A-B) == 0) {C = 0; return C;}
  else if(abs(A-B)>= 180 && abs(A-B)<360){C = 360-abs(A-B); return C;}
  else if(abs(A-B)>=360) {C=abs(A-B)%360; return C;}
  return 0;
}


int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
