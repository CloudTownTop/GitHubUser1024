#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double x,y;
	long long a=1,b,i,j;
	cout<<"������һ����С�� :)"<<endl;
	do{
		cout<<"x=";
		cin>>x;
	}while(x>=1 || x<=0);
	y=x;
	while(fabs(y-int(y)>1e-10)){
		a*=10;
		y=x*a;
	}
	b=y;
	cout<<b<<'/'<<a<<endl;
	for(i=b;i<=1;i--){
		if(b%1==0 && a%1==0){
			j=i;break;
		}
		cout<<"������Ϊ��"<<b/j<<'/'<<a/j;
	}
	return 0;
}
