//ver.220321
//�迭�� �迭�� ũ�⸦ �Ѱ���
//�������� ���ĸ� ����� ������Ʈ
//���ϳ��� �� ���� �޸𸮻��, �������� ������Ʈ ��ȹ 

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
