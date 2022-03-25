#include<iostream>
#include<string>

using namespace std;

template <typename T>
class Stack{
	private:
		int size;
		T*stackArr;
	public:
		Stack(){
			size = 0;
		}
		
		~Stack(){
			if(size!=0){
				delete stackArr;
			}
		}
		
		int push(T _tmp){

			if(size!=0){
				
				T*tempArr = new T[++size];
				
				for(int i=0; i<size-1; i++){
					tempArr[i] = stackArr[i];
				}
				tempArr[size-1] = _tmp;
				
				delete[] stackArr;
				stackArr = new T[size];
				for(int i=0; i<size; i++){
					stackArr[i] = tempArr[i];
				}
				
				delete[] tempArr;
			}else{
				size++;
				stackArr = new T[1];
				stackArr[0] = _tmp;
			}
			
			return 0;
		}
		
		int pop(){

			if(size!=0){
				T*tempArr = new T[--size];
				
				for(int i=0; i<size; i++){
					tempArr[i] = stackArr[i];
				}
				
				delete[] stackArr;
				stackArr = new T[size];
				for(int i=0; i<size; i++){
					stackArr[i] = tempArr[i];
				}
				
				delete[] tempArr;
				
			}else{
				printf("do not\n");
			}
			return 0;
		}
		
		int empty(){
			if(size==0){
				cout<<"0\n";
				return 0;
			}else{
				cout<<"1\n";
				return 1;
			}
		}
		
		int show(){
			
			show(0);
			return 0;
		}
		
		int show(int _order){

			if(size==0){
				printf("anything\n");
				return 1;
			}
			
			if(_order == 0){
				for(int i=0; i<size; i++){
					cout<<stackArr[i]<<endl;
				}
			}else{
				for(int i=size-1; i>=0; i--){
					cout<<stackArr[i]<<endl;
				}
			}
			
			return 0;
		}
};

int main(){
	Stack<int> stack;
	

	stack.empty();
	stack.pop();
	stack.show();
	stack.show(1);

	
	return 0;
}




