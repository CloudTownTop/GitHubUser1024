#include<GitHub.h>

using namespace std;

int rand_num;

void Random_(long MIN,long MAX){
	if(MIN<=MAX){
		srand(time(0));
		rand_num=rand()%(MAX-MIN+1)+MIN;
	}
}

int main(int argc, char** argv) {
	system("color a");
	while(true){
		srand(time(NULL));
		//cout<<rand();
		Random_(0,1);
		cout<<rand_num/rand()+(rand_num*rand())+rand();
	}
	//system(argv[0]);
	return 0;
}
