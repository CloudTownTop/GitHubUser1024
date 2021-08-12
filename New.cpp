#include<iostream>

using namespace std;

int main(){
	long long n,num=0;
	cin>>n;//
	do{
		num++;//
		n/=10;
	}while(n>0);
	cout<<num<<endl;
	return 0;
}
/*
# wget "https://bitbucket.org/pypa/setuptools/get/default.tar.gz#egg=setuptools-dev" --no-check-certificate
# tar -xzvf default.tar.gz
# cd pypa-setuptools-eb92fc5071bf //依据你的解压目录名而定
# python setup.py install
*/
