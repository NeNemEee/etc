//ver.22.0321
//argc 는 parameter 의 개수
//argv 는 argument 를 담은 parameter 배열
//argv[0]은 파일명, 1이후는 전달받은 parameter 
#include<iostream>

using namespace std;

int main(int argc, char**argv){
	cout<<argc<<endl;
	cout<<"--------------"<<endl;
	for(int i=0; i<argc; i++){
		cout<<argv[i]<<endl;
	}
	
	return 0;
}
