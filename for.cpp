#include<iostream>
#include<iomanip>//Ϊ�˵���setw()����� 
using namespace std;

int main(){
/*	for(int i1=1;i1<=5;i1++){//forѭ��������ѭ��ִ��һ����ٱ仯
		for(int i2=1;i2<=3;i2++)
			cout<<'*';
		cout<<endl;
	}*/
	/*
        *    |4+4;1
       ***   |3+3;3
      *****  |2+2;5
     ******* |1+1;7
	*/
	int i,j,n,top;
	cout<<"Top=";
	cin>>top;
	for(i=1;i<=top;i++){
		for(n=top-i;n>0;n--)
			cout<<' ';
	for(j=1;j<=i*2-1;j++)
		cout<<'*';
	cout<<endl;
	} 
	return 0;
}
