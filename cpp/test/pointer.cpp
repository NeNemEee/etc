#include<iostream>

using namespace std;

int test(int**arr);

int main(){
	int**arr = new int*[5];
	for(int i=0; i<5; i++){
		arr[i] = new int[2];
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}
	
	test(arr);
	
	for(int i=0; i<5; i++){
		cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
	}
	
	return 0;
}

int test(int**arr){
	int**tes = new int*[5];
	for(int i=0; i<5; i++){
		tes[i] = new int[2];
		tes[i][0] = 1;
		tes[i][1] = 1;

	}
	
	for(int i=0; i<5; i++){
		arr[i] = tes[i];
		delete[] tes[i];
	}
	
	delete[] tes;
	
	return 0;	
}
