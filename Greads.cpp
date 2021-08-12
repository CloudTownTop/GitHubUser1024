#include<GitHub.h>

using namespace std;

int main(){
	float greads=0,finally,all;
	int students=0;
	while(1){
		cout<<"请输入成绩: ";
		cin>>greads;
		if(greads<0){
			break;
		}
		all+=greads;
		students+=1;
	}
	if(students==0) return 0;
	finally=all/students;
	cout<<"人数："<<students<<endl<<"总分："<<all<<endl<<"平均分："<<finally; 
	return 0;
}
