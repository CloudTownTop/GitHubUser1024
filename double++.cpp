#include<iostream>

using namespace std;

int main(){//2/7
	//int a=2,b,c=7,d=99;//a�Ǳ�������b�ǻ������ݣ�c�ǳ�����d��С�������Ҫ������λ��,n��ѭ����.
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
