#include<GitHub.h>

using namespace std;

int main(){
	long long x,count=0;
	system("COLOR a");
	cout<<"X=";
	cin>>x;
	while(x!=1){
		cout<<"----> ";
		if(x%2==1) x=x*3+1;
		else x/=2;
		count++;
	}
	cout<<x<<endl;
	cout<<"²½Êý: "<<count<<endl;
	return 0;
}
