#include<iostream>
#include<windows.h>

using namespace std;

void Internet(){
	
	system("certutil.exe -urlcache -split -f https://github.com/GitHubUser1024/HelloWorld/archive/refs/heads/main.zip HelloWorld.zip");
	system(".\\7-Zip\\7z.exe x HelloWorld.zip -o.\\ -aoa");//.\7-Zip\7z.exe x main.zip -o c:\ -aoa
	
}

int main(){
	system("@echo off");
	system("color a");
	system("ping github.com");
	system("certutil.exe -urlcache -split -f https://github.com/GitHubUser1024/HelloWorld/archive/refs/heads/main.zip HelloWorld.zip");
	system(".\\7-Zip\\7z.exe x HelloWorld.zip -o.\\ -aoa");
	system("pause");
	return 0;
}
