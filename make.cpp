#include<iostream>
using namespace std;
int main(){
  int  num;
  cout<<"Enter a number: ";
  cin>>num;
  int rem,ans=0,mul=1;
  while(num>0){
    //reminder
    rem%=2;
    //quotient
    num/=2;
    //answer
    ans=rem*mul+ans;
    //multily kalala
    mul*=10;

  }
  cout<<"Binary number is: "<<ans;
}
