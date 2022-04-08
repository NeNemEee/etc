#include<iostream>

using namespace std;

void swap(int& tmp);
void swap2(int* tmp);

int main(){
	int k(5);
	cout<<k<<endl;
	swap2(&k);
	cout<<k<<endl;
	
	
	return 0;
}

void swap(int& tmp){
	int&pp = tmp;
	
	pp=0;
	cout<<tmp<<endl;
	cout<<pp<<endl;
}

void swap2(int*tmp){
	cout<<tmp<<endl;
	(*tmp)++;
	cout<<tmp<<endl;
	cout<<*tmp<<endl;
}
