#include<iostream>
using namespace std;

int gcd(int a,int b){
	while(a>0 && b>0){
		if(a>b){
		   a=a%b;
		}
		else{
			b=b%a;
		}
		if (a==0){
			cout<<b;
		}else{
			cout<<a;
		}
	}
}
int main(){
	int a,b;
	cout<<"Enter a";
	cin>>a;
	cout<<"Enter b";
	cin>>b;
	gcd(a,b);
	
	
	
}
