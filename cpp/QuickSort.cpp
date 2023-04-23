#include <iostream>
#include <vector>

using namespace std;

void SwapInt(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void QuickSort(vector<int>& arr) {
	//배열의 크기가 1이면 정렬할게 없으므로 반환
	if (arr.size() <= 1) {
		return;
	}

	/*
	pivot은 배열의 중앙
	left와 right는 각 끝에 두었음
	*/
	int pivot = arr.size()/2;
	int left = 0;
	int right = arr.size() - 1;

	while (left < right) {
		if (arr[left] <= arr[pivot]) {//이미 left 위치의 수가 pivot 보다 작거나 같으면 left를 우측으로 옮김
			left++;
		}

		if (arr[right] >= arr[pivot]) {//이미 right 위치의 수가 pivot보다 크거나 같으면 right를 좌측으로 옮김
			right--;
		}

		if (arr[left] > arr[pivot] && arr[right] < arr[pivot]) {//left 가 pivot보다 크고, right 가 pivot 보다 작으면 Swap
			SwapInt(arr[left], arr[right]);
			left++;//Swap 후 각각 좌로 우로 옮겨줌
			right--;
		}
	}

	SwapInt(arr[left], arr[pivot]);//위와 과정을 마친 후 left 와 pivot 의 값 Swap
	pivot = left;//left 의 위치를 pivot의 위치로

	vector<int> leftArr;//pivot 기준 좌측의 배열을 만들어줌
	for (int i = 0; i < pivot; i++) {
		leftArr.push_back(arr[i]);
	}
	vector<int> rightArr;//pivot 기준 우측의 배열을 만들어줌
	for (int i = pivot + 1; i < arr.size(); i++) {
		rightArr.push_back(arr[i]);
	}

	pivot = arr[pivot];

	QuickSort(leftArr);//각각 나눠서 다시 QuickSort를 돌려줌
	QuickSort(rightArr);

	arr.clear();//과정이 끝난 후 다시 합침
	for (int i = 0; i < leftArr.size(); i++) {
		arr.push_back(leftArr[i]);
	}
	arr.push_back(pivot);
	for (int i = 0; i < rightArr.size(); i++) {
		arr.push_back(rightArr[i]);
	}

	return;


}


int main() {
	vector<int> arr;
	for (int i = 100; i > 0; i--) {
		arr.push_back(i*rand());
	}

	QuickSort(arr);

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << endl;
	}


	return 0;
}