//ver.220321
//배열과 배열의 크기를 넘겨줌
//오름차순 정렬만 현재는 업데이트
//시일내에 더 적은 메모리사용, 내림차순 업데이트 계획 

#include<iostream>

int countingSort(int*arr, int n);

int main(){
	int arr[10] = {10, 9, 8, 7, 6, 5,4,3,2,1};
	countingSort(arr, 10);
	for(int i =0; i<10; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}

int countingSort(int*arr, int n){
	int max=0;
	
	for(int i=0; i<n; i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	
	int*count = new int[max+1];
	
	for(int i=0; i<max+1; i++){
		count[i]=0;
	}
	
	for(int i=0; i<n; i++){
		count[arr[i]]++;
	}
	
	for(int i=1; i<max+1; i++){
		count[i] = count[i] + count[i-1];
	}
	int*ans = new int[n];
	for(int i=0; i<n; i++){
		ans[count[arr[i]]-1]=arr[i];
		count[arr[i]]--;
	}
	

	
	for(int i=0; i<n; i++){
		arr[i] = ans[i];
	}
	
	delete[] ans, count;
	
	return 0;
}
