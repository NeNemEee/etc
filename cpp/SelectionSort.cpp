//ver.220319
//���� �Լ��� �迭, �迭�Ǳ��̸� �⺻������ ����
//���� ������ ���� �� ������������ ����
//p���� 1�� ��� ������������ ���� 
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
