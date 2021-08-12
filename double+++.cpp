#include<iostream>

using namespace std;

int main(){
	int m=1,n=7,r,i=1;
	cout<<m/n<<'.';
	r=m%n;
	for(;i<=100;i++){
		cout<<(r*10)/n;
		r=(r*10)%n;
	}
	return 0;
}
