#ver.220318
#배열을 넘겨줌
#p 값이 1 이면 내림차순
#p값이 1이 아니거나 지정하지 않으면 오름차순 


 
#include<iostream>
int bubbleSort(int*arr, int N, int p);
int bubbleSort(int*arr, int N);
int con(int p);

int bubbleSort(int*arr, int N, int p){
	for(int i=0; i<N; i++){
		for(int k=i+1; k<N; k++){
			if(con(p)){
				if(arr[i]<arr[k]){
					int temp = arr[i];
					arr[i] = arr[k];
					arr[k] = temp;
				}
			}else{
				if(arr[i]>arr[k]){
					int temp = arr[i];
					arr[i] = arr[k];
					arr[k] = temp;
				}
			}
		}
	}
	
	return 0;
}

int bubbleSort(int*arr, int N){
	for(int i=0; i<N; i++){
		for(int k=i+1; k<N; k++){	
			if(arr[i]>arr[k]){
				int temp = arr[i];
				arr[i] = arr[k];
				arr[k] = temp;
			}	
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
