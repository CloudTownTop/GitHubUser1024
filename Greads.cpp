#include<GitHub.h>

using namespace std;

int main(){
	float greads=0,finally,all;
	int students=0;
	while(1){
		cout<<"������ɼ�: ";
		cin>>greads;
		if(greads<0){
			break;
		}
		all+=greads;
		students+=1;
	}
	if(students==0) return 0;
	finally=all/students;
	cout<<"������"<<students<<endl<<"�ܷ֣�"<<all<<endl<<"ƽ���֣�"<<finally; 
	return 0;
}
