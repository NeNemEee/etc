//ver.220319
//정렬 함수는 배열, 배열의길이를 기본적으로 받음
//따로 지정이 없을 시 오름차순으로 정렬
//p값이 1인 경우 내림차순으로 정렬 
#include<iostream>

int selectionSort(int*arr, int N, int p);
int selectionSort(int*arr, int N);
int con(int p);


int selectionSort(int*arr, int N, int p){
	int swapN;
	if(con(p)==1){
		for(int i=0; i<N-1; i++){
			swapN = i;
			for(int j=i+1; j<N; j++){
				if(arr[swapN]<arr[j]){
					swapN = j;
				}
			}
			int tmp = arr[swapN];
			arr[swapN] = arr[i];
			arr[i] = tmp;
		}
	}else{
		for(int i=0; i<N-1; i++){
			swapN = i;
			for(int j=i+1; j<N; j++){
				if(arr[swapN]>arr[j]){
					swapN = j;
				}
			}
			int tmp = arr[swapN];
			arr[swapN] = arr[i];
			arr[i] = tmp;
		}
	}
	
	return 0;
}

int selectionSort(int*arr, int N){
	int swapN;

	for(int i=0; i<N-1; i++){
		swapN = i;
		for(int j=i+1; j<N; j++){
			if(arr[swapN]>arr[j]){
				swapN = j;
			}
		}
		int tmp = arr[swapN];
		arr[swapN] = arr[i];
		arr[i] = tmp;
	}
	
	return 0;
}

int con(int p){
	if(p==1){
		return 1;
	}else{
		return 0;
	}
}
