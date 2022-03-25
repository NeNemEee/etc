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
		}
		List(T _tmp){
			size = 1;
			data = _tmp;
		}
		List(T _tmp, int _size){
			size = _size;
			data = _tmp;
		}
		~List(){
			if(size!=0){
				
			}
		}
		int push(T _tmp){
			if(size==0){
				data = _tmp;
				size = 1;
			}else{
				
				size++;
				List<T>* _next = new List<T>(_tmp, size);
				next = _next;
			}
			
			return 0;
		}
};

int main(){
	
	return 0;
}
