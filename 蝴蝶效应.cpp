#include<GitHub.h>

using namespace std;

int main(){
	int n,i;//n1:每天进步0.01；n2:每天退步0.01。 
	n=i=1;
	double n1=n+0.01,n2=n-0.01;
	cout<<"		"<<n1<<"	 "<<n2<<endl;
	while(i<=15){
		n1+=n1;n2*=n2;
		cout<<i<<"		"<<n1<<"	 "<<n2<<endl;//3.39187e-005 ==> 3.39187 * 10^(-5)
		i++;
	}
	return 0;
}
