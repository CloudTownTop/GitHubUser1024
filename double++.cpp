#include<iostream>

using namespace std;

int main(){//2/7
	//int a=2,b,c=7,d=99;//a是被除数，b是缓存数据，c是除数，d是小数点后面要保留的位数,n是循环数.
	int a,b,c,d; 
	cout<<"Place: ";
	cin>>a>>c>>d;
	cout<<a/c<<".";
	for(int n=1;n<=d;n++){
		a*=10;
		b=a/c;
		cout<<b;
		a%=c;
	}
	return 0;
}
