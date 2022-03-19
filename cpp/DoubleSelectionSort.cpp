//ver.220319
//�Լ��� �迭, �迭�� ����, ���ǰ��� �Ѱ��� 
//p==1 -> ��������
//p!=1 -> �������� 
#include<iostream>

int doubleSelectionSort(int*arr, int n, int p);
int doubleSelectionSort(int*arr, int n);
int con(int p);

int doubleSelectionSort(int*arr, int n, int p){
	int swapX;
	int swapN;
	if(con(p)==1){
		for(int i=0; i<n/2; i++){
			swapX=i;
			swapN=i;
			for(int j=i+1; j<n-i; j++){
				if(arr[swapX]<arr[j]){
					swapX = j;
				}
				if(arr[swapN]>arr[j]){
					swapN = j;
				}
			}
			int tmp = arr[swapX];
			arr[swapX] = arr[i];
			arr[i] = tmp;
			if(i==swapN){
				tmp = arr[swapX];
				arr[swapX] = arr[n-i-1];
				arr[n-i-1] = tmp;
			}else{
				tmp = arr[swapN];
				arr[swapN] = arr[n-i-1];
				arr[n-i-1] = tmp;
			}
			
		}
	}else{
		for(int i=0; i<n/2; i++){
			swapX=i;
			swapN=i;
			for(int j=i+1; j<n-i; j++){
				if(arr[swapX]<arr[j]){
					swapX = j;
				}
				if(arr[swapN]>arr[j]){
					swapN = j;
				}
			}
			int tmp = arr[swapN];
			arr[swapN] = arr[i];
			arr[i] = tmp;
			if(i==swapX){
				tmp = arr[swapN];
				arr[swapN] = arr[n-i-1];
				arr[n-i-1] = tmp;
			}else{
				tmp = arr[swapX];
				arr[swapX] = arr[n-i-1];
				arr[n-i-1] = tmp;
			}
			
		}
	}
	
	
	return 0;
}

int doubleSelectionSort(int*arr, int n){
	int swapX;
	int swapN;
	for(int i=0; i<n/2; i++){
		swapX=i;
		swapN=i;
		for(int j=i+1; j<n-i; j++){
			if(arr[swapX]<arr[j]){
				swapX = j;
			}
			if(arr[swapN]>arr[j]){
				swapN = j;
			}
		}
		int tmp = arr[swapN];
		arr[swapN] = arr[i];
		arr[i] = tmp;
		if(i==swapX){
			tmp = arr[swapN];
			arr[swapN] = arr[n-i-1];
			arr[n-i-1] = tmp;
		}else{
			tmp = arr[swapX];
			arr[swapX] = arr[n-i-1];
			arr[n-i-1] = tmp;
		}
			
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
