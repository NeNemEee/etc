#include<iostream>

using namespace std;

int main(){
	int**arr = new int*[5];
	for(int i=0; i<5; i++){
		arr[i] = new int[2];
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}
	
	arr[1] = arr[0];
	
	cout<<arr[1][0]<<endl<<arr[1][1]<<endl;
	
	return 0;
}
