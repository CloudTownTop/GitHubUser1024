#include<GitHub.h>

using namespace std;

int main(){
	float x;
	do{
		cout<<"请输入成绩(0~100)：";cin>>x;
	}while(x<0||x>100);//当满足此条件时跳出
	//与python的“try:"相似
	cout<<"成绩："<<x;
}
