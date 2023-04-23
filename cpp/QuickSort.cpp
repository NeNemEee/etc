#include <iostream>
#include <vector>

using namespace std;

void SwapInt(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void QuickSort(vector<int>& arr) {
	//�迭�� ũ�Ⱑ 1�̸� �����Ұ� �����Ƿ� ��ȯ
	if (arr.size() <= 1) {
		return;
	}

	/*
	pivot�� �迭�� �߾�
	left�� right�� �� ���� �ξ���
	*/
	int pivot = arr.size()/2;
	int left = 0;
	int right = arr.size() - 1;

	while (left < right) {
		if (arr[left] <= arr[pivot]) {//�̹� left ��ġ�� ���� pivot ���� �۰ų� ������ left�� �������� �ű�
			left++;
		}

		if (arr[right] >= arr[pivot]) {//�̹� right ��ġ�� ���� pivot���� ũ�ų� ������ right�� �������� �ű�
			right--;
		}

		if (arr[left] > arr[pivot] && arr[right] < arr[pivot]) {//left �� pivot���� ũ��, right �� pivot ���� ������ Swap
			SwapInt(arr[left], arr[right]);
			left++;//Swap �� ���� �·� ��� �Ű���
			right--;
		}
	}

	SwapInt(arr[left], arr[pivot]);//���� ������ ��ģ �� left �� pivot �� �� Swap
	pivot = left;//left �� ��ġ�� pivot�� ��ġ��

	vector<int> leftArr;//pivot ���� ������ �迭�� �������
	for (int i = 0; i < pivot; i++) {
		leftArr.push_back(arr[i]);
	}
	vector<int> rightArr;//pivot ���� ������ �迭�� �������
	for (int i = pivot + 1; i < arr.size(); i++) {
		rightArr.push_back(arr[i]);
	}

	pivot = arr[pivot];

	QuickSort(leftArr);//���� ������ �ٽ� QuickSort�� ������
	QuickSort(rightArr);

	arr.clear();//������ ���� �� �ٽ� ��ħ
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