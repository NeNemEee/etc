//ver.22.0321
//argc �� parameter �� ����
//argv �� argument �� ���� parameter �迭
//argv[0]�� ���ϸ�, 1���Ĵ� ���޹��� parameter 
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
