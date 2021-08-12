#include<iostream>
#include<cmath>
#include<windows.h> 

using namespace std;

int main(){
	double x,y;
	long long num;
	cout<<"请输入一个纯小数"<<endl;
	do{
		cout<<"x=";
		cin>>x;
	}while(x>=1||x<=0);
	num=1;
	do{
		num*=10;
		y=x*num;
	}while(fabs(y-int(y))>1e-9);
	cout<<(int)y<<endl;//与"cout<<int(y)<<endl;"作用相当
	system("cmd"); 
	return 0;
}
