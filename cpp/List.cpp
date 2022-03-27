#include<iostream>
#include<string>

using namespace std;

template <typename T>
class List{
	private:
		int size;
		T data;
		List<T>* next;
	public:
		List(){
			size = 0;
			next = NULL;
		}

		List(T _tmp, int _size){
			data = _tmp;
			size = _size;
			next = NULL;
		}
		
		~List(){
			if(next!=NULL){
				delete next;
			}
		}
		int push_back(T _tmp, int idx){
			if(size!=idx-1){
				size++;
				push(_tmp, idx+1);
			}else{
				next = new List<T>(_tmp, idx+2);
				size++;
			}
			return 0;
		}
};

int main(){
	
	return 0;
}
