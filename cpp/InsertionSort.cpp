//ver.220319
//배열과 배열의 길이 및 p값을 넘겨 줌 
//p==1->내림차순
//p!=1->오름차순
//p값을 생략시 오름차순 
 
#include<iostream>
int insertionSort(int*arr, int n, int p);
int insertionSort(int*arr, int n);
int con(int p);

int insertionSort(int*arr, int n, int p){
	int i=1;
	if(con(p)){
		while(i<n){
			if(arr[i]>arr[i-1]){
				int tmp = arr[i];
				arr[i] = arr[i-1];
				arr[i-1] = tmp;
			}
			
			if(i==1){
				i++;
			}else if(arr[i-1]>arr[i-2]){
				i--;
			}else{
				i++;
			}
		}
	}else{
		while(i<n){
			if(arr[i]<arr[i-1]){
				int tmp = arr[i];
				arr[i] = arr[i-1];
				arr[i-1] = tmp;
			}
			
			if(i==1){
				i++;
			}else if(arr[i-1]<arr[i-2]){
				i--;
			}else{
				i++;
			}
		}
	}
	
	return 0;
}
int insertionSort(int*arr, int n){
	int i=1;
	while(i<n){
		if(arr[i]<arr[i-1]){
			int tmp = arr[i];
			arr[i] = arr[i-1];
			arr[i-1] = tmp;
		}
		
		if(i==1){
			i++;
		}else if(arr[i-1]<arr[i-2]){
			i--;
		}else{
			i++;
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
