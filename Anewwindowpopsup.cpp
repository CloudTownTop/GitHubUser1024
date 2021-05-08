#include<iostream>
#include<windows.h>

using namespace std;

int main(){
    cout<<"Hello,World!"<<endl;
    MessageBox(NULL,"content","title",MB_OK);
    system("pause");
    return 0;
}
