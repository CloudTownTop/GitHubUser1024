#include<iostream>

using namespace std;

int main(){
	long long n;
	int a,sum=0;
	cout<<"n = ";
	cin>>n;
	do{
		a=n%10;
		sum+=a;
		n/=10;
	}while(n);
	cout<<sum;
	return 0;
}
